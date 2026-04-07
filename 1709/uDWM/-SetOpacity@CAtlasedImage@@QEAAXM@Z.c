/*
 * XREFs of ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800203A4
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180015D5C (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180019BF4 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18006D720 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     floor_0 @ 0x180046742 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::SetOpacity(CAtlasedImage *this, float a2)
{
  int v3; // ecx
  unsigned __int8 v4; // al
  int v5; // edi
  CVisual *v6; // rcx
  void (__fastcall *v7)(CVisual *, int); // rax

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
      v7 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v6 + 24LL);
      if ( v7 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v6, 0x2000);
      else
        v7(v6, 0x2000);
    }
    *((_DWORD *)this + 17) = v5;
  }
}
