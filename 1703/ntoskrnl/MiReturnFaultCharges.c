/*
 * XREFs of MiReturnFaultCharges @ 0x14003B28C
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiGetPageForHeader @ 0x140109BE0 (MiGetPageForHeader.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MiFreeReadListPages @ 0x140515BFC (MiFreeReadListPages.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 */

__int64 __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v3; // bl
  unsigned __int64 v4; // r11
  __int64 v5; // r10
  __int64 result; // rax

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    result = MiReturnResidentAvailable(a2, a2, a3);
  else
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), a2);
  if ( (v3 & 1) != 0 )
    return MiReturnCommit(v5, v4);
  return result;
}
