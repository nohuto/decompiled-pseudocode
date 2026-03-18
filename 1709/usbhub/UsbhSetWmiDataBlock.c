/*
 * XREFs of UsbhSetWmiDataBlock @ 0x1C004F740
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSshEnableDisable @ 0x1C001E4F0 (UsbhSshEnableDisable.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C001FFA8 (UsbhSetPdoRegistryParameter.c)
 *     UsbhSetHubSelectiveSuspend @ 0x1C004D130 (UsbhSetHubSelectiveSuspend.c)
 */

NTSTATUS __fastcall UsbhSetWmiDataBlock(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        int a4,
        unsigned int a5,
        _BYTE *a6)
{
  char v10; // r9
  __int64 v11; // r10
  int v12; // r11d
  int v13; // edi
  NTSTATUS v14; // r8d
  _BYTE *v15; // r9
  __int64 v16; // r10
  PDEVICE_OBJECT *v17; // rax
  char v18; // dl
  BOOL Data; // [rsp+50h] [rbp+18h] BYREF

  FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 64, 1935101257, 0LL, 0LL);
  if ( !a3 )
    goto LABEL_20;
  v13 = a3 - 2;
  if ( !v13 )
  {
    if ( !a5 )
      goto LABEL_7;
    if ( !a4 && *(_DWORD *)(v11 + 3280) != 6 )
    {
      if ( *a6 == v10 )
      {
        UsbhSshEnableDisable((__int64)DeviceObject, 5);
        v18 = 0;
      }
      else
      {
        UsbhSshEnableDisable((__int64)DeviceObject, 4);
        v18 = 1;
      }
      UsbhSetHubSelectiveSuspend((__int64)DeviceObject, v18);
      goto LABEL_12;
    }
LABEL_20:
    v14 = -1073741808;
    return WmiCompleteRequest(DeviceObject, Irp, v14, 0, 0);
  }
  if ( v13 == 1 )
  {
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 )
    {
      Log((__int64)DeviceObject, v12, 2003659059, (__int64)a6, a5);
      if ( !a5 )
      {
LABEL_7:
        v14 = -1073741789;
        return WmiCompleteRequest(DeviceObject, Irp, v14, 0, 0);
      }
      if ( *v15 )
        *(_DWORD *)(v16 + 2560) |= 0x1000000u;
      else
        *(_DWORD *)(v16 + 2560) &= ~0x1000000u;
      Data = *v15 != 0;
      v17 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
      UsbhSetPdoRegistryParameter(v17[149], L"WakeSystemOnConnect", 4u, &Data, 4u);
LABEL_12:
      v14 = 0;
      return WmiCompleteRequest(DeviceObject, Irp, v14, 0, 0);
    }
    goto LABEL_20;
  }
  v14 = -1073741163;
  return WmiCompleteRequest(DeviceObject, Irp, v14, 0, 0);
}
