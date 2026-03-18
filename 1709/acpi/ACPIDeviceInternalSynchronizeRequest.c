/*
 * XREFs of ACPIDeviceInternalSynchronizeRequest @ 0x1C00021C0
 * Callers:
 *     ACPIDevicePowerFlushQueue @ 0x1C000213C (ACPIDevicePowerFlushQueue.c)
 *     ACPITableLoadCallBack @ 0x1C002AD10 (ACPITableLoadCallBack.c)
 *     ACPIFlushQueuesUnload @ 0x1C0044A18 (ACPIFlushQueuesUnload.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C004ACD4 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C0002A38 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0003CBC (WPP_RECORDER_SF_qss.c)
 */

__int64 __fastcall ACPIDeviceInternalSynchronizeRequest(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // r11
  void *v5; // rcx
  void *v7; // r10
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 result; // rax

  v4 = 0;
  v5 = &unk_1C0067B08;
  v7 = &unk_1C0067B08;
  v8 = a2;
  if ( a1 )
  {
    v9 = a1[1];
    LODWORD(a2) = 0;
    v4 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)a1[70];
      LODWORD(a2) = 0;
      if ( (v9 & 0x400000000000LL) != 0 )
        v7 = (void *)a1[71];
    }
  }
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_qss(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    10,
    25,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    v4,
    (__int64)v5,
    (__int64)v7);
  result = ACPIDeviceInitializePowerRequest(a1, 0LL, v8, a3, 0, 4, 256);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
