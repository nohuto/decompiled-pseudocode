/*
 * XREFs of IopGetBasicInformationFile @ 0x14057637C
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x140576138 (IopOpenLinkOrRenameTarget.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopGetFileInformation @ 0x1404A5514 (IopGetFileInformation.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopGetBasicInformationFile(struct _FILE_OBJECT *Object, struct _IRP *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rdi
  void *v7; // rbx
  __int64 v8; // rdx
  char v9; // bp
  _DWORD v11[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v12);
  FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v12);
  v7 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
  v8 = Object->Flags >> 1;
  LOBYTE(v8) = (Object->Flags & 2) != 0;
  v9 = FastIoQueryBasicInfo(Object, v8, a2, v11, RelatedDeviceObject);
  if ( v7 )
    VfFastIoCheckState(v7, (ULONG_PTR)FastIoQueryBasicInfo);
  if ( v9 )
    return v11[0];
  else
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v12);
}
