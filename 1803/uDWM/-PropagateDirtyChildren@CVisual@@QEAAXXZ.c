/*
 * XREFs of ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180025994
 * Callers:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180016598 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x180017400 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002E97C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180026750 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::PropagateDirtyChildren(CVisual *this)
{
  _BYTE *i; // rbx
  void (__fastcall *v2)(CVisual *__hidden); // rax

  for ( i = (_BYTE *)*((_QWORD *)this + 3); i && (i[80] & 1) == 0; i = (_BYTE *)*((_QWORD *)i + 3) )
  {
    v2 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)i + 32LL);
    if ( v2 == CVisual::SetDirtyChildren )
      CVisual::SetDirtyChildren((CVisual *)i);
    else
      v2((CVisual *)i);
  }
}
