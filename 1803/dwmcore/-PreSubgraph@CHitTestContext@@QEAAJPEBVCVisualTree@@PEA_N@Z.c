/*
 * XREFs of ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800266D0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000B418 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z @ 0x18000B768 (-PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18002813C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18004D7D0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004FC80 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F390 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800BE8E8 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800C1C60 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18013C65C (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18013CB04 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801A785C (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801D93B0 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rbx
  bool *v4; // r10
  __int64 v5; // r13
  const struct CVisualTree *v6; // r15
  struct _LIST_ENTRY *v8; // r14
  __int128 v9; // xmm0
  __int64 v10; // r8
  __int64 v11; // xmm1_8
  int v12; // esi
  __int64 v13; // rcx
  unsigned int v14; // eax
  void *v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int ShapeData; // esi
  unsigned __int64 v19; // r12
  float v20; // xmm9_4
  float v21; // xmm8_4
  unsigned int v22; // eax
  float v23; // xmm7_4
  float v24; // xmm6_4
  bool v25; // r13
  bool v26; // al
  struct _LIST_ENTRY *v27; // rax
  int v28; // r13d
  struct _LIST_ENTRY *v29; // rsi
  __int64 v30; // rax
  struct CTreeData *TreeData; // r10
  __int64 v32; // rax
  CVisual *v33; // rcx
  struct _LIST_ENTRY *v34; // rcx
  int Blink; // eax
  __int128 v36; // xmm0
  bool v37; // zf
  int v38; // r12d
  struct D2D_POINT_2F v39; // rcx
  struct _LIST_ENTRY *v40; // rsi
  struct CTreeData *v41; // r13
  struct _LIST_ENTRY *v42; // r12
  __int64 v43; // rax
  char v44; // r12
  unsigned __int64 v45; // rax
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  float v50; // xmm0_4
  float v51; // xmm0_4
  __int64 v52; // rax
  char v53; // r12
  CGeometry *v54; // rcx
  bool v55; // r15
  bool *v56; // rcx
  struct CEffect *EffectInternal; // rcx
  __int64 (__fastcall *v59)(struct CEffect *, __int64); // rax
  char v60; // al
  struct _LIST_ENTRY *v61; // rax
  struct _LIST_ENTRY v62; // xmm1
  struct _LIST_ENTRY v63; // xmm0
  struct _LIST_ENTRY v64; // xmm1
  char v65; // cl
  int v66; // edx
  int *v67; // rcx
  CInteraction *v68; // rax
  int v69; // edx
  int *v70; // rcx
  CVisual *v71; // rax
  int v72; // r8d
  int *v73; // rdx
  CVisual *v74; // rax
  struct CTreeData *v75; // rax
  int updated; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v79; // rcx
  SIZE_T v80; // r8
  int v81; // eax
  unsigned __int64 v82; // rax
  unsigned int v83; // ecx
  __int64 v84; // rax
  struct _LIST_ENTRY *v85; // rax
  struct _LIST_ENTRY *v86; // rcx
  struct _LIST_ENTRY *v87; // rax
  struct _LIST_ENTRY *v88; // rcx
  struct _LIST_ENTRY *v89; // rax
  struct _LIST_ENTRY *v90; // rcx
  struct _LIST_ENTRY *v91; // rax
  struct _LIST_ENTRY *v92; // rcx
  int v93; // eax
  CInteraction *InteractionInternal; // rax
  _QWORD *BspPolygonList; // rax
  bool v96[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_POINT_2F v97; // [rsp+40h] [rbp-C8h] BYREF
  bool *v98; // [rsp+48h] [rbp-C0h]
  struct _LIST_ENTRY *v99; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v100; // [rsp+58h] [rbp-B0h]
  _QWORD *v101; // [rsp+60h] [rbp-A8h]
  struct _LIST_ENTRY *v102; // [rsp+68h] [rbp-A0h]
  _OWORD v103[4]; // [rsp+78h] [rbp-90h] BYREF
  int v104; // [rsp+B8h] [rbp-50h]
  _OWORD v105[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v106; // [rsp+108h] [rbp+0h]
  _BYTE v107[64]; // [rsp+118h] [rbp+10h] BYREF
  int v108; // [rsp+158h] [rbp+50h]
  __int128 v109; // [rsp+168h] [rbp+60h]
  __int64 v110; // [rsp+178h] [rbp+70h]

  v3 = *((_QWORD *)this + 2);
  v4 = a3;
  v5 = *((_QWORD *)this + 3);
  v6 = a2;
  v98 = a3;
  v8 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    v8 = (struct _LIST_ENTRY *)(v3 + 288);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( (const struct CVisualTree *)Flink[2].Flink != v6 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_3;
        }
        v8 = Flink - 14;
      }
    }
  }
LABEL_3:
  v9 = *(_OWORD *)(v3 + 140);
  v10 = 0xFFFFFFFFLL;
  *(_BYTE *)(v3 + 92) &= ~0x80u;
  v11 = *(_QWORD *)(v3 + 156);
  LOBYTE(v8[14].Flink) &= ~1u;
  *v4 = 1;
  v12 = *(_DWORD *)(v3 + 200);
  v110 = v11;
  v109 = v9;
  if ( v12 != -1 )
  {
    v13 = *((unsigned int *)this + 31);
    a2 = 0LL;
    v14 = *((_DWORD *)this + 30);
    v15 = 0LL;
    if ( v14 != (_DWORD)v13 )
    {
LABEL_5:
      *(_DWORD *)(*((_QWORD *)this + 17) + 4LL * v14) = v12;
      v16 = *((_DWORD *)this + 36);
      v17 = *((_DWORD *)this + 30) + 1;
      *((_DWORD *)this + 30) = v17;
      if ( v16 <= v17 )
        v16 = v17;
      *((_DWORD *)this + 36) = v16;
      goto LABEL_8;
    }
    if ( (unsigned __int64)(2 * v13) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_138:
      v4 = v98;
      goto LABEL_8;
    }
    v79 = (unsigned int)(2 * v13);
    if ( (unsigned int)v79 <= 0x40 )
      v79 = 64LL;
    LODWORD(v97.x) = v79;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v79 <= 4 )
    {
      v81 = -2147024809;
    }
    else
    {
      v80 = 4 * v79;
      if ( !(4 * v79) )
        v80 = 1LL;
      v15 = HeapAlloc(WPF::g_processHeap, 0, v80);
      if ( v15 )
      {
        v82 = 4LL * *((unsigned int *)this + 30);
        if ( v82 <= 0xFFFFFFFF )
        {
          memcpy_0(v15, *((const void **)this + 17), (unsigned int)v82);
          operator delete(*((void **)this + 17));
          v4 = v98;
          *((_DWORD *)this + 31) = LODWORD(v97.x);
          v14 = *((_DWORD *)this + 30);
          *((_QWORD *)this + 17) = v15;
          goto LABEL_5;
        }
        v83 = 86;
        v81 = -2147024362;
        goto LABEL_136;
      }
      v81 = -2147024882;
    }
    v83 = 84;
LABEL_136:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, v83);
    if ( v15 )
      HeapFree(WPF::g_processHeap, 0, v15);
    goto LABEL_138;
  }
LABEL_8:
  ShapeData = 0;
  v19 = 1LL;
  v20 = *((float *)&v109 + 2);
  v21 = *(float *)&v109;
  v22 = *((float *)&v110 + 1) <= *(float *)&v110;
  if ( *((float *)&v109 + 2) <= *(float *)&v109 )
    ++v22;
  v23 = *((float *)&v109 + 3);
  v24 = *((float *)&v109 + 1);
  if ( *((float *)&v109 + 3) <= *((float *)&v109 + 1) )
    ++v22;
  if ( v22 > 1 || (*(_BYTE *)(v3 + 93) & 0x20) != 0 )
    goto LABEL_72;
  if ( !*(_DWORD *)(v3 + 100) && CVisual::GetTransform3DEffectNoRef((CVisual *)v3) )
  {
    v4 = v98;
LABEL_72:
    *v4 = 0;
    return ShapeData;
  }
  v104 = 0;
  v108 = 0;
  if ( *(_DWORD *)(v3 + 100) == 1 )
    LOBYTE(ShapeData) = 1;
  v25 = v5 && *(_DWORD *)(v5 + 100) == 1;
  v26 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, const struct CVisualTree *, __int64))(*(_QWORD *)v3 + 176LL))(
          v3,
          a2,
          v10) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v3 + 216) + 4LL) & 0x8000000) == 0
      || ((EffectInternal = CVisual::GetEffectInternal((CVisual *)v3),
           v59 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL),
           (char *)v59 != (char *)CEffectGroup::IsOfType)
        ? (v60 = v59(EffectInternal, 55LL))
        : (v60 = CEffectGroup::IsOfType(EffectInternal, 55LL)),
          !v60) )
    {
      v26 = 0;
    }
  }
  if ( !(_BYTE)ShapeData )
    goto LABEL_25;
  if ( v25 )
  {
    if ( !v26 )
    {
LABEL_25:
      v96[0] = 0;
      goto LABEL_26;
    }
  }
  else
  {
    v84 = *(_QWORD *)(v3 + 72);
    if ( (v84 & 2) != 0 )
      v84 = *(_QWORD *)(v84 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v84) = v84 & 1;
    if ( !(_DWORD)v84 )
      goto LABEL_25;
  }
  v96[0] = 1;
LABEL_26:
  v27 = (struct _LIST_ENTRY *)v107;
  v28 = -2003292412;
  if ( !*(_QWORD *)(v3 + 240) )
    v27 = 0LL;
  v99 = v27;
  if ( *((_BYTE *)v6 + 32) )
  {
    v29 = (struct _LIST_ENTRY *)(v3 + 288);
  }
  else
  {
    v85 = CVisual::GetTreeDataListHead((CVisual *)v3);
    if ( !v85 )
      goto LABEL_43;
    v86 = v85->Flink;
    if ( v85->Flink == v85 )
      goto LABEL_43;
    while ( 1 )
    {
      v29 = v86 - 14;
      if ( (const struct CVisualTree *)v86[2].Flink == v6 )
        break;
      v86 = v86->Flink;
      if ( v86 == v85 )
        goto LABEL_43;
    }
  }
  if ( !v29 )
    goto LABEL_43;
  v30 = *(_QWORD *)(v3 + 16);
  v28 = 0;
  TreeData = 0LL;
  v97 = 0LL;
  v96[1] = 0;
  v102 = *(struct _LIST_ENTRY **)(v30 + 384);
  v32 = *(_QWORD *)(v3 + 216);
  if ( (*(_DWORD *)(v32 + 4) & 0x10000000) != 0 )
  {
    v69 = *(_DWORD *)(v32 + 12);
    v70 = (int *)(v32 + 12);
    if ( (v69 & 0x7F000000) != 0x4000000 )
    {
      do
      {
        v70 = (int *)((char *)v70 + (v69 & 0xFFFFFF) + 4);
        v69 = *v70;
      }
      while ( (*v70 & 0x7F000000) != 0x4000000 );
    }
    v101 = *(_QWORD **)(v70 + 1);
    if ( v101 )
    {
      v71 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v101 + 152LL))(*v101);
      if ( !v71 || ((__int64)v29[1].Flink & 4) != 0 && v29[13].Blink == v102 )
      {
        TreeData = (struct CTreeData *)v97;
      }
      else
      {
        v96[1] = 1;
        TreeData = CVisual::FindTreeData(v71, v6);
        if ( TreeData )
        {
LABEL_36:
          v19 = *((_QWORD *)TreeData + 15);
          goto LABEL_37;
        }
      }
    }
  }
  if ( v3 != *((_QWORD *)v6 + 3) )
  {
    v33 = *(CVisual **)(v3 + 80);
    if ( *((_BYTE *)v6 + 32) )
    {
      TreeData = (CVisual *)((char *)v33 + 288);
    }
    else
    {
      v87 = CVisual::GetTreeDataListHead(v33);
      if ( v87 )
      {
        v88 = v87->Flink;
        if ( v87->Flink != v87 )
        {
          while ( (const struct CVisualTree *)v88[2].Flink != v6 )
          {
            v88 = v88->Flink;
            if ( v88 == v87 )
              goto LABEL_35;
          }
          TreeData = (struct CTreeData *)&v88[-14];
        }
      }
    }
  }
LABEL_35:
  if ( TreeData )
    goto LABEL_36;
LABEL_37:
  if ( v29[7].Blink < (struct _LIST_ENTRY *)v19 )
  {
    updated = CVisual::UpdateWorldTransform(
                (CComposition **)v3,
                (CVisual **)v6,
                (struct CTreeData *)v29,
                v96[1],
                TreeData);
    v28 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x6ADu);
  }
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x616u);
  }
  else
  {
    if ( !v29[7].Blink )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x70u);
      v28 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x61Du);
      ShapeData = -2003292412;
      goto LABEL_166;
    }
    v34 = v99;
    Blink = (int)v29[6].Blink;
    v103[0] = *(struct _LIST_ENTRY *)((char *)v29 + 40);
    v104 = Blink;
    v36 = *(_OWORD *)&v29[4].Blink;
    v103[1] = *(struct _LIST_ENTRY *)((char *)v29 + 56);
    v103[2] = v36;
    v103[3] = *(struct _LIST_ENTRY *)((char *)v29 + 88);
    if ( v99 )
    {
      v61 = v29[7].Flink;
      v62 = v61[1];
      *v99 = *v61;
      v63 = v61[2];
      v34[1] = v62;
      v64 = v61[3];
      LODWORD(v61) = v61[4].Flink;
      v34[2] = v63;
      v34[3] = v64;
      LODWORD(v34[4].Flink) = (_DWORD)v61;
    }
    v28 = 0;
  }
LABEL_43:
  ShapeData = v28;
  if ( v28 < 0 )
  {
LABEL_166:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x63u);
    return ShapeData;
  }
  if ( v3 != *((_QWORD *)v6 + 3) )
  {
    v37 = *((_BYTE *)v6 + 32) == 0;
    v38 = -2003292412;
    v39 = *(struct D2D_POINT_2F *)(v3 + 80);
    v97 = v39;
    v106 = 0;
    if ( v37 )
    {
      v89 = CVisual::GetTreeDataListHead(*(CVisual **)&v39);
      if ( !v89 )
        goto LABEL_58;
      v90 = v89->Flink;
      if ( v89->Flink == v89 )
        goto LABEL_58;
      while ( 1 )
      {
        v40 = v90 - 14;
        if ( (const struct CVisualTree *)v90[2].Flink == v6 )
          break;
        v90 = v90->Flink;
        if ( v90 == v89 )
          goto LABEL_58;
      }
      v39 = v97;
    }
    else
    {
      v40 = (struct _LIST_ENTRY *)(*(_QWORD *)&v39 + 288LL);
    }
    if ( !v40 )
      goto LABEL_58;
    v41 = 0LL;
    v42 = *(struct _LIST_ENTRY **)(*(_QWORD *)(*(_QWORD *)&v39 + 16LL) + 384LL);
    v43 = *(_QWORD *)(*(_QWORD *)&v39 + 216LL);
    if ( (*(_DWORD *)(v43 + 4) & 0x10000000) != 0 )
    {
      v72 = *(_DWORD *)(v43 + 12);
      v73 = (int *)(v43 + 12);
      if ( (v72 & 0x7F000000) != 0x4000000 )
      {
        do
        {
          v73 = (int *)((char *)v73 + (v72 & 0xFFFFFF) + 4);
          v72 = *v73;
        }
        while ( (*v73 & 0x7F000000) != 0x4000000 );
      }
      v99 = *(struct _LIST_ENTRY **)(v73 + 1);
      if ( v99 )
      {
        v74 = (CVisual *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v99->Flink->Flink[9].Blink)(v99->Flink);
        if ( v74 && (((__int64)v40[1].Flink & 4) == 0 || v40[13].Blink != v42) )
        {
          v44 = 1;
          v75 = CVisual::FindTreeData(v74, v6);
          v39 = v97;
          v41 = v75;
          if ( v75 )
            goto LABEL_54;
          goto LABEL_50;
        }
        v39 = v97;
      }
      v44 = 0;
    }
    else
    {
      v44 = 0;
    }
LABEL_50:
    if ( v39 != *((_QWORD *)v6 + 3) )
    {
      v41 = 0LL;
      if ( *((_BYTE *)v6 + 32) )
      {
        v41 = (struct CTreeData *)(*(_QWORD *)(*(_QWORD *)&v39 + 80LL) + 288LL);
      }
      else
      {
        v91 = CVisual::GetTreeDataListHead(*(CVisual **)(*(_QWORD *)&v39 + 80LL));
        if ( v91 )
        {
          v92 = v91->Flink;
          if ( v91->Flink != v91 )
          {
            while ( (const struct CVisualTree *)v92[2].Flink != v6 )
            {
              v92 = v92->Flink;
              if ( v92 == v91 )
                goto LABEL_184;
            }
            v41 = (struct CTreeData *)&v92[-14];
          }
        }
LABEL_184:
        v39 = v97;
      }
    }
    if ( !v41 )
    {
      v45 = 1LL;
      goto LABEL_55;
    }
LABEL_54:
    v45 = *((_QWORD *)v41 + 15);
LABEL_55:
    if ( v40[7].Blink >= (struct _LIST_ENTRY *)v45 )
      goto LABEL_56;
    v93 = CVisual::UpdateWorldTransform(*(CComposition ***)&v39, (CVisual **)v6, (struct CTreeData *)v40, v44, v41);
    v38 = v93;
    if ( v93 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, 0x6ADu);
    if ( v38 >= 0 )
    {
LABEL_56:
      if ( !v40[7].Blink )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x70u);
        v38 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x61Du);
        ShapeData = -2003292412;
        goto LABEL_190;
      }
      v46 = *(_OWORD *)&v40[2].Blink;
      v38 = 0;
      v47 = *(_OWORD *)&v40[3].Blink;
      v106 = (int)v40[6].Blink;
      v105[0] = v46;
      v48 = *(_OWORD *)&v40[4].Blink;
      v105[1] = v47;
      v49 = *(_OWORD *)&v40[5].Blink;
      v105[2] = v48;
      v105[3] = v49;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x616u);
    }
LABEL_58:
    ShapeData = v38;
    if ( v38 >= 0 )
    {
      CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v105);
      v23 = *((float *)&v109 + 3);
      v20 = *((float *)&v109 + 2);
      v24 = *((float *)&v109 + 1);
      v21 = *(float *)&v109;
      goto LABEL_60;
    }
LABEL_190:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x6Bu);
    return ShapeData;
  }
LABEL_60:
  v50 = *((float *)this + 22);
  if ( v50 < v21 || v20 <= v50 || (v51 = *((float *)this + 23), v51 < v24) || v23 <= v51 )
  {
    v55 = v96[0];
    v56 = v98;
    goto LABEL_74;
  }
  v52 = *(_QWORD *)(v3 + 216);
  if ( (*(_DWORD *)(v52 + 4) & 0x2000000) == 0 )
    goto LABEL_65;
  v66 = *(_DWORD *)(v52 + 12);
  v67 = (int *)(v52 + 12);
  if ( (v66 & 0x7F000000) != 0x7000000 )
  {
    do
    {
      v67 = (int *)((char *)v67 + (v66 & 0xFFFFFF) + 4);
      v66 = *v67;
    }
    while ( (*v67 & 0x7F000000) != 0x7000000 );
  }
  v99 = *(struct _LIST_ENTRY **)(v67 + 1);
  if ( v99 && *((_QWORD *)CVisual::GetInteractionInternal((CVisual *)v3) + 34) )
    v53 = 1;
  else
LABEL_65:
    v53 = 0;
  *(_BYTE *)(v3 + 92) |= 0x80u;
  v54 = *(CGeometry **)(v3 + 240);
  if ( v54 )
  {
    v99 = 0LL;
    LOBYTE(v100) = 0;
    ShapeData = CGeometry::GetShapeData(v54, (const struct D2D_SIZE_F *)(v3 + 132), (struct CShapePtr *)&v99);
    if ( (ShapeData & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x80u);
    }
    else
    {
      if ( !v99
        || !CHitTestContext::GetPointInLocalSpace(
              (const struct D2D_POINT_2F *)this + 11,
              (const struct CMILMatrix *)v107,
              &v97) )
      {
LABEL_86:
        CShapePtr::Release((CShapePtr *)&v99);
        goto LABEL_68;
      }
      ShapeData = CShapePtr::FillContainsPoint((CShapePtr *)&v99, &v97, &v96[1]);
      if ( (ShapeData & 0x80000000) == 0 )
      {
        v65 = (v96[1] << 7) | *(_BYTE *)(v3 + 92) & 0x7F;
        *(_BYTE *)(v3 + 92) = v65;
        if ( v65 < 0 && v53 && *((_BYTE *)this + 185) )
        {
          InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
          CInteraction::PushHoverPointer(InteractionInternal, &v97);
        }
        goto LABEL_86;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x88u);
    }
    CShapePtr::Release((CShapePtr *)&v99);
    return ShapeData;
  }
  if ( v53
    && *((_BYTE *)this + 185)
    && CHitTestContext::GetPointInLocalSpace(
         (const struct D2D_POINT_2F *)this + 11,
         (const struct CMILMatrix *)v103,
         &v97) )
  {
    v68 = CVisual::GetInteractionInternal((CVisual *)v3);
    CInteraction::PushHoverPointer(v68, &v97);
  }
LABEL_68:
  v55 = v96[0];
  if ( v96[0] )
  {
    if ( CVisual::HasBspPolygonList((CVisual *)v3) && *(char *)(v3 + 92) < 0 )
    {
      v108 = 0;
      v96[1] = 0;
      CVisual::CalcEffectiveTransform(v3, 5LL, 0LL, &v96[1], v107, 0LL);
      CMatrixStack::Push((CHitTestContext *)((char *)this + 152), (const struct CMILMatrix *)v107, 0);
      LOBYTE(v8[14].Flink) |= 1u;
      LODWORD(v8) = CVisual::GetBspPolygonListCount((CVisual *)v3);
      if ( (_DWORD)v8 )
      {
        while ( !*((_QWORD *)this + 14) )
        {
          v8 = (struct _LIST_ENTRY *)(unsigned int)((_DWORD)v8 - 1);
          BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList(v3);
          ShapeData = CHitTestContext::BspHitTest(
                        this,
                        (const struct CMILMatrix *)v103,
                        *(struct CPolygon **)(*BspPolygonList + 8LL * (_QWORD)v8));
          if ( (ShapeData & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0xAEu);
            return ShapeData;
          }
          if ( !(_DWORD)v8 )
            break;
        }
      }
    }
    v56 = v98;
    *v98 = 0;
LABEL_74:
    if ( v55 )
      return ShapeData;
    goto LABEL_70;
  }
  v56 = v98;
LABEL_70:
  *v56 = *(_BYTE *)(v3 + 92) >> 7;
  return ShapeData;
}
