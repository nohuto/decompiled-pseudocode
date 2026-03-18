/*
 * XREFs of DbgkpSectionToFileHandle @ 0x1406ACD5C
 * Callers:
 *     DbgkCreateThread @ 0x14053F718 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x140571C70 (DbgkMapViewOfSection.c)
 *     DbgkpPostFakeThreadMessages @ 0x1406AA3AC (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MmGetFileNameForSection @ 0x1406DEA24 (MmGetFileNameForSection.c)
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
