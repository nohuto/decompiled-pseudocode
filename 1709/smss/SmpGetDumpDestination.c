/*
 * XREFs of SmpGetDumpDestination @ 0x140010A04
 * Callers:
 *     SmpCheckForCrashDump @ 0x140009A80 (SmpCheckForCrashDump.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140001C54 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     SmpEventWriteString @ 0x1400108B4 (SmpEventWriteString.c)
 *     SmpQueryFileExists @ 0x140010CD0 (SmpQueryFileExists.c)
 *     SmpQueryFileSize @ 0x140010D38 (SmpQueryFileSize.c)
 *     SmpQuerySameVolume @ 0x140010F24 (SmpQuerySameVolume.c)
 *     SmpQueryVolumeFreeSpace @ 0x140011078 (SmpQueryVolumeFreeSpace.c)
 *     SmpDeleteFile @ 0x140011E34 (SmpDeleteFile.c)
 */

__int64 __fastcall SmpGetDumpDestination(
        __int64 a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        PUNICODE_STRING DestinationString)
{
  __int64 v6; // rsi
  unsigned __int8 v7; // r14
  bool v9; // zf
  __int64 result; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  NTSTATUS v14; // ebx
  unsigned __int64 v15; // r15
  int v16; // esi
  __m128i v17; // xmm1
  char *v18; // xmm1_8
  __int16 v19; // si
  __int64 OpenOptions; // [rsp+28h] [rbp-D8h]
  char v21[8]; // [rsp+30h] [rbp-D0h] BYREF
  void *FileHandle; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  char *v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING NtPathName; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v28; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR SourceString[8]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t pszDest[264]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = 0LL;
  v21[0] = 0;
  v7 = 0;
  v23 = 0LL;
  v9 = *(_DWORD *)(a1 + 3992) == 4;
  wcscpy(SourceString, L"?:\\");
  if ( v9 )
  {
LABEL_11:
    v7 = 1;
    goto LABEL_12;
  }
  result = SmpQuerySameVolume(a3, a2, v21);
  if ( (int)result < 0 )
    return result;
  if ( v21[0] != 1 )
  {
    if ( *(_DWORD *)&a2[1].Length )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x60u) >= 0 )
      {
        SmpQueryFileSize(FileHandle, &v23);
        NtClose(FileHandle);
        v6 = v23;
      }
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)SmpQueryFileExists(a2) )
  {
    if ( !*(_DWORD *)&a2[1].Length )
      return 3221225473LL;
    SmpDeleteFile(a2);
  }
LABEL_12:
  v12 = *(_QWORD *)(a1 + 4000);
  result = SmpQueryVolumeFreeSpace(a2, &v26);
  v14 = result;
  if ( (int)result < 0 )
    return result;
  if ( v12 >= v6 + v26 )
  {
    v17 = *(__m128i *)a2;
    v24 = *(_QWORD *)&a2->Length;
    v18 = (char *)_mm_srli_si128(v17, 8).m128i_u64[0];
    v25 = v18;
    if ( v18 )
    {
      v19 = v24;
      if ( (unsigned __int16)v24 >= 8u && RtlCompareMemory(v18, L"\\??\\", 8uLL) == 8 )
      {
        v25 = v18 + 8;
        LOWORD(v24) = v19 - 8;
      }
    }
    SmpEventWriteString(v13, (unsigned __int16 *)&v24);
LABEL_29:
    v14 = -1073741670;
    goto LABEL_30;
  }
  if ( v7 )
  {
    RtlInitUnicodeString(&v28, SourceString);
    SourceString[0] = *(_WORD *)(*(_QWORD *)(a4 + 8) + 8LL);
    v15 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v16 = 0;
    while ( 1 )
    {
      LODWORD(OpenOptions) = (unsigned __int16)(v16 + v15);
      v14 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%s\\%s%4.4x.tmp", v28.Buffer, L"DUMP", OpenOptions);
      if ( v14 < 0 )
        goto LABEL_30;
      if ( !RtlDosPathNameToNtPathName_U(pszDest, &NtPathName, 0LL, 0LL) )
        goto LABEL_22;
      if ( !(unsigned __int8)SmpQueryFileExists(&NtPathName) )
      {
        v14 = 0;
        *DestinationString = NtPathName;
        goto LABEL_30;
      }
      RtlFreeUnicodeString(&NtPathName);
      if ( (unsigned int)++v16 >= 0x64 )
      {
LABEL_22:
        v14 = -1073741823;
        goto LABEL_30;
      }
    }
  }
  if ( !RtlCreateUnicodeString(DestinationString, a2->Buffer) )
    goto LABEL_29;
LABEL_30:
  *(_DWORD *)(&a2[1].MaximumLength + 1) = v7;
  return (unsigned int)v14;
}
