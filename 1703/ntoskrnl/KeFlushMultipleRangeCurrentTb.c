/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x140143868
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x1400D7E80 (MiAgeWorkingSetTail.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiFlushTbAsNeeded @ 0x1400F9A20 (MiFlushTbAsNeeded.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1400D8F70 (KiIsSecureProcessFlush.c)
 *     KiFlushViaHypervisor @ 0x1400D9420 (KiFlushViaHypervisor.c)
 *     KiFlushRangeTb @ 0x140143924 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlFlushRangeListTb @ 0x1401EB824 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140201138 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140251988 (VmFlushTb.c)
 *     ExFlushTb @ 0x14025D8F8 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushMultipleRangeCurrentTb(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  bool IsSecureProcessFlush; // bp
  __int64 result; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  struct _KPRCB *CurrentPrcb; // rbx
  int v11; // r8d
  int v12; // r9d
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned __int8 CurrentIrql; // bl
  _BYTE v16[8]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-F0h] BYREF
  _DWORD v18[44]; // [rsp+40h] [rbp-E8h] BYREF

  v3 = a1;
  IsSecureProcessFlush = KiIsSecureProcessFlush(0LL, a3);
  if ( !IsSecureProcessFlush )
  {
    result = KiFlushViaHypervisor();
    if ( !(_DWORD)result )
      goto LABEL_3;
  }
  KiPrepareFlushParameters(a3, &v17, v16);
  CurrentPrcb = KeGetCurrentPrcb();
  v18[0] = 1310721;
  memset(&v18[1], 0, 0xA4uLL);
  Group = CurrentPrcb->Group;
  GroupSetMember = CurrentPrcb->GroupSetMember;
  if ( CurrentPrcb->Group )
    LOWORD(v18[0]) = Group + 1;
  *(_QWORD *)&v18[2 * Group + 2] |= GroupSetMember;
  LOBYTE(v12) = IsSecureProcessFlush;
  LOBYTE(v11) = v16[0];
  result = HvlFlushRangeListTb(v17, (unsigned int)v18, v11, v12, v3, a2);
  if ( !(_BYTE)result )
  {
LABEL_3:
    if ( (_DWORD)v3 )
    {
      v8 = (_QWORD *)a2;
      v9 = v3;
      do
      {
        result = KiFlushRangeTb(*v8++, a3);
        --v9;
      }
      while ( v9 );
    }
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v3, a2);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb((unsigned int)v3, a2, a3);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
