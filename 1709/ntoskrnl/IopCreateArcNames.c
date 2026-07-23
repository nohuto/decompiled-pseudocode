/*
 * XREFs of IopCreateArcNames @ 0x140844F90
 * Callers:
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x1401467D0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     IopCreateArcNamesDisk @ 0x1408454C4 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140851E2C (IopCreateArcNamesCd.c)
 */

__int64 __fastcall IopCreateArcNames(__int64 a1)
{
  __int64 v2; // rbx
  PVOID Pool; // rax
  __int64 result; // rax
  _STRING DestinationString; // [rsp+20h] [rbp-A8h] BYREF
  char pszDest[128]; // [rsp+30h] [rbp-98h] BYREF

  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(a1 + 192));
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcHalDeviceName, &DestinationString, 1u);
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcBootDeviceName, &DestinationString, 1u);
  v2 = -1LL;
  do
    ++v2;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 184) + v2) );
  Pool = IopVerifierExAllocatePool(PagedPool, v2 + 1);
  IoLoaderArcBootDeviceName = (__int64)Pool;
  if ( Pool )
    memmove(Pool, *(const void **)(a1 + 184), v2 + 1);
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(a1 + 192));
  result = IopCreateArcNamesDisk();
  if ( (int)result >= 0 )
    return IopCreateArcNamesCd(a1);
  return result;
}
