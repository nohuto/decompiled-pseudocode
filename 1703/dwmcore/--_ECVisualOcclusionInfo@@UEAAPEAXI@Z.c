/*
 * XREFs of ??_ECVisualOcclusionInfo@@UEAAPEAXI@Z @ 0x18004F760
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x18004EFBC (--1CTreeData@@UEAA@XZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

CVisualOcclusionInfo *__fastcall CVisualOcclusionInfo::`vector deleting destructor'(
        CVisualOcclusionInfo *this,
        char a2)
{
  *(_QWORD *)this = &COcclusionInfo::`vftable';
  if ( (a2 & 1) != 0 )
    HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
