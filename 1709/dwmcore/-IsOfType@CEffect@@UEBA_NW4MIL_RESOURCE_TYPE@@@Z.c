/*
 * XREFs of ?IsOfType@CEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BD7E8
 * Callers:
 *     ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096850 (-IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801471A0 (-IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEffect::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 45;
  result = 0;
  if ( v2 <= 0x39 )
  {
    v3 = 0x202000000000001LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}
