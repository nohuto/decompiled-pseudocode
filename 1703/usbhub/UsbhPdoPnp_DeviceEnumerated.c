/*
 * XREFs of UsbhPdoPnp_DeviceEnumerated @ 0x1C0025E80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0025F88 (UsbhQueryD3ColdSupport.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0026110 (UsbhSetPdoRegistryParameter.c)
 *     UsbhPublishBillboardDetails @ 0x1C00564CC (UsbhPublishBillboardDetails.c)
 *     UsbhPublishDualRoleFeaturesProperty @ 0x1C0056678 (UsbhPublishDualRoleFeaturesProperty.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceEnumerated(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rbp
  __int64 PortData; // rax

  v4 = PdoExt((__int64)DeviceObject);
  UsbhQueryD3ColdSupport(*((PDEVICE_OBJECT *)v4 + 147), DeviceObject);
  v5 = PdoExt((__int64)DeviceObject);
  if ( v5[700] )
    UsbhSetPdoRegistryParameter(DeviceObject, L"MsOs20Flags", 4u, v5 + 700, 4u);
  PortData = UsbhGetPortData(*((_QWORD *)v5 + 147), *((_WORD *)v5 + 710));
  if ( PortData )
    UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationRetryCount", 4u, (PVOID)(PortData + 544), 4u);
  UsbhEnableTimerObject(
    *((_QWORD *)v4 + 147),
    (__int64)(v4 + 424),
    10000,
    *((unsigned __int16 *)v4 + 710),
    *((_QWORD *)v4 + 105),
    0x77464E44u);
  if ( *((_QWORD *)v4 + 300) )
    UsbhPublishBillboardDetails(DeviceObject);
  if ( (v4[356] & 0x40000) != 0 )
    UsbhPublishDualRoleFeaturesProperty(DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
