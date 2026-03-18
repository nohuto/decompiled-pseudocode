/*
 * XREFs of ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x180029520
 * Callers:
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x18004104C (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x180029E10 (--1CTreeData@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CVisualTreeData *__fastcall CVisualTreeData::`vector deleting destructor'(CVisualTreeData *this, char a2)
{
  *(_QWORD *)this = &CVisualTreeData::`vftable';
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x108uLL);
  return this;
}
