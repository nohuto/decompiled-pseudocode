/*
 * XREFs of ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18005C264 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18004F7FC (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18007B408 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z @ 0x1800904CC (-GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x180091200 (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z @ 0x180091710 (-PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180092A80 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180097FB8 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18011A620 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18011A640 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801770E8 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801A02C0 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  FLOAT v11; // eax
  unsigned __int64 v12; // r13
  float v13; // xmm9_4
  float v14; // xmm8_4
  unsigned int v15; // eax
  float v16; // xmm6_4
  float v17; // xmm7_4
  bool v18; // r15
  bool v19; // r14
  bool v20; // al
  _BYTE *v21; // rax
  char v22; // dl
  signed int v23; // r15d
  __int64 v24; // r14
  char v25; // r15
  struct _LIST_ENTRY *TreeData; // r10
  CVisual *v27; // rcx
  struct D2D_POINT_2F v28; // rcx
  int v29; // eax
  __int128 v30; // xmm0
  signed int ShapeData; // r14d
  char v32; // cl
  __int64 v33; // r13
  struct _LIST_ENTRY *v34; // r14
  char v35; // r15
  struct _LIST_ENTRY *v36; // r10
  unsigned __int64 Blink; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  float v42; // xmm0_4
  float v43; // xmm0_4
  __int64 v44; // rax
  char v45; // r15
  CGeometry *v46; // rcx
  bool v47; // r15
  bool *v48; // rcx
  int v50; // edx
  int *v51; // rcx
  struct CEffect *EffectInternal; // rcx
  __int64 (__fastcall *v53)(struct CEffect *, __int64); // rax
  char v54; // al
  __int64 v55; // rax
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  CInteraction *InteractionInternal; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v64; // rax
  struct _LIST_ENTRY *v65; // rax
  struct _LIST_ENTRY *v66; // rcx
  struct _LIST_ENTRY *v67; // rax
  struct _LIST_ENTRY *v68; // rcx
  signed int updated; // eax
  struct _LIST_ENTRY *v70; // rax
  struct _LIST_ENTRY *v71; // rcx
  struct _LIST_ENTRY *v72; // rax
  struct _LIST_ENTRY *v73; // rcx
  signed int v74; // eax
  CInteraction *v75; // rax
  __int64 v76; // r9
  unsigned int BspPolygonListCount; // esi
  _QWORD *BspPolygonList; // rax
  unsigned int v79; // [rsp+28h] [rbp-E0h]
  bool v80[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_POINT_2F v81; // [rsp+40h] [rbp-C8h] BYREF
  bool *v82; // [rsp+48h] [rbp-C0h]
  _OWORD v83[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v84; // [rsp+98h] [rbp-70h]
  _OWORD v85[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v86; // [rsp+E8h] [rbp-20h]
  _BYTE v87[64]; // [rsp+F8h] [rbp-10h] BYREF
  int v88; // [rsp+138h] [rbp+30h]
  __int128 v89; // [rsp+148h] [rbp+40h] BYREF
  __int64 v90; // [rsp+158h] [rbp+50h]

  v3 = *((_QWORD *)this + 2);
  v4 = *((_QWORD *)this + 3);
  v5 = 0LL;
  v82 = a3;
  if ( *((_BYTE *)a2 + 32) )
  {
    v5 = v3 + 280;
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_3;
        }
        v5 = (__int64)&Flink[-14];
      }
    }
  }
LABEL_3:
  v9 = *(_OWORD *)(v3 + 140);
  *(_BYTE *)(v3 + 92) &= ~0x20u;
  v10 = *(_QWORD *)(v3 + 156);
  *(_BYTE *)(v5 + 224) &= ~1u;
  *a3 = 1;
  v11 = *(float *)(v3 + 200);
  v90 = v10;
  v81.x = v11;
  v89 = v9;
  if ( v11 != NAN )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((char *)this + 112, &v81);
  v12 = 1LL;
  v13 = *((float *)&v89 + 2);
  v14 = *(float *)&v89;
  v15 = *((float *)&v90 + 1) <= *(float *)&v90;
  if ( *((float *)&v89 + 2) <= *(float *)&v89 )
    ++v15;
  v16 = *((float *)&v89 + 3);
  v17 = *((float *)&v89 + 1);
  if ( *((float *)&v89 + 3) <= *((float *)&v89 + 1) )
    ++v15;
  if ( v15 <= 1
    && (*(_BYTE *)(v3 + 93) & 2) == 0
    && (*(_DWORD *)(v3 + 100) || !CVisual::GetTransform3DEffectNoRef((CVisual *)v3)) )
  {
    v84 = 0;
    v88 = 0;
    v18 = *(_DWORD *)(v3 + 100) == 1;
    v19 = v4 && *(_DWORD *)(v4 + 100) == 1;
    v20 = 1;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v3 + 208) + 4LL) & 0x8000000) == 0
        || ((EffectInternal = CVisual::GetEffectInternal((CVisual *)v3),
             v53 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL),
             (char *)v53 != (char *)CEffectGroup::IsOfType)
          ? (v54 = v53(EffectInternal, 49LL))
          : (v54 = CEffectGroup::IsOfType(EffectInternal, 49LL)),
            !v54) )
      {
        v20 = 0;
      }
    }
    if ( !v18 )
      goto LABEL_20;
    if ( v19 )
    {
      if ( !v20 )
      {
LABEL_20:
        v80[0] = 0;
        goto LABEL_21;
      }
    }
    else
    {
      v64 = *(_QWORD *)(v3 + 72);
      if ( (v64 & 2) != 0 )
        v64 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v64) = v64 & 1;
      if ( !(_DWORD)v64 )
        goto LABEL_20;
    }
    v80[0] = 1;
LABEL_21:
    v21 = v87;
    v22 = *((_BYTE *)a2 + 32);
    if ( !*(_QWORD *)(v3 + 232) )
      v21 = 0LL;
    v23 = -2003292412;
    v81 = (struct D2D_POINT_2F)v21;
    if ( v22 )
    {
      v24 = v3 + 280;
    }
    else
    {
      v65 = CVisual::GetTreeDataListHead((CVisual *)v3);
      if ( !v65 )
        goto LABEL_37;
      v66 = v65->Flink;
      if ( v65->Flink == v65 )
        goto LABEL_37;
      while ( 1 )
      {
        v24 = (__int64)&v66[-14];
        if ( (const struct CVisualTree *)v66[2].Flink == a2 )
          break;
        v66 = v66->Flink;
        if ( v66 == v65 )
          goto LABEL_37;
      }
      v22 = *((_BYTE *)a2 + 32);
    }
    if ( !v24 )
      goto LABEL_37;
    v25 = 0;
    TreeData = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)(v3 + 208) + 4LL) & 0x10000000) != 0 )
    {
      v60 = *(_QWORD *)CVisual::GetTransformParentDataInternal((CVisual *)v3);
      if ( (*(_BYTE *)(v24 + 16) & 4) == 0 || *(_QWORD *)(v24 + 216) != *(_QWORD *)(*(_QWORD *)(v3 + 16) + 360LL) )
      {
        v25 = 1;
        TreeData = CVisual::FindTreeData(*(CVisual **)(v60 + 8), a2);
        if ( TreeData )
          goto LABEL_31;
      }
      v22 = *((_BYTE *)a2 + 32);
    }
    if ( v3 != *((_QWORD *)a2 + 3) )
    {
      v27 = *(CVisual **)(v3 + 80);
      if ( v22 )
      {
        TreeData = (struct _LIST_ENTRY *)((char *)v27 + 280);
      }
      else
      {
        v67 = CVisual::GetTreeDataListHead(v27);
        if ( v67 )
        {
          v68 = v67->Flink;
          if ( v67->Flink != v67 )
          {
            while ( (const struct CVisualTree *)v68[2].Flink != a2 )
            {
              v68 = v68->Flink;
              if ( v68 == v67 )
                goto LABEL_30;
            }
            TreeData = v68 - 14;
          }
        }
      }
    }
LABEL_30:
    if ( !TreeData )
    {
LABEL_32:
      if ( *(_QWORD *)(v24 + 120) >= v12 )
        goto LABEL_33;
      updated = CVisual::UpdateWorldTransform(
                  (CVisual *)v3,
                  (CVisual **)a2,
                  (struct CTreeData *)v24,
                  v25,
                  (const struct CTreeData *)TreeData);
      v23 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x63Bu);
      if ( v23 >= 0 )
      {
LABEL_33:
        if ( !*(_QWORD *)(v24 + 120) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x70u);
          v23 = -2003292412;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x5A2u);
          ShapeData = -2003292412;
          goto LABEL_132;
        }
        v28 = v81;
        v29 = *(_DWORD *)(v24 + 104);
        v83[0] = *(_OWORD *)(v24 + 40);
        v84 = v29;
        v30 = *(_OWORD *)(v24 + 72);
        v83[1] = *(_OWORD *)(v24 + 56);
        v83[2] = v30;
        v83[3] = *(_OWORD *)(v24 + 88);
        if ( v81 )
        {
          v55 = *(_QWORD *)(v24 + 112);
          v56 = *(_OWORD *)(v55 + 16);
          *(_OWORD *)*(_QWORD *)&v81 = *(_OWORD *)v55;
          v57 = *(_OWORD *)(v55 + 32);
          *(_OWORD *)(*(_QWORD *)&v28 + 16LL) = v56;
          v58 = *(_OWORD *)(v55 + 48);
          LODWORD(v55) = *(_DWORD *)(v55 + 64);
          *(_OWORD *)(*(_QWORD *)&v28 + 32LL) = v57;
          *(_OWORD *)(*(_QWORD *)&v28 + 48LL) = v58;
          *(_DWORD *)(*(_QWORD *)&v28 + 64LL) = v55;
        }
        v23 = 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x59Bu);
      }
LABEL_37:
      ShapeData = v23;
      if ( v23 >= 0 )
      {
        if ( v3 == *((_QWORD *)a2 + 3) )
        {
LABEL_53:
          v42 = *((float *)this + 22);
          if ( v42 < v14 || v13 <= v42 || (v43 = *((float *)this + 23), v43 < v17) || v16 <= v43 )
          {
            v47 = v80[0];
            v48 = v82;
            goto LABEL_67;
          }
          v44 = *(_QWORD *)(v3 + 208);
          if ( (*(_DWORD *)(v44 + 4) & 0x2000000) == 0 )
            goto LABEL_58;
          v50 = *(_DWORD *)(v44 + 12);
          v51 = (int *)(v44 + 12);
          if ( (v50 & 0x7F000000) != 0x7000000 )
          {
            do
            {
              v51 = (int *)((char *)v51 + (v50 & 0xFFFFFF) + 4);
              v50 = *v51;
            }
            while ( (*v51 & 0x7F000000) != 0x7000000 );
          }
          v81 = *(struct D2D_POINT_2F *)(v51 + 1);
          if ( *(_QWORD *)&v81 && *((_QWORD *)CVisual::GetInteractionInternal((CVisual *)v3) + 38) )
            v45 = 1;
          else
LABEL_58:
            v45 = 0;
          *(_BYTE *)(v3 + 92) |= 0x20u;
          v46 = *(CGeometry **)(v3 + 232);
          if ( !v46 )
          {
            if ( v45
              && *((_BYTE *)this + 177)
              && CHitTestContext::GetPointInLocalSpace(this, (const struct CMILMatrix *)v83, &v81) )
            {
              InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
              CInteraction::PushHoverPointer(InteractionInternal, &v81);
            }
            goto LABEL_61;
          }
          *(_QWORD *)&v89 = 0LL;
          BYTE8(v89) = 0;
          ShapeData = CGeometry::GetShapeData(v46, (const struct D2D_SIZE_F *)(v3 + 132), (struct CShapePtr *)&v89);
          if ( ShapeData < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeData, 0x80u);
          }
          else
          {
            if ( !(_QWORD)v89 || !CHitTestContext::GetPointInLocalSpace(this, (const struct CMILMatrix *)v87, &v81) )
            {
LABEL_83:
              CShapePtr::Release((CShapePtr *)&v89);
LABEL_61:
              v47 = v80[0];
              if ( !v80[0] )
              {
                v48 = v82;
LABEL_63:
                *v48 = (*(_BYTE *)(v3 + 92) & 0x20) != 0;
                return (unsigned int)ShapeData;
              }
              if ( CVisual::HasBspPolygonList((CVisual *)v3) && (*(_BYTE *)(v3 + 92) & 0x20) != 0 )
              {
                v88 = 0;
                v80[1] = 0;
                CVisual::CalcEffectiveTransform(v3, (const struct D2D_SIZE_F *)5, 0LL, &v80[1], (CMILMatrix *)v87, 0LL);
                CMatrixStack::Push((CHitTestContext *)((char *)this + 144), (const struct CMILMatrix *)v87, 0LL, v76);
                *(_BYTE *)(v5 + 224) |= 1u;
                BspPolygonListCount = CVisual::GetBspPolygonListCount((CVisual *)v3);
                if ( BspPolygonListCount )
                {
                  while ( !*((_QWORD *)this + 13) )
                  {
                    --BspPolygonListCount;
                    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList(v3);
                    ShapeData = CHitTestContext::BspHitTest(
                                  this,
                                  (const struct CMILMatrix *)v83,
                                  *(struct CPolygon **)(*BspPolygonList + 8LL * BspPolygonListCount));
                    if ( ShapeData < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeData, 0xAEu);
                      return (unsigned int)ShapeData;
                    }
                    if ( !BspPolygonListCount )
                      break;
                  }
                }
              }
              v48 = v82;
              *v82 = 0;
LABEL_67:
              if ( v47 )
                return (unsigned int)ShapeData;
              goto LABEL_63;
            }
            ShapeData = CShapePtr::FillContainsPoint((CShapePtr *)&v89, &v81, &v80[1]);
            if ( ShapeData >= 0 )
            {
              *(_BYTE *)(v3 + 92) ^= (*(_BYTE *)(v3 + 92) ^ (32 * v80[1])) & 0x20;
              if ( (*(_BYTE *)(v3 + 92) & 0x20) != 0 && v45 && *((_BYTE *)this + 177) )
              {
                v75 = CVisual::GetInteractionInternal((CVisual *)v3);
                CInteraction::PushHoverPointer(v75, &v81);
              }
              goto LABEL_83;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeData, 0x88u);
          }
          CShapePtr::Release((CShapePtr *)&v89);
          return (unsigned int)ShapeData;
        }
        v32 = *((_BYTE *)a2 + 32);
        v23 = -2003292412;
        v33 = *(_QWORD *)(v3 + 80);
        v86 = 0;
        if ( v32 )
        {
          v34 = (struct _LIST_ENTRY *)(v33 + 280);
        }
        else
        {
          v70 = CVisual::GetTreeDataListHead((CVisual *)v33);
          if ( !v70 )
            goto LABEL_51;
          v71 = v70->Flink;
          if ( v70->Flink == v70 )
            goto LABEL_51;
          while ( 1 )
          {
            v34 = v71 - 14;
            if ( (const struct CVisualTree *)v71[2].Flink == a2 )
              break;
            v71 = v71->Flink;
            if ( v71 == v70 )
              goto LABEL_51;
          }
          v32 = *((_BYTE *)a2 + 32);
        }
        if ( !v34 )
          goto LABEL_51;
        v35 = 0;
        v36 = 0LL;
        if ( (*(_DWORD *)(*(_QWORD *)(v33 + 208) + 4LL) & 0x10000000) != 0 )
        {
          v61 = *(_QWORD *)CVisual::GetTransformParentDataInternal((CVisual *)v33);
          if ( ((__int64)v34[1].Flink & 4) == 0
            || v34[13].Blink != *(struct _LIST_ENTRY **)(*(_QWORD *)(v33 + 16) + 360LL) )
          {
            v35 = 1;
            v36 = CVisual::FindTreeData(*(CVisual **)(v61 + 8), a2);
            if ( v36 )
              goto LABEL_47;
          }
          v32 = *((_BYTE *)a2 + 32);
        }
        if ( v33 != *((_QWORD *)a2 + 3) )
        {
          if ( v32 )
          {
            v36 = (struct _LIST_ENTRY *)(*(_QWORD *)(v33 + 80) + 280LL);
          }
          else
          {
            v72 = CVisual::GetTreeDataListHead(*(CVisual **)(v33 + 80));
            if ( v72 )
            {
              v73 = v72->Flink;
              if ( v72->Flink != v72 )
              {
                while ( (const struct CVisualTree *)v73[2].Flink != a2 )
                {
                  v73 = v73->Flink;
                  if ( v73 == v72 )
                    goto LABEL_46;
                }
                v36 = v73 - 14;
              }
            }
          }
        }
LABEL_46:
        if ( !v36 )
        {
          Blink = 1LL;
          goto LABEL_48;
        }
LABEL_47:
        Blink = (unsigned __int64)v36[7].Blink;
LABEL_48:
        if ( v34[7].Blink >= (struct _LIST_ENTRY *)Blink )
          goto LABEL_49;
        v74 = CVisual::UpdateWorldTransform(
                (CVisual *)v33,
                (CVisual **)a2,
                (struct CTreeData *)v34,
                v35,
                (const struct CTreeData *)v36);
        v23 = v74;
        if ( v74 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v74, 0x63Bu);
        if ( v23 >= 0 )
        {
LABEL_49:
          if ( !v34[7].Blink )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x70u);
            v23 = -2003292412;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x5A2u);
            ShapeData = -2003292412;
LABEL_153:
            v79 = 107;
            goto LABEL_133;
          }
          v38 = *(_OWORD *)&v34[2].Blink;
          v23 = 0;
          v39 = *(_OWORD *)&v34[3].Blink;
          v86 = (int)v34[6].Blink;
          v85[0] = v38;
          v40 = *(_OWORD *)&v34[4].Blink;
          v85[1] = v39;
          v41 = *(_OWORD *)&v34[5].Blink;
          v85[2] = v40;
          v85[3] = v41;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x59Bu);
        }
LABEL_51:
        ShapeData = v23;
        if ( v23 >= 0 )
        {
          CMILMatrix::Transform3DBoundsHelper<1>((__int64)v85, (__int64)&v89, (int *)&v89);
          v16 = *((float *)&v89 + 3);
          v13 = *((float *)&v89 + 2);
          v17 = *((float *)&v89 + 1);
          v14 = *(float *)&v89;
          goto LABEL_53;
        }
        goto LABEL_153;
      }
LABEL_132:
      v79 = 99;
LABEL_133:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, v79);
      return (unsigned int)ShapeData;
    }
LABEL_31:
    v12 = (unsigned __int64)TreeData[7].Blink;
    goto LABEL_32;
  }
  *a3 = 0;
  return 0LL;
}
