/*
 * XREFs of sub_1800382D4 @ 0x1800382D4
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 *     RtlReleaseRelativeName @ 0x180055120 (RtlReleaseRelativeName.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 */

__int64 __fastcall sub_1800382D4(__int64 a1, __int128 *a2, char a3, HANDLE *a4, PVOID *a5, ULONG_PTR *a6)
{
  PVOID *v9; // r15
  PIMAGE_NT_HEADERS v10; // rax
  __int64 v11; // rdx
  ULONG v12; // edi
  NTSTATUS v13; // ebx
  PVOID v14; // rsi
  HANDLE ContainingDirectory; // rax
  PIMAGE_NT_HEADERS v16; // rax
  int v17; // ecx
  ULONG_PTR *v18; // rcx
  __int128 v20; // xmm0
  HANDLE SectionHandle; // [rsp+60h] [rbp-69h] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp-61h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+70h] [rbp-59h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-51h] BYREF
  PVOID BaseAddress[2]; // [rsp+80h] [rbp-49h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+90h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+120h] [rbp+57h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  BaseOfImage = 0LL;
  ViewSize = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
        if ( !v10 )
        {
          v13 = -1073741701;
          goto LABEL_25;
        }
        v12 = v10->OptionalHeader.MajorSubsystemVersion < 6u ? 8 : 2;
        if ( a3 )
        {
          v20 = *a2;
          v14 = 0LL;
          RelativeName.ContainingDirectory = 0LL;
          ObjectAttributes.Length = 48;
          *(_OWORD *)BaseAddress = v20;
        }
        else
        {
          LOBYTE(v11) = 1;
          v13 = sub_18003D6A4(6LL, v11, *((_QWORD *)a2 + 1), BaseAddress, 0LL, &RelativeName);
          if ( v13 < 0 )
            goto LABEL_25;
          v14 = BaseAddress[1];
          if ( RelativeName.RelativeName.Length )
          {
            ContainingDirectory = RelativeName.ContainingDirectory;
            *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
          }
          else
          {
            ContainingDirectory = 0LL;
            RelativeName.ContainingDirectory = 0LL;
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = ContainingDirectory;
          if ( v14 )
          {
LABEL_10:
            ObjectAttributes.Attributes = 64;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v13 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
            if ( v14 )
            {
              RtlReleaseRelativeName(&RelativeName);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
            }
            if ( v13 >= 0 )
            {
              v13 = ZwCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, v12, 0x8000000u, FileHandle);
              if ( v13 >= 0 )
              {
                SectionOffset.QuadPart = 0LL;
                v13 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseOfImage,
                        0LL,
                        0LL,
                        &SectionOffset,
                        &ViewSize,
                        ViewShare,
                        0,
                        v12);
                if ( SectionHandle )
                {
                  ZwClose(SectionHandle);
                  SectionHandle = 0LL;
                }
                if ( v13 >= 0 )
                {
                  v16 = RtlImageNtHeader(BaseOfImage);
                  v17 = v13;
                  if ( !v16 )
                    v17 = -1073741701;
                  v13 = v17;
                  if ( v17 >= 0 )
                  {
                    v18 = a6;
                    *v9 = BaseOfImage;
                    if ( v18 )
                      *v18 = ViewSize;
                    if ( a4 )
                    {
                      *a4 = FileHandle;
                    }
                    else if ( FileHandle )
                    {
                      ZwClose(FileHandle);
                    }
                    return (unsigned int)v13;
                  }
                }
              }
            }
LABEL_25:
            if ( FileHandle )
            {
              ZwClose(FileHandle);
              FileHandle = 0LL;
            }
            if ( BaseOfImage )
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseOfImage);
            return (unsigned int)v13;
          }
        }
        ObjectAttributes.RootDirectory = 0LL;
        goto LABEL_10;
      }
    }
  }
  return 3221225485LL;
}
