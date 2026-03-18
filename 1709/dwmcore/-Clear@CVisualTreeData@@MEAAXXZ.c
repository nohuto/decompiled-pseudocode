/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1800B17C0
 * Callers:
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180030C20 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800A0430 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 32) = 0LL;
}
