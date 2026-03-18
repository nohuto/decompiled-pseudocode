/*
 * XREFs of ApiSetEditionIsGpqForegroundInaccessible @ 0x1C004E1AC
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 *     NtUserGetAsyncKeyState @ 0x1C004E480 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundInaccessible(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int IsGpqForegroundInaccessible; // ebx
  int v5; // edx

  v2 = a2;
  IsGpqForegroundInaccessible = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      260,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionIsGpqForegroundInaccessibleSupported() >= 0 )
    IsGpqForegroundInaccessible = EditionIsGpqForegroundInaccessible(a1, v2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      14,
      261,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return IsGpqForegroundInaccessible;
}
