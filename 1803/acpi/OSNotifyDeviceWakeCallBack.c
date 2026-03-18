/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x1C002F460
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C002EECC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C002F100 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C002F2CC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C004066C (ACPIWakeDisableAsync.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00299A8 (WPP_RECORDER_SF_q.c)
 *     ACPIWakeCompleteRequestQueue @ 0x1C0040580 (ACPIWakeCompleteRequestQueue.c)
 */

void __fastcall OSNotifyDeviceWakeCallBack(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( (_QWORD *)*a4 == a4 )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      21,
      29,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      (char)a4);
  else
    ACPIWakeCompleteRequestQueue(a4);
  ExFreePoolWithTag(a4, 0);
}
