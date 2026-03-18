/*
 * XREFs of ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x180053E58
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF64 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801626D8 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXCLIP *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CGeometry *Resource; // rsi
  CShape *v9; // rcx
  bool v10; // r14
  int ShapeData; // eax
  int v12; // eax
  int v13; // eax
  CShape *v14; // [rsp+40h] [rbp-19h] BYREF
  char v15; // [rsp+48h] [rbp-11h]
  CShape *v16; // [rsp+50h] [rbp-9h] BYREF
  char v17; // [rsp+58h] [rbp-1h]
  _BYTE v18[16]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp+17h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 )
  {
    Resource = (CGeometry *)CResourceTable::GetResource(a2, v5, 70LL);
    if ( !Resource )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x6FBu);
      return v4;
    }
  }
  if ( Resource != *((CGeometry **)this + 114) )
  {
    v9 = 0LL;
    v10 = 0;
    v16 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v17 = 0;
    if ( Resource )
    {
      ShapeData = CGeometry::GetShapeData(Resource, (const struct D2D_SIZE_F *)this + 16, (struct CShapePtr *)&v14);
      v4 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeData, 0x710u);
LABEL_23:
        CShapePtr::Release((CShapePtr *)&v16);
        CShapePtr::Release((CShapePtr *)&v14);
        return v4;
      }
      v9 = v14;
    }
    if ( *((_QWORD *)this + 114) )
    {
      v12 = CGeometry::GetShapeData(
              *((CGeometry **)this + 114),
              (const struct D2D_SIZE_F *)this + 16,
              (struct CShapePtr *)&v16);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x715u);
        goto LABEL_23;
      }
      v9 = v14;
    }
    if ( v9 && CShape::IsAxisAlignedRectangle(v9) && v16 && CShape::IsAxisAlignedRectangle(v16) )
    {
      CWindowNode::GetGeometryBounds(this, Resource, v19);
      CWindowNode::GetGeometryBounds(this, *((_QWORD *)this + 114), v18);
      v10 = (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v19, v18) != 0;
    }
    v13 = CResource::RegisterNotifier(this, Resource);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x727u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 114));
      *((_QWORD *)this + 114) = Resource;
      if ( !v10 )
      {
        *((_BYTE *)this + 984) = 0;
        CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
      }
    }
    goto LABEL_23;
  }
  return v4;
}
