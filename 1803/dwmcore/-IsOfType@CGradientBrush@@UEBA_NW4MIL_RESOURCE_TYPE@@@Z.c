/*
 * XREFs of ?IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180012438
 * Callers:
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180011910 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGradientBrush::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 14;
  result = 0;
  if ( v2 <= 0x32 )
  {
    v3 = 0x4000004000001LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}
