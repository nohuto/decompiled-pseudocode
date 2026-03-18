/*
 * XREFs of ExpOsProductPfnCacheProvider @ 0x1407BE680
 * Callers:
 *     <none>
 * Callees:
 *     ExpOsProductCacheProviderHelper @ 0x140549CD4 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpOsProductPfnCacheProvider(_DWORD *a1, void *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  return ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_1407F90D0, a1, a2, a3, a4, a5);
}
