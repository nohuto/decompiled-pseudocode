/*
 * XREFs of RtlStringLengthWorkerW @ 0x1C000BD2C
 * Callers:
 *     RtlStringCchLengthW @ 0x1C000BCF8 (RtlStringCchLengthW.c)
 *     RtlStringCbCatW @ 0x1C0023D98 (RtlStringCbCatW.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01097F0 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  for ( i = cchMax; cchMax; --cchMax )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  result = cchMax == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( cchMax )
      *pcchLength = i - cchMax;
    else
      *pcchLength = 0LL;
  }
  return result;
}
