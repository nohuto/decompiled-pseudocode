/*
 * XREFs of ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x18004F470
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800B6C30 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x18004EFBC (--1CTreeData@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CVisualTreeData *__fastcall CVisualTreeData::`vector deleting destructor'(CVisualTreeData *this, char a2)
{
  *(_QWORD *)this = &CVisualTreeData::`vftable';
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
