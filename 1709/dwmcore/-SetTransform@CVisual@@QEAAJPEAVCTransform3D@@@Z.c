/*
 * XREFs of ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18005111C
 * Callers:
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x180051D14 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x180129E60 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 * Callees:
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004F728 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CVisual::SetTransform(struct CResource **this, struct CTransform3D *a2)
{
  unsigned int v2; // edi
  int v5; // eax

  v2 = 0;
  if ( a2 != this[28] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x977u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[28]);
      this[28] = a2;
      CVisual::PropagateFlags(this, 5LL, 0LL);
      CVisual::OnOuterTransformChanged((CVisual *)this);
    }
  }
  return v2;
}
