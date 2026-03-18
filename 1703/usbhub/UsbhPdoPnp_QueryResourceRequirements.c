/*
 * XREFs of UsbhPdoPnp_QueryResourceRequirements @ 0x1C001B410
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C003FB5C (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C003FC28 (UsbhInstallMsOsExtendedProperties.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryResourceRequirements(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  _DWORD *v4; // rbx
  int v5; // eax
  unsigned int Status; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  NTSTATUS v10; // eax

  v4 = PdoExt((__int64)Pdo);
  v4[353] |= 0x400u;
  v5 = v4[353];
  if ( (v5 & 0x800) == 0 && (v4[700] & 0x40) != 0 )
  {
    v8 = PdoExt((__int64)Pdo);
    UsbhInstallMsOs20RegistryProperties(v8 + 236, Pdo);
  }
  else if ( (v5 & 0x820) == 0 && (v4[356] & 0x400) != 0 )
  {
    v9 = PdoExt((__int64)Pdo);
    UsbhInstallMsOsExtendedProperties(v9 + 236, Pdo);
  }
  if ( (v4[700] & 0x100) != 0 && (v4[353] & 0x800) == 0 )
  {
    v10 = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_ModelId, 0, 0, 0xDu, 0x10u, (PVOID)(*((_QWORD *)v4 + 355) + 4LL));
    if ( v10 < 0 )
      Log(*((_QWORD *)v4 + 147), 256, 1364349489, v10, 0LL);
  }
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
