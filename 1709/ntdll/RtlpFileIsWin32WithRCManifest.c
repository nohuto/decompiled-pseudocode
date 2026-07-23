/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x18001621C
 * Callers:
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlReleaseRelativeName @ 0x180018D50 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180018ED0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18002403C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlImageNtHeader @ 0x18002AA40 (RtlImageNtHeader.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     ZwCreateFile @ 0x1800A0B60 (ZwCreateFile.c)
 */

bool __fastcall RtlpFileIsWin32WithRCManifest(const WCHAR *a1)
{
  bool v1; // di
  char v2; // si
  wchar_t *Buffer; // rbx
  unsigned __int64 ContainingDirectory; // rdx
  NTSTATUS v5; // r14d
  NTSTATUS v6; // ebx
  void *v7; // rbx
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v13; // [rsp+80h] [rbp-80h]
  ULONG_PTR ViewSize; // [rsp+90h] [rbp-70h] BYREF
  __int64 v15; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+A0h] [rbp-60h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+B0h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v20[3]; // [rsp+110h] [rbp+10h] BYREF

  FileHandle = 0LL;
  BaseAddress = 0LL;
  v1 = 0;
  v13 = 0LL;
  v2 = 0;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, &NtFileName, 0LL, &RelativeName) )
  {
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(Buffer != 0LL));
    ObjectAttributes.ObjectName = &NtFileName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
    if ( Buffer )
    {
      RtlReleaseRelativeName(&RelativeName);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
      if ( NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle) >= 0 )
      {
        SectionOffset.QuadPart = 0LL;
        ViewSize = 0LL;
        BaseAddress = 0LL;
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               0LL,
               &SectionOffset,
               &ViewSize,
               ViewShare,
               0,
               8u);
        NtClose(SectionHandle);
        if ( v6 >= 0 )
        {
          if ( RtlImageNtHeader(BaseAddress) )
          {
            v20[0] = L"MUI";
            v20[1] = 1LL;
            v7 = (void *)((unsigned __int64)BaseAddress | 1);
            v20[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U(
                        (unsigned int)BaseAddress | 1,
                        (unsigned int)v20,
                        3,
                        48,
                        (__int64)&v15) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v7) >= 0 )
            {
              v1 = *v13 == -20054323;
            }
          }
        }
      }
    }
  }
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v2 )
    NtClose(FileHandle);
  return v1;
}
