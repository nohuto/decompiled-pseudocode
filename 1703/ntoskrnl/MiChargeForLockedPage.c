/*
 * XREFs of MiChargeForLockedPage @ 0x1400CCDF0
 * Callers:
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x140107260 (MiFinishMdlForMappedFileFault.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x14010B1D8 (MiCheckProtoPtePageState.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14000D798 (MiChargePartitionResidentAvailable.c)
 *     MiIsPfnCommitNotCharged @ 0x1400CCF10 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r11d
  unsigned __int64 v4; // r10
  char v5; // si
  __int64 v6; // r10
  ULONG_PTR *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v10; // ett
  unsigned int v11; // ebx
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
  {
    v2 = 0xFFFFFFFFLL;
    v3 = 4;
  }
  else
  {
    v2 = 0LL;
    v3 = 8;
  }
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  if ( (v4 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(a1) )
  {
    v5 = 1;
  }
  v6 = (v4 >> 40) & 0x3FF;
  v7 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * v6);
  if ( !v5 || (result = MiChargeCommit(*(_QWORD *)(qword_14036C8F8 + 8 * v6), 1LL, v3), (_DWORD)result) )
  {
    if ( v7 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v10 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v10 == CachedResidentAvailable )
            return 1;
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v11 = MiChargePartitionResidentAvailable((__int64)v7, 1uLL, v2);
    if ( !v11 )
    {
      if ( v5 )
        MiReturnCommit(v7, 1LL);
    }
    return v11;
  }
  return result;
}
