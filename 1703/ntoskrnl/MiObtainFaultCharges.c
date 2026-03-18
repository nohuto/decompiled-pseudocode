/*
 * XREFs of MiObtainFaultCharges @ 0x1400CDE40
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140107B00 (MiPickClusterForMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiGetPageForHeader @ 0x140109BE0 (MiGetPageForHeader.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14000D798 (MiChargePartitionResidentAvailable.c)
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

__int64 __fastcall MiObtainFaultCharges(ULONG_PTR *a1, unsigned int a2, char a3)
{
  int v6; // r10d
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 CachedResidentAvailable; // r8
  bool v9; // zf
  unsigned __int32 v10; // eax
  unsigned int v11; // ebx

  while ( 1 )
  {
    if ( a2 == 1 )
      v6 = 1;
    else
      v6 = 1024;
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
          v10 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - a2,
                  CachedResidentAvailable);
          v9 = (_DWORD)CachedResidentAvailable == v10;
          LODWORD(CachedResidentAvailable) = v10;
          if ( v9 )
            goto LABEL_7;
        }
        while ( a2 <= (unsigned __int64)v10 );
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)a1, a2, v6) )
      break;
    a2 >>= 1;
    if ( !a2 )
      goto LABEL_23;
  }
LABEL_7:
  if ( a2 )
    goto LABEL_8;
LABEL_23:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1;
  MiChargeResident(a1, 1LL, 0xFFFFFFFFLL);
LABEL_8:
  if ( (a3 & 1) == 0 )
    return a2;
  v11 = a2;
  while ( (unsigned int)MiChargeCommit(a1, v11, 1LL) != 1 )
  {
    v11 >>= 1;
    if ( !v11 )
    {
      if ( (a3 & 2) != 0 )
      {
        v11 = 1;
        MiChargeCommit(a1, 1LL, 4LL);
      }
      break;
    }
  }
  if ( v11 != a2 )
    MiReturnFaultCharges((__int64)a1, a2 - v11, 0LL);
  return v11;
}
