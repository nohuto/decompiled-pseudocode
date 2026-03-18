/*
 * XREFs of ACPIDeviceInternalSynchronizeRequest @ 0x1C001AB84
 * Callers:
 *     ACPIFlushQueuesUnload @ 0x1C00120A8 (ACPIFlushQueuesUnload.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001C09C (ACPIDevicePowerFlushQueue.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0020BA4 (AcpiDeviceResetInvokeReset.c)
 *     ACPITableLoadCallBack @ 0x1C003B3D0 (ACPITableLoadCallBack.c)
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x1C0012DE0 (WPP_RECORDER_SF_qss.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001A5DC (ACPIDeviceInitializePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceInternalSynchronizeRequest(
        _QWORD *a1,
        void (__fastcall *a2)(__int64, __int64, _QWORD),
        __int64 a3)
{
  char v4; // r11
  const char *v5; // rcx
  const char *v7; // r10
  __int64 v9; // rax
  __int64 result; // rax

  v4 = 0;
  v5 = (const char *)&unk_1C005B1F0;
  v7 = (const char *)&unk_1C005B1F0;
  if ( a1 )
  {
    v9 = a1[1];
    v4 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)a1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v7 = (const char *)a1[71];
    }
  }
  WPP_RECORDER_SF_qss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x19u,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    v4,
    v5,
    v7);
  result = ACPIDeviceInitializePowerRequest((__int64)a1, 0, a2, a3, 0, 4, 0x100u);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
