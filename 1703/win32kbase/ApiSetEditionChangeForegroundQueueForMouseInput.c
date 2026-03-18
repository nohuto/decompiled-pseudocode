/*
 * XREFs of ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1C0004EA8
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C00461DC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionChangeForegroundQueueForMouseInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v5; // edx

  v2 = a2;
  v3 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      34,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionChangeForegroundQueueForMouseInputSupported() >= 0 )
    v3 = EditionChangeForegroundQueueForMouseInput(a1, v2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      14,
      35,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v3;
}
