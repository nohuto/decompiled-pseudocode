/*
 * XREFs of ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x18004EE34
 * Callers:
 *     ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x180051D60 (-ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetTopLevelWindow(CVisual *this, __int64 a2)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == `CVisual::SetRelativeLayoutSizeInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x80000000;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 208), 1u, 8u, &v2);
}
