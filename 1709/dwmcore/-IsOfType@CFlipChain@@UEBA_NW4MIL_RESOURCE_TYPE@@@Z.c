/*
 * XREFs of ?IsOfType@CFlipChain@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180165770
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008D4E0 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CFlipChain::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 50 )
    return 1;
  v2 = CBitmapResource::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
