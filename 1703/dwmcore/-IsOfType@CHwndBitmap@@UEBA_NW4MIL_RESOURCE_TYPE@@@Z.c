/*
 * XREFs of ?IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001FF50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007CD50 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CHwndBitmap::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 99 )
    return 1;
  v2 = CBitmapResource::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
