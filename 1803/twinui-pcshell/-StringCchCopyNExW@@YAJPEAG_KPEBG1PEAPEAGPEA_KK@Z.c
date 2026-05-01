/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18000C410
 * Callers:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18000C374 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18000C4E0 (StringCopyWorkerW.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
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
        a3 = &word_18035ABCC;
        cchToCopy = 0LL;
      }
      v7 = 0;
      if ( a2 )
      {
        pcchNewDestLength = 0LL;
        v7 = StringCopyWorkerW(pszDest, a2, &pcchNewDestLength, a3, cchToCopy);
        v8 = a2 - pcchNewDestLength;
        if ( v7 >= 0 && v8 > 1 && 2 * v8 > 2 )
          memset_0(&pszDest[pcchNewDestLength + 1], 0, 2 * v8 - 2);
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
