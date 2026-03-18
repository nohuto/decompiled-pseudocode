/*
 * XREFs of ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008D4E0
 * Callers:
 *     ?IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180074270 (-IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CFlipChain@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180165770 (-IsOfType@CFlipChain@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapResource::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 11;
  result = 0;
  if ( v2 <= 0x3D )
  {
    v3 = 0x2000000004000001LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}
