/*
 * XREFs of RtlpOpenAndMapCustomCultureFile @ 0x1800F66E8
 * Callers:
 *     RtlpGetCustomCultureData @ 0x1800F6124 (RtlpGetCustomCultureData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtOpenFile @ 0x1800A0720 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     RtlStringCchCatW @ 0x1800EBC88 (RtlStringCchCatW.c)
 *     RtlpGetFileSize @ 0x1800F62B4 (RtlpGetFileSize.c)
 */

__int64 __fastcall RtlpOpenAndMapCustomCultureFile(__int64 a1, PVOID *a2, _QWORD *a3)
{
  __int64 v5; // r8
  WCHAR *v6; // rdx
  int v7; // r9d
  WCHAR v8; // ax
  __int64 v9; // rax
  WCHAR *v10; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  WCHAR *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  char *v16; // rcx
  WCHAR v17; // r8
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
  v7 = 0;
  while ( v5 != -2147483390 )
  {
    v8 = *(WCHAR *)((char *)v6 + (char *)L"\\SystemRoot\\Globalization\\" - (char *)SourceString);
    if ( !v8 )
      break;
    *v6++ = v8;
    if ( !--v5 )
    {
      --v6;
      v7 = -2147483643;
      break;
    }
  }
  *v6 = 0;
  if ( v7 < 0 || (int)RtlStringCchCatW(SourceString, 256LL, a1) < 0 )
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
  v11 = v9 ? 256 - v9 : 0LL;
  if ( !v9 )
    return 3221225473LL;
  v12 = 0;
  v13 = &SourceString[v11];
  v14 = 256 - v11;
  if ( 256 == v11 )
    goto LABEL_22;
  v15 = 2147483646LL;
  v16 = (char *)((char *)L".nlp" - (char *)v13);
  while ( v15 )
  {
    v17 = *(WCHAR *)((char *)v13 + (_QWORD)v16);
    if ( !v17 )
      break;
    *v13 = v17;
    --v15;
    ++v13;
    if ( !--v14 )
      goto LABEL_22;
  }
  if ( !v14 )
  {
LABEL_22:
    --v13;
    v12 = -2147483643;
  }
  *v13 = 0;
  if ( v12 < 0 )
    return 3221225473LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v18 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v18 >= 0 )
  {
    if ( RtlpGetFileSize(FileHandle, &v22) < 0 || HIDWORD(v22) )
    {
      v18 = -1073741823;
    }
    else
    {
      *a3 = (unsigned int)v22;
      v18 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
      if ( v18 >= 0 )
      {
        v19 = SectionHandle;
        *a2 = 0LL;
        ViewSize = 0LL;
        v18 = ZwMapViewOfSection(v19, (HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, 0LL, 0LL, &ViewSize, ViewShare, 0, 2u);
        NtClose(SectionHandle);
      }
    }
    NtClose(FileHandle);
  }
  return (unsigned int)v18;
}
