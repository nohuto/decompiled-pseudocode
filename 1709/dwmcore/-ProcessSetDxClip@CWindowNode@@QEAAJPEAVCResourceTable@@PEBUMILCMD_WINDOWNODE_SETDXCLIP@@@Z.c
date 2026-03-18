/*
 * XREFs of ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18009CAB4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036AA4 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180097F4C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180178C78 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXCLIP *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  struct CResource *Resource; // rsi
  bool v9; // r14
  signed int v10; // eax
  CGeometry *v11; // rcx
  signed int ShapeData; // eax
  signed int v13; // eax
  CRegionShape *v14; // [rsp+30h] [rbp-50h] BYREF
  char v15; // [rsp+38h] [rbp-48h]
  CRegionShape *v16; // [rsp+40h] [rbp-40h] BYREF
  char v17; // [rsp+48h] [rbp-38h]
  float v18[4]; // [rsp+50h] [rbp-30h] BYREF
  float v19[4]; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( !(_DWORD)v5 || (Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 55LL)) != 0LL )
  {
    if ( Resource != *((struct CResource **)this + 117) )
    {
      v16 = 0LL;
      v9 = 0;
      v14 = 0LL;
      v17 = 0;
      v15 = 0;
      if ( Resource
        && (v10 = CGeometry::GetShapeData(
                    Resource,
                    (const struct D2D_SIZE_F *)((char *)this + 132),
                    (struct CShapePtr *)&v16),
            v4 = v10,
            v10 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x6FCu);
      }
      else
      {
        v11 = (CGeometry *)*((_QWORD *)this + 117);
        if ( v11
          && (ShapeData = CGeometry::GetShapeData(
                            v11,
                            (const struct D2D_SIZE_F *)((char *)this + 132),
                            (struct CShapePtr *)&v14),
              v4 = ShapeData,
              ShapeData < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeData, 0x701u);
        }
        else
        {
          if ( CShapePtr::IsAxisAlignedRectangle(&v16) && CShapePtr::IsAxisAlignedRectangle(&v14) )
          {
            CWindowNode::GetGeometryBounds(this, Resource, v19);
            CWindowNode::GetGeometryBounds(this, *((_QWORD *)this + 117), v18);
            v9 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v19, v18) != 0;
          }
          v13 = CResource::RegisterNotifier(this, Resource);
          v4 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x713u);
          }
          else
          {
            CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 117));
            *((_QWORD *)this + 117) = Resource;
            if ( !v9 )
            {
              *((_BYTE *)this + 1008) = 0;
              CVisual::PropagateFlags((__int64)this, 5u, 0);
            }
          }
        }
      }
      CShapePtr::Release(&v14);
      CShapePtr::Release(&v16);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x6E7u);
  }
  return v4;
}
