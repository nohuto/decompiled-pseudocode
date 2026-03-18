/*
 * XREFs of ?Link@CDesktopTreeData@@MEAAXXZ @ 0x180092620
 * Callers:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800A0280 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopTreeData::Link(CDesktopTreeData *this)
{
  *((_BYTE *)this + 16) |= 1u;
}
