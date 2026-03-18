/*
 * XREFs of FsRtlHeatUninit @ 0x1406B1DC0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpHeatUnregisterVolume @ 0x1406B1F84 (FsRtlpHeatUnregisterVolume.c)
 */

__int64 __fastcall FsRtlHeatUninit(__int64 a1, __int64 a2)
{
  return FsRtlpHeatUnregisterVolume(a2);
}
