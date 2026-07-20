/*
 * XREFs of SmpCleanupStalePageFiles @ 0x1400097B4
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009518 (SmpCreatePagingFiles.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140001C54 (RtlStringCbPrintfW.c)
 *     SmpDeallocSavedRegistryEntry @ 0x140009004 (SmpDeallocSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     SmpDeletePagingFile @ 0x14000FE0C (SmpDeletePagingFile.c)
 */

void SmpCleanupStalePageFiles()
{
  PVOID *v0; // rbx
  struct _UNICODE_STRING *v1; // rdi
  _QWORD *v2; // rcx
  _QWORD *Buffer; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  v0 = (PVOID *)SmpExistingPageFilesList;
  while ( v0 != &SmpExistingPageFilesList )
  {
    v1 = (struct _UNICODE_STRING *)v0;
    SmpDeletePagingFile(v0 + 2);
    v2 = *v0;
    v0 = (PVOID *)*v0;
    if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v1->Length + 8LL) != v1
      || (Buffer = v1->Buffer, (struct _UNICODE_STRING *)*Buffer != v1) )
    {
      __fastfail(3u);
    }
    *Buffer = v2;
    v2[1] = Buffer;
    SmpDeallocSavedRegistryEntry(v1);
  }
  if ( !SmpWsSwapPagefileCreated )
  {
    RtlStringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%c:\\%s", (unsigned __int16)SmpOsVolumeLetter, L"swapfile.sys");
    RtlInitUnicodeString(&DestinationString, pszDest);
    SmpDeletePagingFile(&DestinationString);
  }
}
