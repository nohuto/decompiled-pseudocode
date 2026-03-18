/*
 * XREFs of ACPIInternalGetDeviceCapabilities @ 0x1C007D7F0
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C007E4A4 (ACPIMatchHardwareAddress.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0088B20 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C007DA98 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIInternalGetDeviceCapabilities(PDEVICE_OBJECT DeviceObject, _DWORD *a2)
{
  _QWORD v5[9]; // [rsp+20h] [rbp-58h] BYREF

  memset(v5, 0, sizeof(v5));
  LOWORD(v5[0]) = 2331;
  v5[1] = a2;
  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[2] = -1;
  a2[3] = -1;
  return ACPIInternalSendSynchronousIrp(DeviceObject);
}
