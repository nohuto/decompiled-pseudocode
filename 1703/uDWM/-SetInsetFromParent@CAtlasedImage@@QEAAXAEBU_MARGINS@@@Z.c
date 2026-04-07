/*
 * XREFs of ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18002BF34
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x18001DD3C (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x180020520 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x180086BB0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CAtlasedImage::SetInsetFromParent(CAtlasedImage *this, const struct _MARGINS *a2)
{
  __int128 v2; // xmm0
  CVisual *v3; // rcx
  void (__fastcall *v4)(CVisual *, int); // rax

  if ( *((_DWORD *)this + 8) != a2->cxLeftWidth
    || *((_DWORD *)this + 9) != a2->cxRightWidth
    || *((_DWORD *)this + 10) != a2->cyTopHeight
    || *((_DWORD *)this + 11) != a2->cyBottomHeight )
  {
    v2 = (__int128)*a2;
    *((_DWORD *)this + 24) |= 1u;
    *((_OWORD *)this + 2) = v2;
    v3 = (CVisual *)*((_QWORD *)this + 10);
    if ( v3 )
    {
      v4 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v3 + 24LL);
      if ( v4 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v3, 4096);
      else
        v4(v3, 4096);
    }
  }
}
