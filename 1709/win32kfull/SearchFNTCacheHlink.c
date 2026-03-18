/*
 * XREFs of SearchFNTCacheHlink @ 0x1C00B6CD0
 * Callers:
 *     EngFntCacheLookUp @ 0x1C0041230 (EngFntCacheLookUp.c)
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C00B511C (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z.c)
 *     SearchFntCacheNewLink @ 0x1C0142864 (SearchFntCacheNewLink.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchFNTCacheHlink(unsigned int a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int i; // r9d

  *a2 = 0LL;
  result = 61 * (a1 / 0x3D);
  for ( i = *(_DWORD *)(a3 + 4LL * (a1 % 0x3D) + 72); i != -1; i = *(_DWORD *)(result + 8) )
  {
    result = 28LL * i + a3 + 316;
    if ( a1 == *(_DWORD *)result )
    {
      *a2 = result;
      return result;
    }
  }
  return result;
}
