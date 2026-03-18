/*
 * XREFs of IoGetDeviceObjectPointer @ 0x140560DB0
 * Callers:
 *     sub_14055EB30 @ 0x14055EB30 (sub_14055EB30.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14055FE74 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405607E0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140560B00 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140560FD4 (NtApphelpCacheControl.c)
 *     IopOpenSystemVariableDevice @ 0x1406BCF98 (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406F7354 (PopRegisterCoolingExtensionProtection.c)
 *     IopAssignBootDriveLetter @ 0x14084468C (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesDisk @ 0x1408454C4 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140851E2C (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140869F24 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x14086DB14 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x14086E400 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x14086E5E8 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+10h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = ObjectName;
  ObjectAttributes.Attributes = IopCaseInsensitive != 0 ? 576 : 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ZwOpenFile(&FileHandle, DesiredAccess, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v7 >= 0 )
  {
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v8 = (struct _FILE_OBJECT *)Object;
      *FileObject = (PFILE_OBJECT)Object;
      *DeviceObject = IoGetRelatedDeviceObject(v8);
    }
    ZwClose(FileHandle);
  }
  KeLeaveCriticalRegion();
  return v7;
}
