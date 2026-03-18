/*
 * XREFs of BgpGxDrawBitmapImage @ 0x140840D9C
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x14083D910 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140840410 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x1401651B0 (BgpGxDrawRectangle.c)
 *     BgpGxRectangleDestroy @ 0x14083D230 (BgpGxRectangleDestroy.c)
 *     BgpGxParseBitmap @ 0x14083D624 (BgpGxParseBitmap.c)
 */

__int64 __fastcall BgpGxDrawBitmapImage(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // r8
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = BgpGxParseBitmap(a1, &v6);
  if ( v3 >= 0 )
  {
    v3 = BgpGxDrawRectangle(v6, a2, v4);
    BgpGxRectangleDestroy(v6);
  }
  return (unsigned int)v3;
}
