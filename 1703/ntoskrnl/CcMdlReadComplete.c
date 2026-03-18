/*
 * XREFs of CcMdlReadComplete @ 0x140452FD0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CcMdlReadComplete2 @ 0x140543FDC (CcMdlReadComplete2.c)
 */

void __stdcall CcMdlReadComplete(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  struct _DRIVER_OBJECT *DriverObject; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // r9
  unsigned __int8 (__fastcall *MdlReadComplete)(PFILE_OBJECT, PMDL, PDEVICE_OBJECT); // rax

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DriverObject = RelatedDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || (MdlReadComplete = (unsigned __int8 (__fastcall *)(PFILE_OBJECT, PMDL, PDEVICE_OBJECT))FastIoDispatch->MdlReadComplete) == 0LL
    || !MdlReadComplete(FileObject, MdlChain, RelatedDeviceObject) )
  {
    CcMdlReadComplete2(RelatedDeviceObject, MdlChain, DriverObject);
  }
}
