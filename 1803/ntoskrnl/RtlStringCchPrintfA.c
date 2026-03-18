/*
 * XREFs of RtlStringCchPrintfA @ 0x140179880
 * Callers:
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     IopMarkBootPartition @ 0x1408B6F50 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x1408B74E4 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x1408C4DE0 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1408DE714 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1408DEBB0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     _vsnprintf @ 0x140187C70 (_vsnprintf.c)
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v3;
}
