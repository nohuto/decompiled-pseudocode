/*
 * XREFs of ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x18004CE94
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004D92C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetOpacityInternal(CVisual *this, float a2)
{
  char **v2; // rcx
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( LODWORD(a2) == `CVisual::SetOpacityInternal'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x100000u;
  else
    CSparseStorage::SetData(v2, 12, 4u, &v3);
}
