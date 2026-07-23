/*
 * XREFs of _ResFindFirstFileExW @ 0x18010FB90
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x1801106D8 (ResCGetHighestCacheIndex.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180035B40 (RtlDosPathNameToNtPathName_U.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenFile @ 0x1800A0720 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x1800A0760 (NtQueryDirectoryFile.c)
 *     RtlCompareMemory @ 0x1800A4640 (RtlCompareMemory.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     BasepInitializeFindFileHandle @ 0x18010EBD8 (BasepInitializeFindFileHandle.c)
 */

__int64 __fastcall ResFindFirstFileExW(PCWSTR DosFileName, __int64 a2, __int64 a3)
{
  wchar_t v5; // r12
  __int64 result; // rax
  __int64 v7; // rax
  wchar_t *Buffer; // rsi
  __int64 v9; // rcx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // rax
  char v13; // bl
  NTSTATUS v14; // eax
  unsigned int v15; // edx
  wchar_t *v16; // rcx
  NTSTATUS v17; // ebx
  size_t v18; // r8
  _UNICODE_STRING FileName; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE FileInformation[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  int v29; // [rsp+108h] [rbp+8h]
  int v30; // [rsp+10Ch] [rbp+Ch]
  int v31; // [rsp+118h] [rbp+18h]
  unsigned int Size; // [rsp+11Ch] [rbp+1Ch]
  int Size_4; // [rsp+120h] [rbp+20h]
  char v34; // [rsp+124h] [rbp+24h]
  _BYTE v35[24]; // [rsp+126h] [rbp+26h] BYREF
  _BYTE Src[530]; // [rsp+13Eh] [rbp+3Eh] BYREF

  RtlInitUnicodeString(&DestinationString, DosFileName);
  v5 = DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1];
  if ( !RtlDosPathNameToNtPathName_U(DosFileName, &NtFileName, &FileName.Buffer, 0LL) )
  {
    RtlSetLastWin32Error(3);
    return -1LL;
  }
  v7 = -1LL;
  do
    ++v7;
  while ( FileName.Buffer[v7] );
  Buffer = NtFileName.Buffer;
  FileName.Length = 2 * v7;
  v9 = -1LL;
  FileName.MaximumLength = 2 * v7 + 2;
  do
    ++v9;
  while ( NtFileName.Buffer[v9] );
  v10 = 2 * v9;
  NtFileName.Length = v10;
  NtFileName.MaximumLength = v10 + 2;
  if ( FileName.Buffer )
    v11 = v10 + LOWORD(NtFileName.Buffer) - LOWORD(FileName.Buffer);
  else
    v11 = 0;
  FileName.Length = v11;
  FileName.MaximumLength = v11;
  if ( FileName.Buffer )
  {
    v10 = LOWORD(FileName.Buffer) - LOWORD(NtFileName.Buffer);
    NtFileName.Length = LOWORD(FileName.Buffer) - LOWORD(NtFileName.Buffer);
    NtFileName.MaximumLength = LOWORD(FileName.Buffer) - LOWORD(NtFileName.Buffer);
  }
  v12 = (unsigned __int64)v10 >> 1;
  if ( NtFileName.Buffer[v12 - 2] == 58 || NtFileName.Buffer[v12 - 1] == 92 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    NtFileName.Length = v10 - 2;
  }
  ObjectAttributes.ObjectName = &NtFileName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x4021u);
  if ( (v14 == -1073741811 || v14 == -1073741565) && v13 )
  {
    NtFileName.Length += 2;
    v14 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x4021u);
    NtFileName.Length -= 2;
  }
  if ( v14 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    return -1LL;
  }
  if ( !FileName.Length )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
LABEL_47:
    NtClose(FileHandle);
    return -1LL;
  }
  if ( FileName.Length == 6 && RtlCompareMemory(FileName.Buffer, L"*.*", 6uLL) == 6 )
  {
    FileName.Length = 2;
    goto LABEL_43;
  }
  v15 = 0;
  v16 = FileName.Buffer;
  if ( (FileName.Length & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v15 && *v16 == 46 && *(v16 - 1) == 42 )
        *(v16 - 1) = 60;
      if ( *v16 == 63 )
        break;
      if ( *v16 == 42 )
        goto LABEL_36;
LABEL_39:
      ++v15;
      ++v16;
      if ( v15 >= FileName.Length >> 1 )
        goto LABEL_40;
    }
    *v16 = 62;
LABEL_36:
    if ( v15 && *(v16 - 1) == 46 )
      *(v16 - 1) = 34;
    goto LABEL_39;
  }
LABEL_40:
  if ( v5 == 46 && *(v16 - 1) == 42 )
    *(v16 - 1) = 60;
LABEL_43:
  v17 = NtQueryDirectoryFile(
          FileHandle,
          0LL,
          0LL,
          0LL,
          &IoStatusBlock,
          FileInformation,
          0x268u,
          FileBothDirectoryInformation,
          1u,
          &FileName,
          0);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  if ( v17 < 0 )
    goto LABEL_47;
  v18 = Size;
  *(_DWORD *)a3 = v31;
  *(_QWORD *)(a3 + 4) = v26;
  *(_QWORD *)(a3 + 12) = v27;
  *(_QWORD *)(a3 + 20) = v28;
  *(_DWORD *)(a3 + 28) = v30;
  *(_DWORD *)(a3 + 32) = v29;
  memmove((void *)(a3 + 44), Src, v18);
  *(_WORD *)(a3 + 2 * ((unsigned __int64)Size >> 1) + 44) = 0;
  memmove((void *)(a3 + 564), v35, v34);
  *(_WORD *)(a3 + 2 * ((__int64)v34 >> 1) + 564) = 0;
  if ( (v31 & 0x400) != 0 )
    *(_DWORD *)(a3 + 36) = Size_4;
  result = (__int64)BasepInitializeFindFileHandle((_RTL_CRITICAL_SECTION_DEBUG *)FileHandle);
  if ( !result )
    goto LABEL_47;
  return result;
}
