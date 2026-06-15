/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x14003FA74
 * Callers:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x14003EC14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 *     StringCopyWorkerW_0 @ 0x14003FB54 (StringCopyWorkerW_0.c)
 */

__int64 __fastcall StringCchCopyNExW(
        STRSAFE_LPWSTR pszDest,
        size_t a2,
        const unsigned __int16 *a3,
        size_t cchToCopy,
        size_t pcchNewDestLength)
{
  HRESULT v7; // ebx
  unsigned __int64 v9; // rdi

  v7 = 0;
  if ( !pszDest && a2 || a2 > 0x7FFFFFFF )
    v7 = -2147024809;
  if ( v7 < 0 )
    goto LABEL_8;
  if ( cchToCopy >= 0x7FFFFFFF )
  {
    v7 = -2147024809;
LABEL_8:
    if ( a2 )
      *pszDest = 0;
    return (unsigned int)v7;
  }
  if ( !a3 )
  {
    a3 = (const unsigned __int16 *)&unk_14006B308;
    cchToCopy = 0LL;
  }
  v7 = 0;
  if ( a2 )
  {
    pcchNewDestLength = 0LL;
    v7 = StringCopyWorkerW_0(pszDest, a2, &pcchNewDestLength, a3, cchToCopy);
    v9 = a2 - pcchNewDestLength;
    if ( v7 >= 0 && v9 > 1 && 2 * v9 > 2 )
      memset(&pszDest[pcchNewDestLength + 1], 0, 2 * v9 - 2);
  }
  else if ( cchToCopy && *a3 )
  {
    return (unsigned int)(pszDest != 0LL ? -2147024774 : -2147024809);
  }
  return (unsigned int)v7;
}
