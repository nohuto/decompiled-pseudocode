/*
 * XREFs of ?Link@CDesktopTreeData@@MEAAXXZ @ 0x18004F120
 * Callers:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18004EDE0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopTreeData::Link(CDesktopTreeData *this)
{
  *((_BYTE *)this + 16) |= 1u;
}
