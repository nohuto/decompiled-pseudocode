/*
 * XREFs of ??_ECTreeData@@UEAAPEAXI@Z @ 0x180160220
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x18004EFBC (--1CTreeData@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CTreeData *__fastcall CTreeData::`vector deleting destructor'(CTreeData *this, char a2)
{
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
