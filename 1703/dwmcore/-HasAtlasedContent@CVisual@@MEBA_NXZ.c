/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x180086930
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800393B0 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800846C0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008BF10 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AF020 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0260 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rcx
  bool result; // al
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  char v4; // al

  v1 = *((_QWORD *)this + 30);
  result = 0;
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL);
    if ( (char *)v3 == (char *)CRenderData::IsOfType )
    {
      v4 = CRenderData::IsOfType(v1, 102);
    }
    else if ( v3 == CColorBrush::IsOfType )
    {
      v4 = CColorBrush::IsOfType(v1, 102LL);
    }
    else if ( (char *)v3 == (char *)CMaskBrush::IsOfType )
    {
      v4 = CMaskBrush::IsOfType(v1, 102);
    }
    else if ( v3 == CPrimitiveGroupLayerClip::IsOfType )
    {
      v4 = CPrimitiveGroupLayerClip::IsOfType(v1, 102LL);
    }
    else
    {
      v4 = v3 == CAtlasedRectsGroup::IsOfType ? CAtlasedRectsGroup::IsOfType(v1, 102LL) : v3(v1, 102LL);
    }
    if ( v4 )
      return 1;
  }
  return result;
}
