/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x1C0052860
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C00522CC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0052500 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00526CC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C005A400 (ACPIWakeDisableAsync.c)
 * Callees:
 *     ACPIWakeCompleteRequestQueue @ 0x1C00016E8 (ACPIWakeCompleteRequestQueue.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E138 (WPP_RECORDER_SF_q.c)
 */

void __fastcall OSNotifyDeviceWakeCallBack(__int64 a1, char a2, __int64 a3, _QWORD **a4)
{
  if ( *a4 == a4 )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      21,
      29,
      (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
      (char)a4);
  else
    ACPIWakeCompleteRequestQueue(a4, a2);
  ExFreePoolWithTag(a4, 0);
}
