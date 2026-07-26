/*
 * XREFs of ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C00168F0
 * Callers:
 *     ndisReadRssKeywords @ 0x1C00ADFC8 (ndisReadRssKeywords.c)
 *     ndisCompareProcNumInit @ 0x1C0114600 (ndisCompareProcNumInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCompareProcNum(struct _PROCESSOR_NUMBER a1, struct _PROCESSOR_NUMBER a2)
{
  if ( a1.Group > a2.Group )
    return 1LL;
  if ( a1.Group < a2.Group || a1.Number < a2.Number )
    return 0xFFFFFFFFLL;
  return a1.Number > a2.Number;
}
