/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x18009DB10
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004E420 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180029A50 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800953D0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180098B50 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180099460 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009AE80 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CSpriteVisual *this)
{
  bool v1; // bl
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  char v5; // al
  int v6; // eax

  v1 = 0;
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL);
    if ( (char *)v4 == (char *)CMaskBrush::IsOfType )
    {
      v5 = CMaskBrush::IsOfType(v3, 14);
    }
    else if ( (char *)v4 == (char *)CSurfaceBrush::IsOfType )
    {
      v5 = CSurfaceBrush::IsOfType(v3, 14);
    }
    else if ( (char *)v4 == (char *)CEffectBrush::IsOfType )
    {
      v5 = CEffectBrush::IsOfType(v3, 0xEu);
    }
    else if ( (char *)v4 == (char *)CColorBrush::IsOfType )
    {
      v5 = CColorBrush::IsOfType(v3, 0xEu);
    }
    else if ( (char *)v4 == (char *)CNineGridBrush::IsOfType )
    {
      v5 = CNineGridBrush::IsOfType(v3, 14);
    }
    else
    {
      v5 = v4(v3, 14LL);
    }
    v1 = v5 != 0;
  }
  v6 = v1 + 1;
  if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x100) == 0 )
    v6 = v1;
  return v6 == 1;
}
