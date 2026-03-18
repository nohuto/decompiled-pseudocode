/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x1401502AC
 * Callers:
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiFlushTbAsNeeded @ 0x14009BE70 (MiFlushTbAsNeeded.c)
 *     MiAgeWorkingSetTail @ 0x14009EF90 (MiAgeWorkingSetTail.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1400574F0 (KiIsSecureProcessFlush.c)
 *     KiFlushViaHypervisor @ 0x140059270 (KiFlushViaHypervisor.c)
 *     HvlFlushRangeListTb @ 0x140141198 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x1401442BC (KiPrepareFlushParameters.c)
 *     KiFlushRangeTb @ 0x140150368 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     VmFlushTb @ 0x1402781F8 (VmFlushTb.c)
 *     ExFlushTb @ 0x140287438 (ExFlushTb.c)
 */

char __fastcall KeFlushMultipleRangeCurrentTb(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  bool IsSecureProcessFlush; // r14
  int v7; // eax
  _QWORD *v8; // rbx
  __int64 v9; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  int v11; // r8d
  int v12; // r9d
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned __int8 CurrentIrql; // bl
  _BYTE v17[8]; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-F0h] BYREF
  _DWORD v19[44]; // [rsp+40h] [rbp-E8h] BYREF

  v4 = a1;
  IsSecureProcessFlush = KiIsSecureProcessFlush(0LL, a3);
  if ( !IsSecureProcessFlush )
  {
    v7 = KiFlushViaHypervisor();
    if ( !v7 )
      goto LABEL_3;
  }
  KiPrepareFlushParameters(a3, &v18, v17);
  CurrentPrcb = KeGetCurrentPrcb();
  v19[0] = 1310721;
  memset(&v19[1], 0, 0xA4uLL);
  Group = CurrentPrcb->Group;
  GroupSetMember = CurrentPrcb->GroupSetMember;
  if ( CurrentPrcb->Group )
    LOWORD(v19[0]) = Group + 1;
  *(_QWORD *)&v19[2 * Group + 2] |= GroupSetMember;
  LOBYTE(v12) = IsSecureProcessFlush;
  LOBYTE(v11) = v17[0];
  LOBYTE(v7) = HvlFlushRangeListTb(v18, (__int64)v19, v11, v12, v4, a2);
  if ( !(_BYTE)v7 )
  {
LABEL_3:
    if ( (_DWORD)v4 )
    {
      v8 = (_QWORD *)a2;
      v9 = v4;
      do
      {
        LOBYTE(v7) = KiFlushRangeTb(*v8++, a3);
        --v9;
      }
      while ( v9 );
    }
  }
  if ( VmTbFlushEnabled )
    LOBYTE(v7) = VmFlushTb((unsigned int)v4, a2, a3);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb((unsigned int)v4, a2, a3);
    LOBYTE(v7) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return v7;
}
