/*
 * XREFs of ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C0002234
 * Callers:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000CE28 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0105344 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     SupportedPixelRate @ 0x1C01E8710 (SupportedPixelRate.c)
 *     SupportedVideoSignal @ 0x1C01E888C (SupportedVideoSignal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall operator><_D3DDDI_RATIONAL>(unsigned int *a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  v2 = a1[1];
  v3 = a2[1];
  return v3 * (unsigned __int64)*a1 >= v2 * (unsigned __int64)*a2 && (*a1 != *a2 || (_DWORD)v2 != (_DWORD)v3);
}
