/*
 * XREFs of MmReleaseResourceCharge @ 0x14005DBF8
 * Callers:
 *     SmAcquireReleaseCharges @ 0x14005DBA8 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x14005DC3C (MmChargeResources.c)
 *     HvViewMapCleanup @ 0x14045C15C (HvViewMapCleanup.c)
 *     HvpViewMapReleaseChargesForPinnedPages @ 0x1406762FC (HvpViewMapReleaseChargesForPinnedPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 */

__int64 __fastcall MmReleaseResourceCharge(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r11
  __int64 v4; // r10
  __int64 result; // rax

  v3 = a2;
  v4 = a1;
  if ( (a2 & 2) != 0 && (!(_DWORD)a3 || (_DWORD)a3 == 1) )
    result = MiReturnResidentAvailable(a1, a2, a3);
  if ( (v3 & 1) != 0 )
    return MiReturnCommit(&MiSystemPartition, v4);
  return result;
}
