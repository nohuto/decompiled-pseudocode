/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x180022380
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800542A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024790 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024FA0 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800704C0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070CF0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800825B0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CSpriteVisual *this)
{
  bool v1; // bl
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  char v5; // al
  int v6; // eax

  v1 = 0;
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL);
    if ( v4 == CMaskBrush::IsOfType )
    {
      v5 = CMaskBrush::IsOfType(v3, 14LL);
    }
    else if ( v4 == CSurfaceBrush::IsOfType )
    {
      v5 = CSurfaceBrush::IsOfType(v3, 14LL);
    }
    else if ( v4 == CEffectBrush::IsOfType )
    {
      v5 = CEffectBrush::IsOfType(v3, 14LL);
    }
    else if ( v4 == CColorBrush::IsOfType )
    {
      v5 = CColorBrush::IsOfType(v3, 14LL);
    }
    else if ( v4 == CNineGridBrush::IsOfType )
    {
      v5 = CNineGridBrush::IsOfType(v3, 14LL);
    }
    else
    {
      v5 = v4(v3, 14LL);
    }
    v1 = v5 != 0;
  }
  v6 = v1 + 1;
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x100) == 0 )
    v6 = v1;
  return v6 == 1;
}
