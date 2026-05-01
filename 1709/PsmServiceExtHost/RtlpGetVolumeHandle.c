/*
 * XREFs of RtlpGetVolumeHandle @ 0x18004CBE8
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x18004CB80 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18004CF7C (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     StringCbPrintfW @ 0x18004D07C (StringCbPrintfW.c)
 */

NTSTATUS __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, void **a2)
{
  __int64 v2; // r9
  __int64 v4; // rax
  wchar_t *v5; // rdx
  __int16 v6; // cx
  NTSTATUS result; // eax
  int v8; // [rsp+60h] [rbp-29h] BYREF
  wchar_t *v9; // [rsp+68h] [rbp-21h]
  void *FileHandle; // [rsp+70h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+1Fh] BYREF
  wchar_t pszDest[12]; // [rsp+B8h] [rbp+2Fh] BYREF

  v2 = *a1;
  FileHandle = 0LL;
  StringCbPrintfW(pszDest, 0x14uLL, L"\\??\\%C:", v2);
  v8 = 0;
  v4 = 0x7FFFLL;
  v9 = 0LL;
  v5 = pszDest;
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
    v9 = pszDest;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( result >= 0 )
  {
    *a2 = FileHandle;
    return 0;
  }
  return result;
}
