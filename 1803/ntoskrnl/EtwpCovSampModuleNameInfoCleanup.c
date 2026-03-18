/*
 * XREFs of EtwpCovSampModuleNameInfoCleanup @ 0x1407B6744
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1407B47B0 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleCleanup @ 0x1407B65C4 (EtwpCovSampModuleCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x1407B7744 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     FsRtlReleaseFileNameInformation @ 0x14057B7A0 (FsRtlReleaseFileNameInformation.c)
 */

void __fastcall EtwpCovSampModuleNameInfoCleanup(__int64 *a1)
{
  __int64 v1; // rdx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    if ( (v1 & 1) != 0 )
    {
      FsRtlReleaseFileNameInformation();
    }
    else
    {
      UnicodeString.Buffer = (wchar_t *)(v1 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_DWORD *)&UnicodeString.Length = 65537;
      RtlFreeAnsiString(&UnicodeString);
    }
    *a1 = 0LL;
  }
}
