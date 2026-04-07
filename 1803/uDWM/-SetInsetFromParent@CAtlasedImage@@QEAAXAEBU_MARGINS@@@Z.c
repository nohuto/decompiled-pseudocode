/*
 * XREFs of ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800206D4
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800038E0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800175C0 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x180087090 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CAtlasedImage::SetInsetFromParent(CAtlasedImage *this, const struct _MARGINS *a2)
{
  __int128 v3; // xmm0
  CVisual *v4; // rcx
  void (__fastcall *v5)(CVisual *__hidden, unsigned int); // rax

  if ( *((_DWORD *)this + 8) != a2->cxLeftWidth
    || *((_DWORD *)this + 9) != a2->cxRightWidth
    || *((_DWORD *)this + 10) != a2->cyTopHeight
    || *((_DWORD *)this + 11) != a2->cyBottomHeight )
  {
    v3 = (__int128)*a2;
    *((_DWORD *)this + 24) |= 1u;
    *((_OWORD *)this + 2) = v3;
    v4 = (CVisual *)*((_QWORD *)this + 10);
    if ( v4 )
    {
      v5 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v4 + 24LL);
      if ( v5 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v4, 0x1000u);
      else
        v5(v4, 4096u);
    }
  }
}
