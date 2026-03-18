/*
 * XREFs of AslFileMappingCreate @ 0x140545E54
 * Callers:
 *     SdbpCheckKObject @ 0x140541718 (SdbpCheckKObject.c)
 *     SdbpCheckMatchingFiles @ 0x140541F70 (SdbpCheckMatchingFiles.c)
 *     SdbGetDatabaseMatch @ 0x140544CEC (SdbGetDatabaseMatch.c)
 *     SdbOpenDatabaseEx @ 0x14076DA64 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x14076EAE4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlFileMapInitializeByNtPath @ 0x1400F9EF4 (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14017DAE0 (ZwQueryInformationFile.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     AslFileNotFound @ 0x140542AA4 (AslFileNotFound.c)
 *     AslFileMappingDelete @ 0x140544E28 (AslFileMappingDelete.c)
 *     AslStringDuplicate @ 0x140547940 (AslStringDuplicate.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslpFileMappingGetFileKind @ 0x1405DB06C (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingCreate(__int64 *a1, const WCHAR *a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  NTSTATUS v12; // ebx
  void *v13; // rbx
  HANDLE *v14; // rsi
  void *v15; // rcx
  int v16; // eax
  const char *v18; // r9
  int v19; // r8d
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]

  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v10 = AslAlloc(v9, 88LL);
  v11 = v10;
  if ( v10 )
  {
    v12 = AslStringDuplicate(v10, a2);
    if ( v12 < 0 )
    {
      v18 = "AslStringDuplicate failed [%x]";
      v19 = 121;
    }
    else
    {
      v13 = 0LL;
      if ( a3 != (void *)-1LL )
        v13 = a3;
      v14 = (HANDLE *)(v11 + 8);
      v15 = (void *)(v11 + 8);
      if ( v13 )
      {
        memset(v15, 0, 0x38uLL);
        *(_BYTE *)(v11 + 56) = 0;
        *v14 = v13;
      }
      else
      {
        v16 = RtlFileMapInitializeByNtPath((__int64)v15, &DestinationString);
        v12 = v16;
        if ( v16 < 0 )
        {
          if ( !AslFileNotFound(v16) )
          {
            v20 = (unsigned int)(v12 + 1073741805);
            if ( (unsigned int)v20 <= 0x30 && (v21 = 0x1000000008001LL, _bittest64(&v21, v20)) || v12 == -1073741638 )
            {
              v22 = 161;
              v23 = 3;
            }
            else
            {
              v22 = 159;
              v23 = 1;
            }
            AslLogCallPrintf(
              v23,
              (unsigned int)"AslFileMappingCreate",
              v22,
              (unsigned int)"RtlFileMapInitializeByFilePath failed %S [%x]");
          }
          goto LABEL_16;
        }
      }
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      FileInformation = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v12 = ZwQueryInformationFile(*v14, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v12 >= 0 )
      {
        if ( a4 )
        {
          *(_QWORD *)(v11 + 40) = a5;
          *(_BYTE *)(v11 + 59) = 1;
          *(_QWORD *)(v11 + 32) = a4;
        }
        *(_QWORD *)(v11 + 24) = v27;
        if ( !a4 )
        {
          *(_DWORD *)(v11 + 64) = (v27 != 0) + 1;
LABEL_15:
          *a1 = v11;
          v12 = 0;
          v11 = 0LL;
          goto LABEL_16;
        }
        if ( v27 )
        {
          if ( (int)AslpFileMappingGetFileKind(v11 + 8, v11 + 64) < 0 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"AslFileMappingCreate",
              213,
              (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]");
            *(_DWORD *)(v11 + 64) = 3;
          }
          goto LABEL_15;
        }
        AslLogCallPrintf(
          1,
          (unsigned int)"AslFileMappingCreate",
          206,
          (unsigned int)"File size is 0 bytes yet ImageViewBase was present");
        v12 = -1073741811;
LABEL_16:
        if ( v11 )
          AslFileMappingDelete((PVOID *)v11);
        goto LABEL_18;
      }
      v18 = "NtQueryInformationFile failed [%x]";
      v19 = 181;
    }
    AslLogCallPrintf(1, (unsigned int)"AslFileMappingCreate", v19, (_DWORD)v18);
    goto LABEL_16;
  }
  v12 = -1073741801;
LABEL_18:
  if ( DestinationString.Buffer != a2 )
    RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v12;
}
