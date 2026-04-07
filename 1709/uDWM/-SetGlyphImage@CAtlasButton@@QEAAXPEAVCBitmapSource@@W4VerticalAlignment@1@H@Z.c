/*
 * XREFs of ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x180024A6C
 * Callers:
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180015C6C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180015D5C (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasButton::SetGlyphImage(__int64 a1, volatile signed __int32 *a2, __int64 a3, int a4)
{
  CBaseObject *v6; // rcx
  CVisual *v7; // rcx
  void (__fastcall *v8)(CVisual *, int); // rax

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
      v8 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v7 + 24LL);
      if ( v8 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v7, 0x2000);
      else
        v8(v7, 0x2000);
    }
  }
}
