/*
 * XREFs of ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18008601C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180087F94 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 * Callees:
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18004F4E8 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 */

void __fastcall CVisual::SetOpacityInternal(CVisual *this, float a2)
{
  char *v2; // rbx
  struct CSparseStorage::DataInfo *SlotForData; // rax

  if ( LODWORD(a2) == `CVisual::SetOpacityInternal'::`2'::sc_defaultValue )
  {
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x100000u;
  }
  else
  {
    v2 = (char *)this + 208;
    SlotForData = CSparseStorage::FindSlotForData((char **)this + 26, 12, 4u);
    *((float *)SlotForData + 1) = a2;
    *(_DWORD *)SlotForData &= 0x8CFFFFFF;
    *(_DWORD *)SlotForData |= 0xC000000u;
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) |= 0x100000u;
  }
}
