/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x1C0051E20
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C005188C (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051AC0 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0051C8C (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C005998C (ACPIWakeDisableAsync.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0017654 (WPP_RECORDER_SF_q.c)
 *     ACPIWakeCompleteRequestQueue @ 0x1C00598A0 (ACPIWakeCompleteRequestQueue.c)
 */

void __fastcall OSNotifyDeviceWakeCallBack(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( (_QWORD *)*a4 == a4 )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      21,
      29,
      (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
      (char)a4);
  else
    ACPIWakeCompleteRequestQueue(a4);
  ExFreePoolWithTag(a4, 0);
}
