/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x180054900
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D840 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024790 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024FA0 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070CF0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B53B0 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rcx
  bool (__fastcall *v3)(__int64, int); // rax
  char v4; // al

  v1 = *((_QWORD *)this + 30);
  if ( !v1 )
    return 0LL;
  v3 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v1 + 48LL);
  if ( v3 == CRenderData::IsOfType )
  {
    v4 = CRenderData::IsOfType(v1, 98);
  }
  else if ( (char *)v3 == (char *)CPrimitiveGroupLayerClip::IsOfType )
  {
    v4 = CPrimitiveGroupLayerClip::IsOfType(v1, 98LL);
  }
  else if ( v3 == CMaskBrush::IsOfType )
  {
    v4 = CMaskBrush::IsOfType(v1, 98);
  }
  else if ( v3 == CSurfaceBrush::IsOfType )
  {
    v4 = CSurfaceBrush::IsOfType(v1, 98);
  }
  else if ( (char *)v3 == (char *)CColorBrush::IsOfType )
  {
    v4 = CColorBrush::IsOfType(v1, 98LL);
  }
  else
  {
    v4 = v3(v1, 98);
  }
  return v4 != 0;
}
