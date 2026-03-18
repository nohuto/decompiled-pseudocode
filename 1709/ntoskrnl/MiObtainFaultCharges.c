/*
 * XREFs of MiObtainFaultCharges @ 0x1400383C0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiPickClusterForMappedFileFault @ 0x1400281E0 (MiPickClusterForMappedFileFault.c)
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiGetPageForHeader @ 0x1400EE050 (MiGetPageForHeader.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiObtainFaultCharges(ULONG_PTR *a1, unsigned int a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v8; // zf
  unsigned __int32 v9; // eax
  unsigned int v10; // ebx

  while ( 1 )
  {
    if ( a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( a2 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v9 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable - a2,
                 CachedResidentAvailable);
          v8 = (_DWORD)CachedResidentAvailable == v9;
          LODWORD(CachedResidentAvailable) = v9;
          if ( v8 )
            goto LABEL_5;
        }
        while ( a2 <= (unsigned __int64)v9 );
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1) )
      break;
    a2 >>= 1;
    if ( !a2 )
      goto LABEL_18;
  }
LABEL_5:
  if ( a2 )
    goto LABEL_6;
LABEL_18:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1;
  MiChargeResident(a1, 1uLL);
LABEL_6:
  if ( (a3 & 1) == 0 )
    return a2;
  v10 = a2;
  while ( (unsigned int)MiChargeCommit(a1, v10, 1LL) != 1 )
  {
    v10 >>= 1;
    if ( !v10 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = 1;
        MiChargeCommit(a1, 1LL, 4LL);
      }
      break;
    }
  }
  if ( v10 != a2 )
    MiReturnFaultCharges(a1, a2 - v10, 0LL);
  return v10;
}
