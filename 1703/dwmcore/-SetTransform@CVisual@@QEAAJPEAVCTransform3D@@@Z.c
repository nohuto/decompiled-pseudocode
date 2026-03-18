/*
 * XREFs of ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18008533C
 * Callers:
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x180085938 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x180140A00 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180086BE0 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CVisual::SetTransform(struct CResource **this, struct CTransform3D *a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( a2 != this[28] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x94Au);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[28]);
      this[28] = a2;
      CVisual::PropagateFlags((struct CVisual *)this, 1, 1, 0, 0, 0, 0, 0);
      CVisual::OnOuterTransformChanged((CVisual *)this);
    }
  }
  return v2;
}
