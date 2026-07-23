/*
 * XREFs of sub_18008CEF0 @ 0x18008CEF0
 * Callers:
 *     sub_18008CDE0 @ 0x18008CDE0 (sub_18008CDE0.c)
 *     sub_180109D60 @ 0x180109D60 (sub_180109D60.c)
 * Callees:
 *     sub_18007D6CC @ 0x18007D6CC (sub_18007D6CC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 */

NTSTATUS __fastcall sub_18008CEF0(unsigned __int16 *a1, HANDLE *a2)
{
  __int64 v2; // r9
  __int64 v4; // rax
  wchar_t *v5; // rdx
  __int16 v6; // cx
  NTSTATUS result; // eax
  int v8; // [rsp+60h] [rbp-29h] BYREF
  wchar_t *v9; // [rsp+68h] [rbp-21h]
  HANDLE FileHandle; // [rsp+70h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+1Fh] BYREF
  wchar_t Buffer[12]; // [rsp+B8h] [rbp+2Fh] BYREF

  v2 = *a1;
  FileHandle = 0LL;
  sub_18007D6CC(Buffer, 0x14uLL, L"\\??\\%C:", v2);
  v8 = 0;
  v4 = 0x7FFFLL;
  v9 = 0LL;
  v5 = Buffer;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( v4 )
    v6 = 0x7FFF - v4;
  else
    v6 = 0;
  if ( v4 )
  {
    LOWORD(v8) = 2 * v6;
    HIWORD(v8) = 2 * v6 + 2;
    v9 = Buffer;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( result >= 0 )
  {
    *a2 = FileHandle;
    return 0;
  }
  return result;
}
