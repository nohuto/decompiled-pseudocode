/*
 * XREFs of IoGetDeviceDirectory @ 0x140724670
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401477A8 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x1405F5268 (IopAllocateUnicodeString.c)
 *     PnpConcatenateUnicodeStrings @ 0x1405F5438 (PnpConcatenateUnicodeStrings.c)
 *     PiGetFileDirectoryRoot @ 0x140648A5C (PiGetFileDirectoryRoot.c)
 *     PiCreateDirectoryRootAndPath @ 0x140724C64 (PiCreateDirectoryRootAndPath.c)
 */

__int64 __fastcall IoGetDeviceDirectory(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rcx
  const WCHAR *v10; // r14
  signed int FileDirectoryRoot; // ebx
  unsigned __int16 Length; // r8
  int v13; // edx
  wchar_t v14; // ax
  __int64 v15; // rax
  unsigned int v16; // edx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-28h] BYREF
  UNICODE_STRING v20; // [rsp+68h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v20, 0LL);
  if ( a1
    && !a3
    && !a4
    && a5
    && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0
    && *(_WORD *)(v9 + 40)
    && *(_QWORD *)(v9 + 48) )
  {
    v10 = 0LL;
    if ( !a2 )
      v10 = L"Data";
    FileDirectoryRoot = a2 != 0 ? 0xC000000D : 0;
    if ( !a2 )
    {
      FileDirectoryRoot = PnpConcatenateUnicodeStrings(&DestinationString, (PCUNICODE_STRING)(v9 + 40));
      if ( FileDirectoryRoot >= 0 )
      {
        Length = DestinationString.Length;
        v13 = 0;
        if ( (DestinationString.Length & 0xFFFE) != 0 )
        {
          while ( 1 )
          {
            v14 = DestinationString.Buffer[v13];
            if ( v14 > 0x7Fu )
              break;
            if ( (byte_1402F91A0[v14] & 1) == 0 )
            {
              DestinationString.Buffer[v13] = (byte_1402F91A0[v14] & 1) + 35;
              Length = DestinationString.Length;
            }
            if ( ++v13 >= (unsigned int)(Length >> 1) )
              goto LABEL_19;
          }
          FileDirectoryRoot = -1073741811;
        }
LABEL_19:
        if ( FileDirectoryRoot >= 0 )
        {
          FileDirectoryRoot = PiGetFileDirectoryRoot(
                                L"DriverState",
                                L"\\SystemRoot\\System32\\DriverState",
                                &UnicodeString);
          if ( FileDirectoryRoot >= 0 )
          {
            v15 = -1LL;
            do
              ++v15;
            while ( v10[v15] );
            v16 = UnicodeString.Length + (unsigned __int16)(2 * v15) + DestinationString.Length + 20;
            if ( v16 <= 0xFFFE )
            {
              FileDirectoryRoot = IopAllocateUnicodeString((__int64)&v20, v16);
              if ( FileDirectoryRoot >= 0 )
              {
                FileDirectoryRoot = RtlUnicodeStringPrintfEx(
                                      &v20,
                                      0LL,
                                      0x800u,
                                      L"%wZ\\%ws\\%wZ\\%ws",
                                      &UnicodeString,
                                      L"Devices",
                                      &DestinationString,
                                      v10);
                if ( FileDirectoryRoot >= 0 )
                {
                  FileDirectoryRoot = PiCreateDirectoryRootAndPath(&UnicodeString, &v20);
                  if ( FileDirectoryRoot >= 0 )
                    *a5 = 0LL;
                }
              }
            }
            else
            {
              FileDirectoryRoot = -2147483643;
            }
          }
        }
      }
    }
  }
  else
  {
    FileDirectoryRoot = -1073741811;
  }
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v20);
  return (unsigned int)FileDirectoryRoot;
}
