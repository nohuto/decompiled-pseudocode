/*
 * XREFs of ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800208EC
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180008720 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180008B64 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x180016014 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18007DFB0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CAtlasedImage::SetSize(CAtlasedImage *this, const struct tagSIZE *a2)
{
  __int64 v2; // rax
  CVisual *v3; // rcx
  void (__fastcall *v4)(CVisual *, int); // rax

  if ( *((_DWORD *)this + 6) != a2->cx || *((_DWORD *)this + 7) != a2->cy )
  {
    v2 = (__int64)*a2;
    *((_DWORD *)this + 24) |= 1u;
    *((_QWORD *)this + 3) = v2;
    v3 = (CVisual *)*((_QWORD *)this + 10);
    if ( v3 )
    {
      v4 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v3 + 24LL);
      if ( v4 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v3, 0x2000);
      else
        v4(v3, 0x2000);
    }
  }
}
