/*
 * XREFs of sub_1800546DC @ 0x1800546DC
 * Callers:
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003BA40 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlReleaseRelativeName @ 0x180055120 (RtlReleaseRelativeName.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 */

bool __fastcall sub_1800546DC(const WCHAR *a1)
{
  bool v1; // di
  char v2; // si
  PWCH Buffer; // rbx
  unsigned __int64 ContainingDirectory; // rdx
  NTSTATUS v5; // r14d
  NTSTATUS v6; // ebx
  void *v7; // rbx
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v13; // [rsp+80h] [rbp-80h] BYREF
  int v14; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR ViewSize; // [rsp+90h] [rbp-70h] BYREF
  ULONG *v16; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+A0h] [rbp-60h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+B0h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v21[3]; // [rsp+110h] [rbp+10h] BYREF

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
      if ( ZwCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle) >= 0 )
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
        ZwClose(SectionHandle);
        if ( v6 >= 0 )
        {
          if ( RtlImageNtHeader(BaseAddress) )
          {
            v21[0] = L"MUI";
            v21[1] = 1LL;
            v7 = (void *)((unsigned __int64)BaseAddress | 1);
            v21[2] = 0LL;
            if ( (int)sub_180035838((void *)((unsigned __int64)BaseAddress | 1), (__int64)v21, 3u, 0x30u, (__int64)&v16) >= 0
              && (int)sub_18002FC7C(v7, v16, &v13, &v14) >= 0 )
            {
              v1 = *v13 == -20054323;
            }
          }
        }
      }
    }
  }
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v2 )
    ZwClose(FileHandle);
  return v1;
}
