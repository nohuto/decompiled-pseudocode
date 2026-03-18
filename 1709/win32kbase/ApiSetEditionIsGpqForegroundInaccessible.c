/*
 * XREFs of ApiSetEditionIsGpqForegroundInaccessible @ 0x1C0011F2C
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C00101F0 (NtUserGetAsyncKeyState.c)
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
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
      272,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
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
      273,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  return IsGpqForegroundInaccessible;
}
