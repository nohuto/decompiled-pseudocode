/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1800294F0
 * Callers:
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x18004104C (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180029EF0 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 32) = 0LL;
}
