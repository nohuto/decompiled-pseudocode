/*
 * XREFs of ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18004FF50
 * Callers:
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x180050CE0 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x18014BB10 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 * Callees:
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004D6FC (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::SetTransform(struct CResource **this, struct CTransform3D *a2)
{
  unsigned int v2; // edi
  int v6; // eax

  v2 = 0;
  if ( a2 != this[29] )
  {
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xA0Au);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[29]);
      this[29] = a2;
      CVisual::PropagateFlags(this, 5LL);
      CVisual::OnOuterTransformChanged((CVisual *)this);
    }
  }
  return v2;
}
