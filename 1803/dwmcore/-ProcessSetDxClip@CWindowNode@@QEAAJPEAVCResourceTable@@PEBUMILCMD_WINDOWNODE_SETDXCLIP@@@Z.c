/*
 * XREFs of ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18009335C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180064E00 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18013F454 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A9B0C (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXCLIP *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  CGeometry *Resource; // rsi
  CGeometry *v8; // rcx
  bool v10; // r14
  int ShapeData; // eax
  int v12; // eax
  int v13; // eax
  CRectanglesShape *v14; // [rsp+30h] [rbp-50h] BYREF
  char v15; // [rsp+38h] [rbp-48h]
  CRectanglesShape *v16; // [rsp+40h] [rbp-40h] BYREF
  char v17; // [rsp+48h] [rbp-38h]
  float v18[4]; // [rsp+50h] [rbp-30h] BYREF
  struct D2D_RECT_F v19; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
  {
    Resource = (CGeometry *)CResourceTable::GetResource((__int64)a2, v5, 0x3Cu);
    if ( !Resource )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x490u);
      return v4;
    }
  }
  v8 = (CGeometry *)*((_QWORD *)this + 107);
  if ( Resource != v8 )
  {
    v16 = 0LL;
    v14 = 0LL;
    v10 = 0;
    v17 = 0;
    v15 = 0;
    if ( Resource )
    {
      ShapeData = CGeometry::GetShapeData(Resource, (const struct D2D_SIZE_F *)((char *)this + 132), &v16);
      v4 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x4A5u);
LABEL_20:
        CShapePtr::Release(&v14);
        CShapePtr::Release(&v16);
        return v4;
      }
      v8 = (CGeometry *)*((_QWORD *)this + 107);
    }
    if ( v8
      && (v12 = CGeometry::GetShapeData(v8, (const struct D2D_SIZE_F *)((char *)this + 132), &v14), v4 = v12, v12 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x4AAu);
    }
    else
    {
      if ( CShapePtr::IsAxisAlignedRectangle((CShapePtr *)&v16) && CShapePtr::IsAxisAlignedRectangle((CShapePtr *)&v14) )
      {
        CWindowNode::GetGeometryBounds(this, Resource, &v19);
        CWindowNode::GetGeometryBounds(this, *((_QWORD *)this + 107), v18);
        v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v19, v18) != 0;
      }
      v13 = CResource::RegisterNotifier(this, Resource);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x4BCu);
      }
      else
      {
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 107));
        *((_QWORD *)this + 107) = Resource;
        if ( !v10 )
        {
          *((_BYTE *)this + 912) = 0;
          CVisual::PropagateFlags((__int64)this, 5u, 0);
        }
      }
    }
    goto LABEL_20;
  }
  return v4;
}
