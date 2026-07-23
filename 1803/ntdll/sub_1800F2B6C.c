/*
 * XREFs of sub_1800F2B6C @ 0x1800F2B6C
 * Callers:
 *     sub_1800F2694 @ 0x1800F2694 (sub_1800F2694.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwOpenFile @ 0x18009B120 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     sub_1800E80F8 @ 0x1800E80F8 (sub_1800E80F8.c)
 *     sub_1800F2824 @ 0x1800F2824 (sub_1800F2824.c)
 */

__int64 __fastcall sub_1800F2B6C(__int64 a1, PVOID *a2, _QWORD *a3)
{
  __int64 v5; // r8
  WCHAR *v6; // rdx
  WCHAR v7; // ax
  WCHAR *v8; // rax
  __int64 v9; // rcx
  WCHAR *v10; // rax
  __int64 v11; // rax
  WCHAR *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  char *v15; // rdx
  WCHAR v16; // r8
  WCHAR *v17; // rax
  NTSTATUS v18; // ebx
  HANDLE v19; // rcx
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = 256LL;
  v6 = SourceString;
  do
  {
    if ( v5 == -2147483390 )
      break;
    v7 = *(WCHAR *)((char *)v6 + (char *)L"\\SystemRoot\\Globalization\\" - (char *)SourceString);
    if ( !v7 )
      break;
    *v6++ = v7;
    --v5;
  }
  while ( v5 );
  v8 = v6 - 1;
  if ( v5 )
    v8 = v6;
  *v8 = 0;
  if ( !v5 || (int)sub_1800E80F8(SourceString, 256LL, a1) < 0 )
    return 3221225473LL;
  v9 = 256LL;
  v10 = SourceString;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  if ( !v9 )
    return 3221225473LL;
  v11 = 256 - v9;
  v12 = &SourceString[256 - v9];
  v13 = 256 - v11;
  if ( 256 != v11 )
  {
    v14 = 2147483646LL;
    v15 = (char *)((char *)L".nlp" - (char *)v12);
    do
    {
      if ( !v14 )
        break;
      v16 = *(WCHAR *)((char *)v12 + (_QWORD)v15);
      if ( !v16 )
        break;
      *v12 = v16;
      --v14;
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  v17 = v12 - 1;
  if ( v13 )
    v17 = v12;
  *v17 = 0;
  if ( !v13 )
    return 3221225473LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v18 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v18 >= 0 )
  {
    if ( sub_1800F2824(FileHandle, &v22) < 0 || HIDWORD(v22) )
    {
      v18 = -1073741823;
    }
    else
    {
      *a3 = (unsigned int)v22;
      v18 = ZwCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
      if ( v18 >= 0 )
      {
        v19 = SectionHandle;
        *a2 = 0LL;
        ViewSize = 0LL;
        v18 = ZwMapViewOfSection(v19, (HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, 0LL, 0LL, &ViewSize, ViewShare, 0, 2u);
        ZwClose(SectionHandle);
      }
    }
    ZwClose(FileHandle);
  }
  return (unsigned int)v18;
}
