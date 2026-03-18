/*
 * XREFs of UsbhPublishDualRoleFeaturesProperty @ 0x1C0056570
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C001FBA0 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

void __fastcall UsbhPublishDualRoleFeaturesProperty(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rdi
  NTSTATUS v3; // eax
  int Data; // [rsp+58h] [rbp+10h] BYREF

  v2 = PdoExt((__int64)Pdo);
  Data = v2[758];
  v3 = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbDualRoleFeatures, 0, 0, 7u, 4u, &Data);
  if ( v3 < 0 )
    Log(*((_QWORD *)v2 + 147), 256, 1685221425, v3, (__int64)Pdo);
}
