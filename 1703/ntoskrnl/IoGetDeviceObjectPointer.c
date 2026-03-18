/*
 * XREFs of IoGetDeviceObjectPointer @ 0x1404630E0
 * Callers:
 *     NtApphelpCacheControl @ 0x1404291C4 (NtApphelpCacheControl.c)
 *     sub_14045EFBC @ 0x14045EFBC (sub_14045EFBC.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140462D04 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToDosName @ 0x140462E40 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140570FF0 (IoVolumeDeviceNameToGuidPath.c)
 *     IopOpenSystemVariableDevice @ 0x140691258 (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406C6C70 (PopRegisterCoolingExtensionProtection.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x1407F872C (IopCreateArcNamesDisk.c)
 *     IopAssignBootDriveLetter @ 0x1407FAA40 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140832E04 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1408368E4 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1408371D0 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408373B8 (SbpStartLanman.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
