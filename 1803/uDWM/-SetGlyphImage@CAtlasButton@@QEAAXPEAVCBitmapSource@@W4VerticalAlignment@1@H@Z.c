/*
 * XREFs of ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x18001910C
 * Callers:
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001690C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x1800169FC (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
