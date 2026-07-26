/*
 * XREFs of ndisCloseHandler @ 0x1C005CF2C
 * Callers:
 *     NdisWdfCloseIrpHandler @ 0x1C0061970 (NdisWdfCloseIrpHandler.c)
 * Callees:
 *     ndisCleanupUserOpenContext @ 0x1C0009040 (ndisCleanupUserOpenContext.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisDummyHandler @ 0x1C00AC1B8 (ndisDummyHandler.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C00B7194 (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00F9BB4 (-ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall ndisCloseHandler(const struct _DEVICE_OBJECT *a1, __int64 a2, struct _IRP *a3, _BYTE *a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v9; // rdx
  struct _DEVICE_OBJECT *v10; // rcx
  int v12; // ebp
  _FILE_OBJECT *FileObject; // rax
  _BYTE *FsContext; // rdx

  if ( a4 )
    *a4 = 0;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDeviceCreateIrp(v10, a3);
  if ( *(_BYTE *)v9 == 17 )
  {
    v12 = *(_DWORD *)(v9 + 120) & 0x80;
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_qq(0x1Au, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a2, a3);
    FileObject = CurrentStackLocation->FileObject;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    ndisCleanupUserOpenContext(a2, FsContext);
    if ( v12 )
    {
      *a4 = 1;
    }
    else
    {
      a3->IoStatus.Status = 0;
      IofCompleteRequest(a3, 2);
    }
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_qq(0x1Bu, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a2, a3);
    return 0;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_qq(0x19u, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a2, a3);
    return ndisDummyHandler(a1, a2, a3);
  }
}
