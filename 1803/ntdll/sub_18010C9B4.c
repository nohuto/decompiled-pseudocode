/*
 * XREFs of sub_18010C9B4 @ 0x18010C9B4
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 * Callees:
 *     sub_180004624 @ 0x180004624 (sub_180004624.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009B560 (ZwCreateFile.c)
 *     sub_18010CB1C @ 0x18010CB1C (sub_18010CB1C.c)
 */

__int64 __fastcall sub_18010C9B4(__int64 a1, _DWORD *a2)
{
  NTSTATUS v3; // ebx
  __int64 v4; // rax
  wchar_t *v5; // rdx
  __int16 v6; // cx
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  int v9; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v10; // [rsp+70h] [rbp-90h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Buffer[264]; // [rsp+C0h] [rbp-40h] BYREF

  FileHandle = 0LL;
  if ( BYTE2(qword_18015D468) )
  {
    v3 = 0;
    *a2 = BYTE2(qword_18015D468);
  }
  else
  {
    sub_180004624(Buffer, 0x208uLL, L"\\??\\%s", a1);
    v9 = 0;
    v4 = 0x7FFFLL;
    v10 = 0LL;
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
      LOWORD(v9) = 2 * v6;
      HIWORD(v9) = 2 * v6 + 2;
      v10 = Buffer;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( v3 >= 0 )
    {
      v3 = sub_18010CB1C(FileHandle, a2);
      if ( v3 >= 0 )
        v3 = 0;
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return (unsigned int)v3;
}
