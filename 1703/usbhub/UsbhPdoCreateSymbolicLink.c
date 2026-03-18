/*
 * XREFs of UsbhPdoCreateSymbolicLink @ 0x1C00278DC
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0026110 (UsbhSetPdoRegistryParameter.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoCreateSymbolicLink(PDEVICE_OBJECT DeviceObject, const GUID *InterfaceClassGuid)
{
  _DWORD *v4; // rdi
  struct _UNICODE_STRING *v5; // rsi
  NTSTATUS v6; // ebx
  int v8; // eax
  void *v9; // rcx
  int v10; // [rsp+48h] [rbp-10h]

  v4 = PdoExt((__int64)DeviceObject);
  v5 = (struct _UNICODE_STRING *)(v4 + 298);
  v6 = IoRegisterDeviceInterface(DeviceObject, InterfaceClassGuid, 0LL, (PUNICODE_STRING)(v4 + 298));
  if ( v6 < 0 )
    goto LABEL_11;
  v6 = IoSetDeviceInterfaceState(v5, 1u);
  if ( v6 < 0
    || (v4[353] |= 0x10u,
        v6 = UsbhSetPdoRegistryParameter(
               DeviceObject,
               L"SymbolicName",
               1u,
               *((PVOID *)v4 + 150),
               *((unsigned __int16 *)v4 + 596)),
        v6 < 0) )
  {
    v8 = v4[353];
    if ( (v8 & 0x10) != 0 )
    {
      v4[353] = v8 & 0xFFFFFFEF;
      IoSetDeviceInterfaceState(v5, 0);
    }
    v4[353] &= ~8u;
    v9 = (void *)*((_QWORD *)v4 + 150);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *((_QWORD *)v4 + 150) = 0LL;
    }
  }
  else
  {
    v4[353] |= 8u;
  }
  if ( v6 < 0 )
  {
LABEL_11:
    LOBYTE(v10) = 0;
    UsbhException(*((_QWORD *)v4 + 147), *((unsigned __int16 *)v4 + 710), 101, 0, 0, v6, -1, usbfile_pdo_c, 359, v10);
  }
  Log(*((_QWORD *)v4 + 147), 256, 1937337676, v6, (__int64)DeviceObject);
  return (unsigned int)v6;
}
