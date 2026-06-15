/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800413AC
 * Callers:
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180041520 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800826D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x180041460 (StringCopyWorkerW_0.c)
 *     memset @ 0x180049B8A (memset.c)
 */

__int64 __fastcall StringCchCopyNExW(
        STRSAFE_LPWSTR pszDest,
        size_t a2,
        const unsigned __int16 *a3,
        size_t cchToCopy,
        size_t pcchNewDestLength)
{
  HRESULT v7; // ebx
  unsigned __int64 v8; // rdi

  v7 = 0;
  if ( !pszDest && a2 || a2 > 0x7FFFFFFF )
    v7 = -2147024809;
  if ( v7 >= 0 )
  {
    if ( cchToCopy < 0x7FFFFFFF )
    {
      if ( !a3 )
      {
        a3 = &word_1800EAD74;
        cchToCopy = 0LL;
      }
      v7 = 0;
      if ( a2 )
      {
        pcchNewDestLength = 0LL;
        v7 = StringCopyWorkerW_0(pszDest, a2, &pcchNewDestLength, a3, cchToCopy);
        v8 = a2 - pcchNewDestLength;
        if ( v7 >= 0 && v8 > 1 && 2 * v8 > 2 )
          memset(&pszDest[pcchNewDestLength + 1], 0, 2 * v8 - 2);
      }
      else if ( cchToCopy && *a3 )
      {
        return (unsigned int)(pszDest != 0LL ? -2147024774 : -2147024809);
      }
      return (unsigned int)v7;
    }
    v7 = -2147024809;
  }
  if ( a2 )
    *pszDest = 0;
  return (unsigned int)v7;
}
