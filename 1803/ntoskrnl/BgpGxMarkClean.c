/*
 * XREFs of BgpGxMarkClean @ 0x1400D2EF8
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x14083D6C8 (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x140840CD4 (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
