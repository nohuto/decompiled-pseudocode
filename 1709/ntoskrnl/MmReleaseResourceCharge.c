/*
 * XREFs of MmReleaseResourceCharge @ 0x140006508
 * Callers:
 *     SmAcquireReleaseCharges @ 0x1400059FC (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x140005A48 (MmChargeResources.c)
 *     HvViewMapCleanup @ 0x14059CCA8 (HvViewMapCleanup.c)
 *     HvpViewMapReleaseChargesForPinnedPages @ 0x1406A083C (HvpViewMapReleaseChargesForPinnedPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MmReleaseResourceCharge(__int64 a1, char a2, unsigned int a3)
{
  char v3; // r11
  __int64 v4; // r10
  __int64 result; // rax

  v3 = a2;
  v4 = a1;
  if ( (a2 & 2) != 0 && a3 <= 1 )
    result = MiReturnResidentAvailable();
  if ( (v3 & 1) != 0 )
    return MiReturnCommit(&MiSystemPartition, v4);
  return result;
}
