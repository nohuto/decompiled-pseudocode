/*
 * XREFs of MiReturnFaultCharges @ 0x1400D13B8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiGetPageForHeader @ 0x14004DD9C (MiGetPageForHeader.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiFreeReadListPages @ 0x1404BBFB8 (MiFreeReadListPages.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

unsigned __int64 __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 result; // rax

  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    result = MiReturnResidentAvailable(a2, a2);
  else
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a2);
  if ( (a3 & 1) != 0 )
    return MiReturnCommit(a1, a2);
  return result;
}
