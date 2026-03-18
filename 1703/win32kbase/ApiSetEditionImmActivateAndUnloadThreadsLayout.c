/*
 * XREFs of ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1C013AE94
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C007A3A8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v6; // edi
  __int64 result; // rax
  int v9; // edx

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      234,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsEditionImmActivateAndUnloadThreadsLayoutSupported();
  if ( (int)result >= 0 )
    result = EditionImmActivateAndUnloadThreadsLayout(a1, v6, 0LL, a4, a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v9,
             14,
             235,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
