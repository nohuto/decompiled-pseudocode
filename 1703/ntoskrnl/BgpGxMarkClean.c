/*
 * XREFs of BgpGxMarkClean @ 0x14003CC80
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x140756098 (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x14075AA54 (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
