/*
 * XREFs of ?ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z @ 0x18000C700
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004CA70 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0260 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ShouldUseDrawListRenderPath(CPrimitiveGroup *this, struct CDrawingContext *a2)
{
  __int64 (__fastcall *v2)(CPrimitiveGroup *, __int64); // rax
  char v3; // al
  char v4; // dl
  __int64 result; // rax
  BOOL v6; // ecx

  v2 = *(__int64 (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 48LL);
  if ( (char *)v2 == (char *)CPrimitiveGroupLayerClip::IsOfType )
  {
    v3 = CPrimitiveGroupLayerClip::IsOfType(this, 103LL);
  }
  else if ( (char *)v2 == (char *)CPrimitiveGroup::IsOfType )
  {
    v3 = CPrimitiveGroup::IsOfType(this, 103LL);
  }
  else
  {
    v3 = v2(this, 103LL);
  }
  v4 = v3;
  result = 0LL;
  v6 = v4 == 0;
  if ( CCommonRegistryData::m_drawListRenderPathMode == 2 )
    return 1LL;
  if ( CCommonRegistryData::m_drawListRenderPathMode == 1 )
    v6 = 0;
  if ( v6 )
    return 1LL;
  return result;
}
