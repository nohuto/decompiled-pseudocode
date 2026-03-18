/*
 * XREFs of ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800B17F0
 * Callers:
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180030C20 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x1800A0350 (--1CTreeData@@UEAA@XZ.c)
 */

CVisualTreeData *__fastcall CVisualTreeData::`vector deleting destructor'(CVisualTreeData *this, char a2)
{
  *(_QWORD *)this = &CVisualTreeData::`vftable';
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
