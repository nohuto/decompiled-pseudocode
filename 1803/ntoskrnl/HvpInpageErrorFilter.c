/*
 * XREFs of HvpInpageErrorFilter @ 0x140706C4C
 * Callers:
 *     HvpViewMapTouchPages @ 0x140512FBC (HvpViewMapTouchPages.c)
 * Callees:
 *     CmSiBugCheck @ 0x140223454 (CmSiBugCheck.c)
 */

__int64 __fastcall HvpInpageErrorFilter(ULONG_PTR *a1)
{
  if ( *(_DWORD *)*a1 != -1073741818 )
    CmSiBugCheck((__int64)a1, *(int *)*a1, *a1, a1[1]);
  return 1LL;
}
