/*
 * XREFs of BgpGxMarkClean @ 0x140132630
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x1407CE8C0 (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x1407D413C (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
