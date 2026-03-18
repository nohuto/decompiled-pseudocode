/*
 * XREFs of UsbhPdoPnp_QueryResourceRequirements @ 0x1C001BE40
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C0040928 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00409F4 (UsbhInstallMsOsExtendedProperties.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryResourceRequirements(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // ecx
  unsigned int Status; // ebx
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  NTSTATUS v11; // eax

  v4 = PdoExt((__int64)Pdo);
  v5 = v4;
  v4[353] |= 0x400u;
  v6 = v4[353];
  if ( (v4[704] & 0x40) == 0 || (v6 & 0x800) != 0 )
  {
    if ( (v4[356] & 0x400) != 0 && (v6 & 0x820) == 0 )
    {
      v10 = PdoExt((__int64)Pdo);
      UsbhInstallMsOsExtendedProperties(v10 + 236, Pdo);
    }
  }
  else
  {
    v9 = PdoExt((__int64)Pdo);
    UsbhInstallMsOs20RegistryProperties(v9 + 236, Pdo);
  }
  if ( (v5[704] & 0x100) != 0 && (v5[353] & 0x800) == 0 )
  {
    v11 = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_ModelId, 0, 0, 0xDu, 0x10u, (PVOID)(*((_QWORD *)v5 + 357) + 4LL));
    if ( v11 < 0 )
      Log(*((_QWORD *)v5 + 147), 256, 1364349489, v11, 0LL);
  }
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
