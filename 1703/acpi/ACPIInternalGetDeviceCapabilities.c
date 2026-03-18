/*
 * XREFs of ACPIInternalGetDeviceCapabilities @ 0x1C008DD8C
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C008DC9C (ACPIMatchHardwareAddress.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008E730 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008DE08 (ACPIInternalSendSynchronousIrp.c)
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
