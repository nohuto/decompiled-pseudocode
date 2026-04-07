/*
 * XREFs of ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800205D4
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x1800169FC (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180019948 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x1800744C0 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     floor_0 @ 0x18004B342 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::SetOpacity(CAtlasedImage *this, float a2)
{
  int v3; // edx
  unsigned __int8 v4; // cl
  int v5; // edi
  CVisual *v6; // rcx
  void (__fastcall *v7)(CVisual *__hidden, unsigned int); // rax

  v3 = (int)floor_0((float)(a2 * 255.0) + 0.5);
  v4 = -1;
  if ( v3 <= 255 )
  {
    v4 = 0;
    if ( v3 >= 0 )
      v4 = v3;
  }
  v5 = 16843009 * v4;
  if ( v5 != *((_DWORD *)this + 17) )
  {
    *((_DWORD *)this + 24) |= 2u;
    v6 = (CVisual *)*((_QWORD *)this + 10);
    if ( v6 )
    {
      v7 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v6 + 24LL);
      if ( v7 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v6, 0x2000u);
      else
        v7(v6, 0x2000u);
    }
    *((_DWORD *)this + 17) = v5;
  }
}
