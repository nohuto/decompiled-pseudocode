/*
 * XREFs of ndisCloseIrpHandler @ 0x1C0008F70
 * Callers:
 *     <none>
 * Callees:
 *     ndisCleanupUserOpenContext @ 0x1C0009040 (ndisCleanupUserOpenContext.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisDummyHandler @ 0x1C00AC1B8 (ndisDummyHandler.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C00B7194 (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00F9BB4 (-ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisCloseIrpHandler(const struct _DEVICE_OBJECT *a1, _IRP *a2)
{
  _DWORD *DeviceExtension; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IRP *v6; // rdx
  struct _DEVICE_OBJECT *v7; // rcx
  unsigned int v8; // edi
  int v9; // ebp
  _FILE_OBJECT *FileObject; // rax
  void *FsContext; // rdx

  DeviceExtension = a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v8 = 0;
  if ( ndisIsSetupDevice(a1) )
    return (unsigned int)ndisSetupDeviceCreateIrp(v7, v6);
  if ( *(_BYTE *)DeviceExtension != 17 )
  {
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_qq(25LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, DeviceExtension, a2);
    return (unsigned int)ndisDummyHandler(a1, DeviceExtension, a2);
  }
  v9 = DeviceExtension[30] & 0x80;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(26LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, DeviceExtension, a2);
  FileObject = CurrentStackLocation->FileObject;
  FsContext = FileObject->FsContext;
  FileObject->FsContext = 0LL;
  ndisCleanupUserOpenContext(DeviceExtension, FsContext);
  if ( v9 )
  {
    MEMORY[0] = 1;
  }
  else
  {
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 2);
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(27LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, DeviceExtension, a2);
  return v8;
}
