/*
 * XREFs of RtlStringCbPrintfW @ 0x140001C58
 * Callers:
 *     SmpAllocateInitialCommandBuffer @ 0x140001B60 (SmpAllocateInitialCommandBuffer.c)
 *     SmpParseCommandLine @ 0x1400026F0 (SmpParseCommandLine.c)
 *     SmpInvokeAutoChk @ 0x140004E40 (SmpInvokeAutoChk.c)
 *     SmpLoadDataFromRegistry @ 0x140007064 (SmpLoadDataFromRegistry.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x1400078A0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x140007D28 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCleanupStalePageFiles @ 0x140009568 (SmpCleanupStalePageFiles.c)
 *     SmpSaveOldPageFiles @ 0x140009AF0 (SmpSaveOldPageFiles.c)
 *     SmpGetCrashParameters @ 0x140010A94 (SmpGetCrashParameters.c)
 *     SmpGetDumpDestination @ 0x140010B48 (SmpGetDumpDestination.c)
 *     SmpClearTemporaryFiles @ 0x140011C2C (SmpClearTemporaryFiles.c)
 *     SmpShuffleMove @ 0x140012CBC (SmpShuffleMove.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf_s(pszDest, v3, v3 - 1, pszFormat, va);
    if ( v7 < 0 )
      goto LABEL_9;
    if ( v7 == v6 )
    {
      pszDest[v6] = 0;
      return v5;
    }
    if ( v7 > v6 )
    {
LABEL_9:
      pszDest[v6] = 0;
      return -2147483643;
    }
  }
  return v5;
}
