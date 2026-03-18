/*
 * XREFs of ACPIDeviceInternalSynchronizeRequest @ 0x1C000F83C
 * Callers:
 *     ACPIDevicePowerFlushQueue @ 0x1C00087A0 (ACPIDevicePowerFlushQueue.c)
 *     ACPITableLoadCallBack @ 0x1C0029E20 (ACPITableLoadCallBack.c)
 *     ACPIFlushQueuesUnload @ 0x1C0045050 (ACPIFlushQueuesUnload.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C004B8D4 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C00094B0 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000F60C (WPP_RECORDER_SF_qss.c)
 */

__int64 __fastcall ACPIDeviceInternalSynchronizeRequest(_QWORD *a1, _SLIST_ENTRY *a2, __int64 a3)
{
  char v4; // r11
  const char *v5; // rcx
  const char *v7; // r10
  __int64 v9; // rax
  __int64 result; // rax

  v4 = 0;
  v5 = (const char *)&unk_1C0066CD0;
  v7 = (const char *)&unk_1C0066CD0;
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
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    v4,
    v5,
    v7);
  result = ACPIDeviceInitializePowerRequest((__int64)a1, 0, a2, a3, 0, 4, 0x100u);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
