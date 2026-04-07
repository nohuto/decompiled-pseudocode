/*
 * XREFs of ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180020664
 * Callers:
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001690C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x1800169FC (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x180087090 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::SetBitmapSource(CAtlasedImage *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx
  CVisual *v5; // rcx
  void (__fastcall *v6)(CVisual *__hidden, unsigned int); // rax

  v4 = (CBaseObject *)*((_QWORD *)this + 9);
  if ( v4 != a2 )
  {
    if ( v4 )
      CBaseObject::Release(v4);
    *((_QWORD *)this + 9) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    *((_DWORD *)this + 24) |= 1u;
    v5 = (CVisual *)*((_QWORD *)this + 10);
    if ( v5 )
    {
      v6 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v5 + 24LL);
      if ( v6 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v5, 0x2000u);
      else
        v6(v5, 0x2000u);
    }
  }
}
