/*
 * XREFs of ConvertToAndFromWideChar @ 0x1C00DE870
 * Callers:
 *     WCSToMBEx @ 0x1C00C5DAC (WCSToMBEx.c)
 *     cUnicodeRangesSupported @ 0x1C00DE754 (cUnicodeRangesSupported.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C011745C (RtlWCSMessageWParamCharToMB.c)
 *     CreateGlyphSetFromMITable @ 0x1C0225B9C (CreateGlyphSetFromMITable.c)
 *     bConvertMBCS @ 0x1C0226FD0 (bConvertMBCS.c)
 *     bComputeGlyphAttrBits @ 0x1C02320B8 (bComputeGlyphAttrBits.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C02393E4 (RtlMBMessageWParamCharToWCS.c)
 *     EngMultiByteToWideChar @ 0x1C0256AF0 (EngMultiByteToWideChar.c)
 *     EngWideCharToMultiByte @ 0x1C0256B20 (EngWideCharToMultiByte.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C0297784 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ConvertToAndFromWideCharSymCP @ 0x1C02567E8 (ConvertToAndFromWideCharSymCP.c)
 *     GetNlsTablePath @ 0x1C0256B44 (GetNlsTablePath.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ConvertToAndFromWideChar(
        unsigned int a1,
        WCHAR *a2,
        ULONG a3,
        CHAR *a4,
        ULONG MaxBytesInMultiByteString,
        int a6)
{
  USHORT *v10; // rbx
  struct _CPTABLEINFO *p_CodePageTable; // rdi
  NTSTATUS v12; // eax
  unsigned int v13; // ecx
  ULONG v15; // edi
  USHORT *Buffer; // rax
  NTSTATUS v17; // eax
  int v18; // edx
  ULONG v19; // eax
  USHORT *v20; // rdi
  ULONG BytesInUnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  USHORT AnsiCodePage; // [rsp+64h] [rbp-9Ch] BYREF
  USHORT OemCodePage; // [rsp+68h] [rbp-98h] BYREF
  void *FileHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _BYTE FileInformation[8]; // [rsp+C8h] [rbp-38h] BYREF
  ULONG Length; // [rsp+D0h] [rbp-30h]
  _CPTABLEINFO CodePageTable; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[264]; // [rsp+120h] [rbp+20h] BYREF

  memset(&CodePageTable, 0, sizeof(CodePageTable));
  v10 = 0LL;
  BytesInUnicodeString = 0;
  p_CodePageTable = 0LL;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  if ( AnsiCodePage == a1 )
  {
    if ( a6 )
      v12 = RtlMultiByteToUnicodeN(a2, a3, &BytesInUnicodeString, a4, MaxBytesInMultiByteString);
    else
      v12 = RtlUnicodeToMultiByteN(a4, MaxBytesInMultiByteString, &BytesInUnicodeString, a2, a3);
    v13 = -1;
    if ( v12 >= 0 )
      return BytesInUnicodeString;
    return v13;
  }
  else
  {
    if ( a1 == 42 )
      return ConvertToAndFromWideCharSymCP((_DWORD)a2, a3, (_DWORD)a4, MaxBytesInMultiByteString, a6);
    GreAcquireFastMutex(ghfmMemory);
    if ( a1 == LastCodePageTranslated && gfLastCPTableInfoInitialized == 1 )
    {
      ++NlsTableUseCount;
      p_CodePageTable = (struct _CPTABLEINFO *)&LastCPTableInfo;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !p_CodePageTable )
    {
      if ( !(unsigned int)GetNlsTablePath(a1, SourceString) )
        return 0xFFFFFFFFLL;
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0) < 0 )
        return 0xFFFFFFFFLL;
      if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation) >= 0 )
      {
        v15 = Length;
        if ( Length )
        {
          Buffer = (USHORT *)PALLOCMEM2(Length, 1668768583LL, 1);
          v10 = Buffer;
          if ( Buffer )
          {
            if ( ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v15, 0LL, 0LL) < 0 )
            {
              Win32FreePool(v10);
              v10 = 0LL;
            }
          }
        }
      }
      ZwClose(FileHandle);
      if ( !v10 )
        return 0xFFFFFFFFLL;
      RtlInitCodePageTable(v10, &CodePageTable);
      p_CodePageTable = &CodePageTable;
    }
    if ( a6 )
      v17 = RtlCustomCPToUnicodeN(p_CodePageTable, a2, a3, &BytesInUnicodeString, a4, MaxBytesInMultiByteString);
    else
      v17 = RtlUnicodeToCustomCPN(p_CodePageTable, a4, MaxBytesInMultiByteString, &BytesInUnicodeString, a2, a3);
    v18 = v17;
    v19 = BytesInUnicodeString;
    if ( v18 < 0 )
      v19 = -1;
    BytesInUnicodeString = v19;
    if ( p_CodePageTable == &CodePageTable )
    {
      GreAcquireFastMutex(ghfmMemory);
      if ( NlsTableUseCount )
      {
        v20 = v10;
      }
      else
      {
        LastCodePageTranslated = a1;
        memmove(&LastCPTableInfo, p_CodePageTable, 0x40uLL);
        gfLastCPTableInfoInitialized = 1;
        v20 = (USHORT *)LastNlsTableBuffer;
        LastNlsTableBuffer = v10;
      }
      GreReleaseFastMutex(ghfmMemory);
      if ( v20 )
        Win32FreePool(v20);
    }
    else
    {
      GreAcquireFastMutex(ghfmMemory);
      --NlsTableUseCount;
      GreReleaseFastMutex(ghfmMemory);
    }
    return BytesInUnicodeString;
  }
}
