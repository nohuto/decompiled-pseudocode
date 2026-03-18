/*
 * XREFs of DbgkpSectionToFileHandle @ 0x140681A94
 * Callers:
 *     DbgkMapViewOfSection @ 0x1404C95A0 (DbgkMapViewOfSection.c)
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x14067F234 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmGetFileNameForSection @ 0x1406B2C70 (MmGetFileNameForSection.c)
 */

HANDLE __fastcall DbgkpSectionToFileHandle(__int64 a1)
{
  HANDLE result; // rax
  PVOID v2; // rdi
  NTSTATUS v3; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+18h] BYREF

  if ( (int)MmGetFileNameForSection(a1, &P) < 0 )
    return 0LL;
  v2 = P;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 1600;
  v3 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  ExFreePoolWithTag(v2, 0);
  result = FileHandle;
  if ( v3 < 0 )
    return 0LL;
  return result;
}
