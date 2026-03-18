/*
 * XREFs of AslpFileLargeMapCreate @ 0x1407DF060
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1407DEB48 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1401A79C0 (ZwMapViewOfSection.c)
 *     ZwCreateSection @ 0x1401A7E00 (ZwCreateSection.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MmSecureVirtualMemoryEx @ 0x140557158 (MmSecureVirtualMemoryEx.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslpFileLargeMapDelete @ 0x1407DF2D0 (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeMapCreate(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  char *v4; // rax
  char *v5; // rdi
  unsigned int v6; // ebx
  HANDLE *v7; // r12
  void *FileHandle; // rax
  NTSTATUS v9; // eax
  const char *v10; // r9
  int v11; // r8d
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 *v14; // r15
  __int64 v15; // rax
  ULONG SectionPageProtection[2]; // [rsp+20h] [rbp-98h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-68h] BYREF
  char *v20; // [rsp+D0h] [rbp+18h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = (char *)AslAlloc(v3, 0x50uLL);
  v20 = v4;
  v5 = v4;
  if ( !v4 )
    return (unsigned int)-1073741801;
  ObjectAttributes.RootDirectory = 0LL;
  v7 = (HANDLE *)(v4 + 8);
  FileHandle = *(void **)a2;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwCreateSection(v7, 0xF0005u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  v6 = v9;
  if ( v9 < 0 )
  {
    v10 = "ZwCreateSection failed [%x]";
    v11 = 345;
LABEL_5:
    SectionPageProtection[0] = v9;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileLargeMapCreate", v11, (_DWORD)v10, *(_QWORD *)SectionPageProtection);
    goto LABEL_19;
  }
  *((_QWORD *)v5 + 8) = (*(_QWORD *)(a2 + 16) - 4096LL) & 0xFFFFFFFFFFFF0000uLL;
  v9 = ZwMapViewOfSection(
         *v7,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)v5 + 6,
         0LL,
         0LL,
         (PLARGE_INTEGER)v5 + 8,
         (PSIZE_T)v5 + 7,
         ViewUnmap,
         0x500000u,
         2u);
  v6 = v9;
  if ( v9 < 0 )
  {
    v10 = "ZwMapViewOfSection failed to map the end of the file [%x]";
    v11 = 373;
    goto LABEL_5;
  }
  v12 = MmSecureVirtualMemoryEx(*((_QWORD *)v5 + 6), *((_QWORD *)v5 + 7), 2, 0);
  *((_QWORD *)v5 + 9) = v12;
  if ( !v12 )
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileLargeMapCreate",
      380,
      (unsigned int)"MmSecureVirtualMemory failed to secure the end view");
LABEL_10:
    v6 = -1073741823;
    goto LABEL_19;
  }
  v13 = 0x20000000LL;
  v14 = (__int64 *)(v5 + 24);
  do
  {
    *v14 = v13;
    *((_QWORD *)v5 + 4) = 0LL;
    v9 = ZwMapViewOfSection(
           *v7,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID *)v5 + 2,
           0LL,
           0LL,
           (PLARGE_INTEGER)v5 + 4,
           (PSIZE_T)v5 + 3,
           ViewUnmap,
           0x500000u,
           2u);
    v13 >>= 1;
    v6 = v9;
  }
  while ( v9 == -1073741801 && v13 >= 0x100000 );
  if ( v9 < 0 )
  {
    v10 = "ZwMapViewOfSection failed to map the start of the file [%x]";
    v11 = 415;
    goto LABEL_5;
  }
  v15 = MmSecureVirtualMemoryEx(*((_QWORD *)v5 + 2), *v14, 2, 0);
  *((_QWORD *)v5 + 5) = v15;
  if ( !v15 )
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileLargeMapCreate",
      422,
      (unsigned int)"MmSecureVirtualMemory failed to secure the start view");
    goto LABEL_10;
  }
  *(_QWORD *)v5 = a2;
  *a1 = v5;
  v5 = 0LL;
  v20 = 0LL;
  v6 = 0;
LABEL_19:
  if ( v5 )
    AslpFileLargeMapDelete(&v20);
  return v6;
}
