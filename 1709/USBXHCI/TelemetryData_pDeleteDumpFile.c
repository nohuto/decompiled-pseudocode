/*
 * XREFs of TelemetryData_pDeleteDumpFile @ 0x1C00609D8
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C0060764 (TelemetryData_SubmitReport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TelemetryData_pDeleteDumpFile(__int64 a1)
{
  _WORD *v1; // rbx
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-38h] BYREF
  void *FileHandle; // [rsp+D0h] [rbp+8h] BYREF

  v1 = (_WORD *)(a1 + 720);
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 720));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = IoCreateFile(
             &FileHandle,
             0x110000u,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             0x80u,
             7u,
             1u,
             0x1000u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0x100u);
  if ( result >= 0 )
  {
    result = ZwClose(FileHandle);
    *v1 = 0;
  }
  return result;
}
