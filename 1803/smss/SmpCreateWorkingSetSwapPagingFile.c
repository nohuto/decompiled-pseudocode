/*
 * XREFs of SmpCreateWorkingSetSwapPagingFile @ 0x140007D28
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400092CC (SmpCreatePagingFiles.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140001C58 (RtlStringCbPrintfW.c)
 *     SmpParseCommandLine @ 0x1400026F0 (SmpParseCommandLine.c)
 *     SmpCheckHybridPriority @ 0x140007FC0 (SmpCheckHybridPriority.c)
 *     SmpTrimPagingFileExtents @ 0x140008058 (SmpTrimPagingFileExtents.c)
 *     SmpUpdatePagingFileSizes @ 0x140008120 (SmpUpdatePagingFileSizes.c)
 *     SmpParseSwapOrPageFileArguments @ 0x14000973C (SmpParseSwapOrPageFileArguments.c)
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 *     SmpGetVolumeDescriptorForPath @ 0x14000FF68 (SmpGetVolumeDescriptorForPath.c)
 */

__int64 __fastcall SmpCreateWorkingSetSwapPagingFile(__int64 *a1)
{
  int VolumeDescriptorForPath; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  ULONG v7; // ebx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+34h] [rbp-CCh] BYREF
  ULONG v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  union _LARGE_INTEGER v13; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v14; // [rsp+50h] [rbp-B0h] BYREF
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING FileName; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-80h] BYREF
  ULONG v18; // [rsp+84h] [rbp-7Ch] BYREF
  union _LARGE_INTEGER MaxiumSize; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER InitialSize; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING v22; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp+10h] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v28[8]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+13Ch] [rbp+3Ch] BYREF
  wchar_t pszDest[264]; // [rsp+340h] [rbp+240h] BYREF

  *(_DWORD *)&ValueName.Length = 2097182;
  ValueName.Buffer = L"SwapfileControl";
  *(_DWORD *)&v22.Length = 1179664;
  v22.Buffer = L"SwapFile";
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !SmpClientSku )
  {
    VolumeDescriptorForPath = -1073741637;
    goto LABEL_17;
  }
  if ( NtQueryValueKey(
         SmpMmKey,
         &ValueName,
         KeyValuePartialInformationAlign64,
         KeyValueInformation,
         0x10u,
         &ResultLength) >= 0
    && KeyValueInformation[0] == 4
    && KeyValueInformation[1] == 4
    && !KeyValueInformation[2] )
  {
    goto LABEL_22;
  }
  if ( NtQueryValueKey(SmpMmKey, &v22, KeyValuePartialInformation, v28, 0x210u, &v18) >= 0 && v29 <= 0x204 )
  {
    LOWORD(v14) = v29;
    WORD1(v14) = v29;
    *((_QWORD *)&v14 + 1) = &v30;
    VolumeDescriptorForPath = SmpParseCommandLine(&v14, 0LL, &DestinationString, 0LL, &UnicodeString);
    if ( VolumeDescriptorForPath < 0 )
      goto LABEL_17;
    FileName = DestinationString;
    VolumeDescriptorForPath = SmpParseSwapOrPageFileArguments(&UnicodeString, &Value, &v11);
    RtlFreeUnicodeString(&UnicodeString);
    if ( VolumeDescriptorForPath < 0 )
      goto LABEL_17;
    if ( !Value || !v11 )
    {
LABEL_22:
      VolumeDescriptorForPath = -1073741710;
      goto LABEL_17;
    }
    v13.QuadPart = (unsigned __int64)Value << 20;
    *(_QWORD *)&v14 = (unsigned __int64)v11 << 20;
    VolumeDescriptorForPath = SmpGetVolumeDescriptorForPath(&FileName, &v12);
    if ( VolumeDescriptorForPath < 0 )
      goto LABEL_17;
    v3 = v12;
    goto LABEL_11;
  }
  if ( !SmpOsVolumeDescriptor )
  {
    VolumeDescriptorForPath = -1073741275;
    goto LABEL_17;
  }
  VolumeDescriptorForPath = RtlStringCbPrintfW(
                              pszDest,
                              0x208uLL,
                              L"\\??\\%c:\\%s",
                              *(unsigned __int16 *)(SmpOsVolumeDescriptor + 28),
                              L"swapfile.sys");
  if ( VolumeDescriptorForPath >= 0 )
  {
    RtlInitUnicodeString(&FileName, pszDest);
    v3 = SmpOsVolumeDescriptor;
    v4 = (-(__int64)((*(_DWORD *)(SmpOsVolumeDescriptor + 16) & 0x20) != 0) & 0xFFFFFFFFF1000000uLL) + 0x10000000;
    v13.QuadPart = v4;
    v5 = (unsigned __int64)(3 * SmpMemorySize) >> 1;
    v6 = *(_QWORD *)(SmpOsVolumeDescriptor + 40) / 0xAuLL;
    if ( v5 >= v6 )
      v5 = *(_QWORD *)(SmpOsVolumeDescriptor + 40) / 0xAuLL;
    else
      v6 = (unsigned __int64)(3 * SmpMemorySize) >> 1;
    if ( v6 <= v4 )
      v5 = v4;
    *(_QWORD *)&v14 = v5;
LABEL_11:
    SmpUpdatePagingFileSizes(&v13, &v14);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &FileName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u) >= 0 )
    {
      SmpTrimPagingFileExtents(FileHandle, &FileName);
      NtClose(FileHandle);
    }
    v7 = 0x80000000;
    if ( (*(_BYTE *)(v3 + 16) & 8) != 0
      && (int)SmpCheckHybridPriority(*(unsigned int *)(v3 + 20), &v9, &v12) >= 0
      && (_DWORD)v12
      && (v9 & 0xFFFFFFF0) == 0 )
    {
      v7 = (v9 | 0xFFFFFFE0) << 26;
    }
    InitialSize = v13;
    MaxiumSize.QuadPart = v14;
    VolumeDescriptorForPath = NtCreatePagingFile(&FileName, &InitialSize, &MaxiumSize, v7);
    if ( VolumeDescriptorForPath >= 0 )
    {
      SmpWsSwapPagefileCreated = 1;
      *a1 = v3;
    }
  }
LABEL_17:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)VolumeDescriptorForPath;
}
