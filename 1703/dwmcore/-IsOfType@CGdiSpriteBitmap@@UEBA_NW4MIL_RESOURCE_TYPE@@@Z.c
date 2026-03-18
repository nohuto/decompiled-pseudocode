/*
 * XREFs of ?IsOfType@CGdiSpriteBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800547B0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007CD50 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CGdiSpriteBitmap::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 98 )
    return 1;
  v4 = CBitmapResource::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
