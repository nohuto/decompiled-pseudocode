/*
 * XREFs of SmpCopyFile @ 0x1400106B0
 * Callers:
 *     SmpSavePageFile @ 0x14001147C (SmpSavePageFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 *     SmpQueryFileSize @ 0x140010E7C (SmpQueryFileSize.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x140011568 (SmpSetDumpSecurityAndAttributes.c)
 *     _TlgKeywordOn @ 0x14001189C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1400118A0 (_TlgWrite.c)
 */

__int64 __fastcall SmpCopyFile(HANDLE FileHandle, struct _UNICODE_STRING *a2, union _LARGE_INTEGER a3)
{
  union _LARGE_INTEGER v3; // rdi
  ULONG v7; // r14d
  int v8; // r15d
  NTSTATUS v9; // ebx
  int v10; // eax
  HANDLE v11; // rcx
  NTSTATUS v12; // eax
  ULONGLONG v13; // rdx
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  union _LARGE_INTEGER v18; // rsi
  char v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER FileInformation; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandlea; // [rsp+70h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER ByteOffset; // [rsp+98h] [rbp-68h] BYREF
  union _LARGE_INTEGER v26; // [rsp+A0h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  union _LARGE_INTEGER *p_FileInformation; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  union _LARGE_INTEGER *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]

  FileHandlea = 0LL;
  BaseAddress = 0LL;
  v3.QuadPart = 0LL;
  FileInformation.QuadPart = 0LL;
  v7 = 0x100000;
  RegionSize = 0x100000LL;
  v8 = 1;
  v9 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v9 >= 0 )
  {
    if ( a3.QuadPart )
    {
      v3 = a3;
    }
    else
    {
      v10 = SmpQueryFileSize(FileHandle, &FileInformation);
      v3 = FileInformation;
      v9 = v10;
      if ( v10 < 0 )
        goto LABEL_7;
    }
    if ( v3.QuadPart )
    {
      ObjectAttributes.ObjectName = a2;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      if ( v3.QuadPart % (unsigned __int64)(unsigned int)dword_140021268 )
        v8 = dword_140021268;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = NtCreateFile(&FileHandlea, 0xC0150000, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 0, 0x68u, 0LL, 0);
      if ( v9 >= 0 )
      {
        v9 = SmpSetDumpSecurityAndAttributes(FileHandlea);
        if ( v9 >= 0 )
        {
          v18.QuadPart = 0LL;
          do
          {
            ByteOffset = v18;
            v9 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, BaseAddress, v7, &ByteOffset, 0LL);
            if ( v9 < 0 )
              break;
            if ( IoStatusBlock.Information != v7 )
            {
              if ( (unsigned __int64)v7 <= v3.QuadPart - v18.QuadPart
                || IoStatusBlock.Information != v3.QuadPart - v18.QuadPart )
              {
                goto LABEL_35;
              }
              v7 = ~(v8 - 1) & (v8 + v3.LowPart - v18.LowPart - 1);
            }
            v9 = NtWriteFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, BaseAddress, v7, &ByteOffset, 0LL);
            if ( v9 < 0 )
              break;
            if ( IoStatusBlock.Information != v7 )
            {
LABEL_35:
              v9 = -1073741823;
              break;
            }
            v18.QuadPart += v7;
          }
          while ( v18.QuadPart < (unsigned __int64)v3.QuadPart );
        }
      }
    }
    else
    {
      v9 = -1073741672;
    }
  }
LABEL_7:
  v11 = FileHandlea;
  if ( FileHandlea )
  {
    if ( v9 < 0 )
      goto LABEL_13;
    if ( v3.QuadPart && v8 != 1 )
    {
      FileInformation = v3;
      v12 = NtSetInformationFile(FileHandlea, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
      v11 = FileHandlea;
      v9 = v12;
    }
    if ( v9 < 0 )
    {
LABEL_13:
      v19[0] = 1;
      NtSetInformationFile(v11, &IoStatusBlock, v19, 1u, FileDispositionInformation);
      if ( (unsigned int)dword_140020020 > 5 && TlgKeywordOn(v14, v13) )
      {
        FileInformation.LowPart = v9;
        p_FileInformation = &FileInformation;
        v26 = v3;
        v31 = &v26;
        v30 = 4LL;
        v32 = 8LL;
        TlgWrite((TraceLoggingHProvider)4, &unk_14001BB71, v15, v16, 4u, &pData);
      }
      v11 = FileHandlea;
    }
    NtClose(v11);
  }
  if ( BaseAddress )
  {
    RegionSize = 0LL;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v9;
}
