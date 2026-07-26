/*
 * XREFs of ?ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00AC5C4
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AF8C0 (ndisPnPAddDevice.c)
 * Callees:
 *     ??1NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ @ 0x1C00AC840 (--1NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ.c)
 *     ??0NDIS_SETUP_DEVICE_EXTENSION@@QEAA@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00AC8E8 (--0NDIS_SETUP_DEVICE_EXTENSION@@QEAA@PEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __fastcall ndisSetupDeviceAdd(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2)
{
  NTSTATUS result; // eax
  PDEVICE_OBJECT v4; // rbx
  void *DeviceExtension; // rcx
  NDIS_SETUP_DEVICE_EXTENSION *v6; // rbx
  PDEVICE_OBJECT v7; // rax
  NTSTATUS v8; // edi
  PDEVICE_OBJECT SourceDevice; // [rsp+60h] [rbp+18h] BYREF

  SourceDevice = 0LL;
  result = IoCreateDevice(a1, 0xE0u, 0LL, 0x22u, 0x100u, 0, &SourceDevice);
  if ( result >= 0 )
  {
    v4 = SourceDevice;
    DeviceExtension = SourceDevice->DeviceExtension;
    if ( DeviceExtension )
    {
      NDIS_SETUP_DEVICE_EXTENSION::NDIS_SETUP_DEVICE_EXTENSION(DeviceExtension, SourceDevice);
      v4 = SourceDevice;
    }
    v6 = (NDIS_SETUP_DEVICE_EXTENSION *)v4->DeviceExtension;
    v6->Pdo = a2;
    v7 = IoAttachDeviceToDeviceStack(SourceDevice, a2);
    v6->NextDeviceObject = v7;
    if ( v7 )
    {
      v8 = IoRegisterDeviceInterface(a2, &GUID_DEVINTERFACE_NETSETUPNEEDED, 0LL, &v6->SymbolicName);
      if ( v8 >= 0 )
      {
        v6 = 0LL;
        SourceDevice->Flags |= 0x2004u;
        SourceDevice->Flags &= ~0x80u;
        v8 = 0;
      }
    }
    else
    {
      v8 = -1073741667;
    }
    if ( v6 )
      NDIS_SETUP_DEVICE_EXTENSION::~NDIS_SETUP_DEVICE_EXTENSION(v6);
    return v8;
  }
  return result;
}
