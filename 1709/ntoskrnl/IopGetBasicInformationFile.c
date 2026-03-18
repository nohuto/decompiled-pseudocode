/*
 * XREFs of IopGetBasicInformationFile @ 0x140587C5C
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x140587A24 (IopOpenLinkOrRenameTarget.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopGetFileInformation @ 0x14048FE14 (IopGetFileInformation.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopGetBasicInformationFile(struct _FILE_OBJECT *Object, struct _IRP *a2)
{
  __int64 v4; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  struct _DRIVER_OBJECT *DriverObject; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  __int64 (__fastcall *FastIoQueryBasicInfo)(struct _FILE_OBJECT *, __int64, struct _IRP *, unsigned int *, PDEVICE_OBJECT); // rdi
  void *v9; // rbx
  __int64 v10; // rdx
  char v11; // bp
  unsigned int v13[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  DriverObject = RelatedDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v14);
  FastIoQueryBasicInfo = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, struct _IRP *, unsigned int *, PDEVICE_OBJECT))FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v14);
  v9 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState((unsigned int)MmVerifierData, v4, DriverObject) : 0LL;
  v10 = Object->Flags >> 1;
  LOBYTE(v10) = (Object->Flags & 2) != 0;
  v11 = FastIoQueryBasicInfo(Object, v10, a2, v13, RelatedDeviceObject);
  if ( v9 )
    VfFastIoCheckState(v9, (ULONG_PTR)FastIoQueryBasicInfo);
  if ( v11 )
    return v13[0];
  else
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v14);
}
