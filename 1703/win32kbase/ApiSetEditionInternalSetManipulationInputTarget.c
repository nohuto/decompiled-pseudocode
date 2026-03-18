/*
 * XREFs of ApiSetEditionInternalSetManipulationInputTarget @ 0x1C013B00C
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C006DF90 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionInternalSetManipulationInputTarget(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rbp
  int v9; // edx

  v5 = 0;
  v7 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      80,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionInternalSetManipulationInputTargetSupported() >= 0 )
    v5 = EditionInternalSetManipulationInputTarget(a1, v7, a3, a4, 0LL, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      14,
      81,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v5;
}
