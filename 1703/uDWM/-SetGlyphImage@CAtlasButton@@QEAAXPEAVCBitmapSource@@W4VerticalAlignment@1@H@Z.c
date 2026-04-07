/*
 * XREFs of ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x18001B44C
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001FC44 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasButton::SetGlyphImage(__int64 a1, volatile signed __int32 *a2, __int64 a3, int a4)
{
  CBaseObject *v6; // rcx
  CVisual *v7; // rcx
  void (__fastcall *v8)(CVisual *__hidden, unsigned int); // rax

  v6 = *(CBaseObject **)(a1 + 144);
  if ( v6 != (CBaseObject *)a2 || *(_DWORD *)(a1 + 152) != 1 || a4 != *(_DWORD *)(a1 + 156) )
  {
    *(_DWORD *)(a1 + 152) = 1;
    if ( v6 )
      CBaseObject::Release(v6);
    *(_QWORD *)(a1 + 144) = a2;
    if ( a2 )
      _InterlockedIncrement(a2 + 2);
    *(_DWORD *)(a1 + 96) |= 1u;
    v7 = *(CVisual **)(a1 + 80);
    if ( v7 )
    {
      v8 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v7 + 24LL);
      if ( v8 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v7, 0x2000u);
      else
        v8(v7, 0x2000u);
    }
  }
}
