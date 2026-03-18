/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x180049B40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800953D0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180098B50 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180099460 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009AE80 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B3C40 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rcx
  bool result; // al
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  char v4; // al

  v1 = *((_QWORD *)this + 31);
  result = 0;
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL);
    if ( (char *)v3 != (char *)&CRenderData::IsOfType )
    {
      if ( v3 == CColorBrush::IsOfType )
      {
        v4 = CColorBrush::IsOfType(v1, 106LL);
      }
      else if ( v3 == CMaskBrush::IsOfType )
      {
        v4 = CMaskBrush::IsOfType(v1, 106LL);
      }
      else if ( v3 == CEffectBrush::IsOfType )
      {
        v4 = CEffectBrush::IsOfType(v1, 106LL);
      }
      else if ( v3 == CSurfaceBrush::IsOfType )
      {
        v4 = CSurfaceBrush::IsOfType(v1, 106LL);
      }
      else
      {
        v4 = v3 == CAtlasedRectsGroup::IsOfType ? CAtlasedRectsGroup::IsOfType(v1, 106LL) : v3(v1, 106LL);
      }
      if ( v4 )
        return 1;
    }
  }
  return result;
}
