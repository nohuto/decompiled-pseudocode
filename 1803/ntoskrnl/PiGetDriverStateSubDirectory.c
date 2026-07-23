/*
 * XREFs of PiGetDriverStateSubDirectory @ 0x14072516C
 * Callers:
 *     IoGetDriverDirectory @ 0x1407248D0 (IoGetDriverDirectory.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401477A8 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x1405F5268 (IopAllocateUnicodeString.c)
 *     PiGetFileDirectoryRoot @ 0x140648A5C (PiGetFileDirectoryRoot.c)
 *     PiCreateDirectoryRootAndPath @ 0x140724C64 (PiCreateDirectoryRootAndPath.c)
 */

__int64 __fastcall PiGetDriverStateSubDirectory(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v4; // rdi
  int FileDirectoryRoot; // ebx
  __int64 v7; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  void *v11; // [rsp+98h] [rbp+38h] BYREF

  v11 = 0LL;
  v4 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  FileDirectoryRoot = PiGetFileDirectoryRoot(L"DriverState", L"\\SystemRoot\\System32\\DriverState", &DestinationString);
  if ( FileDirectoryRoot >= 0 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( aData[v7] );
    if ( DestinationString.Length
       + (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 24LL)
       + 22
       + 2 * (_DWORD)v7 <= 0xFFFE )
    {
      FileDirectoryRoot = IopAllocateUnicodeString(
                            (__int64)&UnicodeString,
                            DestinationString.Length
                          + *(_WORD *)(*(_QWORD *)(a1 + 48) + 24LL)
                          + 22
                          + 2 * (unsigned __int16)v7);
      if ( FileDirectoryRoot >= 0 )
      {
        FileDirectoryRoot = RtlUnicodeStringPrintfEx(
                              &UnicodeString,
                              0LL,
                              0x800u,
                              L"%wZ\\%ws\\%wZ\\%ws",
                              &DestinationString,
                              L"Services",
                              *(_QWORD *)(a1 + 48) + 24LL,
                              L"Data");
        if ( FileDirectoryRoot >= 0 )
        {
          FileDirectoryRoot = PiCreateDirectoryRootAndPath(&DestinationString, &UnicodeString, &v11);
          if ( FileDirectoryRoot < 0 )
            v4 = v11;
          else
            *a3 = v11;
        }
      }
    }
    else
    {
      FileDirectoryRoot = -2147483643;
    }
  }
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)FileDirectoryRoot;
}
