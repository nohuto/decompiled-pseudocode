/*
 * XREFs of ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180019170
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E800 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18000F570 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x1800163AC (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 * Callees:
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180018C30 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::PropagateDirtyChildren(CVisual *this)
{
  _BYTE *i; // rbx
  void (__fastcall *v2)(CVisual *); // rax

  for ( i = (_BYTE *)*((_QWORD *)this + 3); i && (i[80] & 1) == 0; i = (_BYTE *)*((_QWORD *)i + 3) )
  {
    v2 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)i + 32LL);
    if ( v2 == CVisual::SetDirtyChildren )
      CVisual::SetDirtyChildren((CVisual *)i);
    else
      v2((CVisual *)i);
  }
}
