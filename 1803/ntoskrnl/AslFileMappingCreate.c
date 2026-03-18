/*
 * XREFs of AslFileMappingCreate @ 0x1405FC418
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1405FC168 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x14061E2B8 (SdbpCheckKObject.c)
 *     SdbpCheckMatchingFiles @ 0x14061E740 (SdbpCheckMatchingFiles.c)
 *     SdbOpenDatabaseEx @ 0x1407D4BA8 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407D5CE4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407D60E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlFileMapInitializeByNtPath @ 0x14016195C (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1401A76E0 (ZwQueryInformationFile.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     AslFileMappingDelete @ 0x1405FC298 (AslFileMappingDelete.c)
 *     AslStringDuplicate @ 0x1405FC890 (AslStringDuplicate.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslpFileMappingGetFileKind @ 0x140644284 (AslpFileMappingGetFileKind.c)
 *     AslFileNotFound @ 0x14064DF4C (AslFileNotFound.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingCreate(PVOID **a1, const WCHAR *a2, void *a3, void *a4, void *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  PVOID *v11; // rdi
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  void *v14; // rbx
  HANDLE *v15; // r14
  void *v16; // rcx
  int v17; // eax
  const char *v19; // r9
  int v20; // r8d
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // ecx
  int FileKind; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  void *v29; // [rsp+58h] [rbp-18h]
  __int64 v30; // [rsp+60h] [rbp-10h]

  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v10 = AslAlloc(v9, 88LL);
  v11 = (PVOID *)v10;
  if ( v10 )
  {
    v12 = AslStringDuplicate(v10, a2);
    v13 = v12;
    if ( v12 < 0 )
    {
      v19 = "AslStringDuplicate failed [%x]";
      v20 = 121;
    }
    else
    {
      v14 = 0LL;
      if ( a3 != (void *)-1LL )
        v14 = a3;
      v15 = v11 + 1;
      v16 = v11 + 1;
      if ( v14 )
      {
        memset(v16, 0, 0x38uLL);
        *((_BYTE *)v11 + 56) = 0;
        *v15 = v14;
      }
      else
      {
        v17 = RtlFileMapInitializeByNtPath((__int64)v16, &DestinationString);
        v13 = v17;
        if ( v17 < 0 )
        {
          if ( !(unsigned int)AslFileNotFound((unsigned int)v17) )
          {
            v21 = v13 + 1073741805;
            if ( (unsigned int)v21 <= 0x30 && (v22 = 0x1000000008001LL, _bittest64(&v22, v21)) || v13 == -1073741638 )
            {
              v23 = 161;
              v24 = 3;
            }
            else
            {
              v23 = 159;
              v24 = 1;
            }
            AslLogCallPrintf(
              v24,
              (unsigned int)"AslFileMappingCreate",
              v23,
              (unsigned int)"RtlFileMapInitializeByFilePath failed %S [%x]",
              a2,
              v13);
          }
          goto LABEL_16;
        }
      }
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      FileInformation = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v12 = ZwQueryInformationFile(*v15, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      v13 = v12;
      if ( v12 >= 0 )
      {
        if ( a4 )
        {
          v11[5] = a5;
          *((_BYTE *)v11 + 59) = 1;
          v11[4] = a4;
        }
        v11[3] = v29;
        if ( !a4 )
        {
          *((_DWORD *)v11 + 16) = (v29 != 0LL) + 1;
LABEL_15:
          *a1 = v11;
          v13 = 0;
          v11 = 0LL;
          goto LABEL_16;
        }
        if ( v29 )
        {
          FileKind = AslpFileMappingGetFileKind(v11 + 1, v11 + 8);
          if ( FileKind < 0 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"AslFileMappingCreate",
              213,
              (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]",
              *v11,
              FileKind);
            *((_DWORD *)v11 + 16) = 3;
          }
          goto LABEL_15;
        }
        AslLogCallPrintf(
          1,
          (unsigned int)"AslFileMappingCreate",
          206,
          (unsigned int)"File size is 0 bytes yet ImageViewBase was present");
        v13 = -1073741811;
LABEL_16:
        if ( v11 )
          AslFileMappingDelete(v11);
        goto LABEL_18;
      }
      v19 = "NtQueryInformationFile failed [%x]";
      v20 = 181;
    }
    AslLogCallPrintf(1, (unsigned int)"AslFileMappingCreate", v20, (_DWORD)v19, v12);
    goto LABEL_16;
  }
  v13 = -1073741801;
LABEL_18:
  if ( DestinationString.Buffer != a2 )
    RtlFreeAnsiString(&DestinationString);
  return v13;
}
