/*
 * XREFs of DbgkpSectionToFileHandle @ 0x140711604
 * Callers:
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x1404E91B8 (DbgkMapViewOfSection.c)
 *     DbgkpPostFakeThreadMessages @ 0x14070EB0C (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MmGetFileNameForSection @ 0x1407498A8 (MmGetFileNameForSection.c)
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
