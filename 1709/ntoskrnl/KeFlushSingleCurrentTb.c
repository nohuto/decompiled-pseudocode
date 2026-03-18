/*
 * XREFs of KeFlushSingleCurrentTb @ 0x1400D034C
 * Callers:
 *     MiDbgReleaseAddress @ 0x140227BA8 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140227C44 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140227F74 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x140228014 (MiDbgWriteCheck.c)
 *     MmReadProcessPageTables @ 0x1402283A0 (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x140430834 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1400574F0 (KiIsSecureProcessFlush.c)
 *     HvlFlushSingleTb @ 0x140141058 (HvlFlushSingleTb.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     VmFlushTb @ 0x1402781F8 (VmFlushTb.c)
 *     ExFlushTb @ 0x140287438 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, unsigned int a2)
{
  bool IsSecureProcessFlush; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // r8
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v12; // [rsp+20h] [rbp-A9h] BYREF
  __int128 v13; // [rsp+28h] [rbp-A1h]
  _DWORD v14[44]; // [rsp+40h] [rbp-89h] BYREF

  _R15D = 0;
  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  if ( !IsSecureProcessFlush && (HvlEnlightenments & 2) == 0 )
    goto LABEL_6;
  CurrentPrcb = KeGetCurrentPrcb();
  v14[0] = 1310721;
  memset(&v14[1], 0, 0xA4uLL);
  Group = CurrentPrcb->Group;
  GroupSetMember = CurrentPrcb->GroupSetMember;
  if ( CurrentPrcb->Group )
    LOWORD(v14[0]) = Group + 1;
  *(_QWORD *)&v14[2 * Group + 2] |= GroupSetMember;
  LOBYTE(v7) = IsSecureProcessFlush;
  result = HvlFlushSingleTb(0LL, v14, v7, a1);
  if ( !(_BYTE)result )
  {
LABEL_6:
    result = (unsigned int)(1 << a2);
    if ( (result & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        result = (__int64)KeGetCurrentThread();
        if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) )
        {
          *(_QWORD *)&v13 = 1LL;
          *((_QWORD *)&v13 + 1) = a1;
          __asm { invpcid r15d, [rsp+120h+var_F8] }
        }
      }
    }
    __invlpg((void *)a1);
  }
  if ( VmTbFlushEnabled )
  {
    v12 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    result = VmFlushTb(1LL, &v12, a2);
  }
  if ( ExTbFlushActive )
  {
    v12 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(1LL, &v12, a2);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
