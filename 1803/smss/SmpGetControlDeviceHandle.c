/*
 * XREFs of SmpGetControlDeviceHandle @ 0x14000780C
 * Callers:
 *     SmpReadyBootSync @ 0x140007790 (SmpReadyBootSync.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpGetControlDeviceHandle(void **a1)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\RdyBoost");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( result >= 0 )
  {
    *a1 = FileHandle;
    return 0;
  }
  return result;
}
