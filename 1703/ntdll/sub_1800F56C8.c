/*
 * XREFs of sub_1800F56C8 @ 0x1800F56C8
 * Callers:
 *     sub_1800F5104 @ 0x1800F5104 (sub_1800F5104.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     sub_1800EC108 @ 0x1800EC108 (sub_1800EC108.c)
 *     sub_1800F5294 @ 0x1800F5294 (sub_1800F5294.c)
 */

__int64 __fastcall sub_1800F56C8(__int64 a1, PVOID *a2, _QWORD *a3)
{
  __int64 v5; // r8
  WCHAR *v6; // rdx
  int v7; // r9d
  WCHAR v8; // ax
  __int64 v9; // rax
  WCHAR *v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r9d
  WCHAR *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  char *v17; // rcx
  WCHAR v18; // r8
  NTSTATUS v19; // ebx
  HANDLE v20; // rcx
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
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
  if ( v7 < 0 || (int)sub_1800EC108(SourceString, 256LL, a1) < 0 )
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
  v11 = -1073741811;
  if ( v9 )
  {
    v11 = 0;
    v12 = 256 - v9;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v11 < 0 )
    return 3221225473LL;
  v13 = 0;
  v14 = &SourceString[v12];
  v15 = 256 - v12;
  if ( 256 == v12 )
    goto LABEL_22;
  v16 = 2147483646LL;
  v17 = (char *)((char *)L".nlp" - (char *)v14);
  while ( v16 )
  {
    v18 = *(WCHAR *)((char *)v14 + (_QWORD)v17);
    if ( !v18 )
      break;
    *v14 = v18;
    --v16;
    ++v14;
    if ( !--v15 )
      goto LABEL_22;
  }
  if ( !v15 )
  {
LABEL_22:
    --v14;
    v13 = -2147483643;
  }
  *v14 = 0;
  if ( v13 < 0 )
    return 3221225473LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v19 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v19 >= 0 )
  {
    if ( sub_1800F5294(FileHandle, &v23) < 0 || HIDWORD(v23) )
    {
      v19 = -1073741823;
    }
    else
    {
      *a3 = (unsigned int)v23;
      v19 = ZwCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
      if ( v19 >= 0 )
      {
        v20 = SectionHandle;
        *a2 = 0LL;
        ViewSize = 0LL;
        v19 = ZwMapViewOfSection(v20, (HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, 0LL, 0LL, &ViewSize, ViewShare, 0, 2u);
        ZwClose(SectionHandle);
      }
    }
    ZwClose(FileHandle);
  }
  return (unsigned int)v19;
}
