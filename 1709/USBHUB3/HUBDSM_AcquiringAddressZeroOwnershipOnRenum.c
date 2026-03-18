/*
 * XREFs of HUBDSM_AcquiringAddressZeroOwnershipOnRenum @ 0x1C001A390
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x1C001F7E4 (HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_AcquiringAddressZeroOwnershipOnRenum(__int64 a1)
{
  HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
