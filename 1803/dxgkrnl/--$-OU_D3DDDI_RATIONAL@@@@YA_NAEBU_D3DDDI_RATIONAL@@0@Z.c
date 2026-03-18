/*
 * XREFs of ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C000A800
 * Callers:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00070F8 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0238D60 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     SupportedPixelRate @ 0x1C023C430 (SupportedPixelRate.c)
 *     SupportedVideoSignal @ 0x1C023C5A0 (SupportedVideoSignal.c)
 * Callees:
 *     <none>
 */

char __fastcall operator><_D3DDDI_RATIONAL>(unsigned int *a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  char result; // al

  v2 = a1[1];
  v3 = a2[1];
  if ( v3 * (unsigned __int64)*a1 < v2 * (unsigned __int64)*a2 )
    return 0;
  result = 1;
  if ( *a1 == *a2 && (_DWORD)v2 == (_DWORD)v3 )
    return 0;
  return result;
}
