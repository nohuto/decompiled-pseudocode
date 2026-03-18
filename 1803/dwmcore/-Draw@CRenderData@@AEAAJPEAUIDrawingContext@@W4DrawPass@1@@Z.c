/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180057310
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004A730 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057100 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180057130 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800702C8 (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180055DF8 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x1800566A8 (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180056940 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180056EE4 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180066CE0 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18006B3F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18006C5E0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006D0EC (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180088410 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x180088430 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800C181C (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C1988 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800C2BA0 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C2FFC (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::Draw(_QWORD *a1, __int64 a2, int a3)
{
  CDrawingContext *v3; // r15
  struct _LIST_ENTRY *v4; // rdi
  __int64 v5; // rax
  int v7; // r12d
  struct CDrawListCache *v8; // r14
  CDataStreamBlock *p_Blink; // rsi
  unsigned int v10; // r11d
  struct _LIST_ENTRY *v11; // rax
  unsigned int *v12; // r15
  int v13; // ebx
  struct _LIST_ENTRY *v14; // rdx
  CRenderData *v15; // rcx
  unsigned int v16; // r12d
  __int128 v17; // xmm6
  unsigned int i; // edi
  __int64 v19; // rcx
  CMILRefCountBase *v20; // rcx
  __int64 v21; // rcx
  Mesh::MeshGraph *v22; // rcx
  __int64 v23; // rcx
  struct _LIST_ENTRY *v25; // rcx
  __int64 v26; // r10
  struct _LIST_ENTRY *v27; // rbx
  char v28; // al
  __int64 (*v29)(void); // rax
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // rax
  int v33; // eax
  CDrawingContext *v34; // rsi
  unsigned int v35; // edi
  __int64 v36; // rcx
  unsigned int *(__fastcall *v37)(CDataStreamBlock *__hidden); // rax
  unsigned int *WrittenSize; // rax
  unsigned int *v39; // rbx
  const void *(__fastcall *v40)(CDataStreamBlock *__hidden); // rax
  unsigned int *Data; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
  int DrawListCacheForCommandRun; // eax
  CRenderData *v45; // rax
  struct CTransform *v46; // rdx
  __int64 (__fastcall *v47)(CDrawingContext *__hidden, struct CTransform *); // rax
  int v48; // eax
  __int64 (*v49)(void); // rax
  int v50; // eax
  CMILRefCountBase *v51; // rcx
  int v52; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v54; // r10
  struct _LIST_ENTRY *Flink; // rcx
  int v56; // eax
  struct _LIST_ENTRY **v57; // rcx
  struct _LIST_ENTRY *v58; // rax
  int NextItemSafe; // eax
  int v60; // r9d
  int v61; // eax
  unsigned int v62; // [rsp+20h] [rbp-E0h]
  char v63; // [rsp+40h] [rbp-C0h]
  int v64; // [rsp+44h] [rbp-BCh]
  bool v65; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v66; // [rsp+4Ch] [rbp-B4h] BYREF
  CDrawingContext *v67; // [rsp+50h] [rbp-B0h]
  unsigned int v68; // [rsp+58h] [rbp-A8h] BYREF
  int v69; // [rsp+5Ch] [rbp-A4h]
  struct CDrawListCache *v70; // [rsp+60h] [rbp-A0h] BYREF
  struct CDrawingContext *v71; // [rsp+68h] [rbp-98h]
  CRenderData *v72; // [rsp+70h] [rbp-90h] BYREF
  struct CTreeData *v73; // [rsp+78h] [rbp-88h]
  CRenderData *v74; // [rsp+80h] [rbp-80h]
  struct _LIST_ENTRY *v75; // [rsp+88h] [rbp-78h] BYREF
  CDataStreamBlock *v76; // [rsp+90h] [rbp-70h]
  unsigned int *v77; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v78; // [rsp+A0h] [rbp-60h]
  unsigned int v79; // [rsp+A8h] [rbp-58h]
  __int128 v80; // [rsp+B0h] [rbp-50h]
  __int128 v81; // [rsp+C0h] [rbp-40h]
  __int128 v82; // [rsp+D0h] [rbp-30h]
  __int128 v83; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v84; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v85[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v86; // [rsp+120h] [rbp+20h]
  void *v87; // [rsp+128h] [rbp+28h]
  _BYTE *v88; // [rsp+130h] [rbp+30h]
  int v89; // [rsp+138h] [rbp+38h]
  __int64 v90; // [rsp+13Ch] [rbp+3Ch]
  _BYTE v91[32]; // [rsp+148h] [rbp+48h] BYREF
  int v92; // [rsp+168h] [rbp+68h]
  void *v93; // [rsp+170h] [rbp+70h]
  _BYTE *v94; // [rsp+178h] [rbp+78h]
  int v95; // [rsp+180h] [rbp+80h]
  __int64 v96; // [rsp+184h] [rbp+84h]
  _BYTE v97[112]; // [rsp+190h] [rbp+90h] BYREF
  void *lpMem[2]; // [rsp+200h] [rbp+100h]
  __int64 v99; // [rsp+210h] [rbp+110h]
  int v100; // [rsp+218h] [rbp+118h]
  Mesh::MeshGraph *v101; // [rsp+220h] [rbp+120h]
  __int64 v102; // [rsp+228h] [rbp+128h]
  Mesh::MeshGraph *v103; // [rsp+230h] [rbp+130h]
  __int64 v104; // [rsp+240h] [rbp+140h]
  int v105; // [rsp+248h] [rbp+148h]
  char v106; // [rsp+25Ch] [rbp+15Ch]
  __int64 v107; // [rsp+260h] [rbp+160h]
  void *v108; // [rsp+268h] [rbp+168h]
  _BYTE *v109; // [rsp+270h] [rbp+170h]
  int v110; // [rsp+278h] [rbp+178h]
  __int64 v111; // [rsp+27Ch] [rbp+17Ch]
  _BYTE v112[960]; // [rsp+288h] [rbp+188h] BYREF
  void *v113; // [rsp+648h] [rbp+548h]
  _BYTE *v114; // [rsp+650h] [rbp+550h]
  int v115; // [rsp+658h] [rbp+558h]
  __int64 v116; // [rsp+65Ch] [rbp+55Ch]
  _BYTE v117[960]; // [rsp+668h] [rbp+568h] BYREF
  int v118; // [rsp+A28h] [rbp+928h]
  void *v119; // [rsp+A30h] [rbp+930h]
  _BYTE *v120; // [rsp+A38h] [rbp+938h]
  int v121; // [rsp+A40h] [rbp+940h]
  __int64 v122; // [rsp+A44h] [rbp+944h]
  _BYTE v123[64]; // [rsp+A50h] [rbp+950h] BYREF
  __int64 v124; // [rsp+A90h] [rbp+990h]
  CMILRefCountBase *v125; // [rsp+A98h] [rbp+998h]
  __int16 v126; // [rsp+AA0h] [rbp+9A0h]

  v74 = (CRenderData *)a1;
  v67 = (CDrawingContext *)a2;
  memset(v85, 0, sizeof(v85));
  v3 = (CDrawingContext *)a2;
  v4 = (struct _LIST_ENTRY *)(a1 + 7);
  v5 = a1[9];
  v87 = v91;
  v88 = v91;
  v93 = v97;
  v94 = v97;
  v108 = v112;
  v109 = v112;
  v113 = v117;
  v114 = v117;
  v119 = v123;
  v120 = v123;
  v86 = 0LL;
  v7 = 0;
  v89 = 4;
  v8 = 0LL;
  v90 = 4LL;
  v92 = 0;
  v95 = 2;
  v96 = 2LL;
  *(_OWORD *)lpMem = 0LL;
  v99 = 0LL;
  v101 = 0LL;
  v103 = 0LL;
  v102 = 0LL;
  v100 = 0;
  v104 = 0LL;
  v105 = 0;
  v106 = 5;
  v107 = 0LL;
  v110 = 960;
  v111 = 960LL;
  v115 = 960;
  v116 = 960LL;
  v118 = 0;
  v121 = 30;
  v122 = 30LL;
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0;
  v64 = 0;
  v71 = 0LL;
  v73 = 0LL;
  v70 = 0LL;
  v63 = 0;
  if ( v5 )
  {
    v57 = (struct _LIST_ENTRY **)a1[8];
    v58 = (struct _LIST_ENTRY *)(v5 + 8);
    if ( *v57 != v4 )
      __fastfail(3u);
    v58->Flink = v4;
    v58->Blink = (struct _LIST_ENTRY *)v57;
    *v57 = v58;
    v4->Blink = v58;
    v4[1].Flink = 0LL;
  }
  p_Blink = 0LL;
  v75 = v4;
  v10 = 0;
  v76 = 0LL;
  v69 = 0;
  if ( !a3 )
  {
    v25 = 0LL;
    v71 = (struct CDrawingContext *)a2;
    if ( *(_BYTE *)(a2 + 6520) )
    {
      if ( *(_BYTE *)(a2 + 6521) )
        v25 = *(struct _LIST_ENTRY **)(a2 + 3160);
      else
        v25 = *(struct _LIST_ENTRY **)(*(_QWORD *)(a2 + 6528) + 24LL);
    }
    v26 = *(_QWORD *)(a2 + 6528);
    v27 = 0LL;
    v73 = 0LL;
    if ( *(_BYTE *)(v26 + 32) )
    {
      v27 = v25 + 18;
      v73 = (struct CTreeData *)&v25[18];
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v25);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( Flink[2].Flink != v54 )
          {
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_48;
          }
          v27 = Flink - 14;
          v73 = (struct CTreeData *)&Flink[-14];
        }
      }
    }
LABEL_48:
    if ( !v27 )
    {
      v13 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xC6u);
      goto LABEL_12;
    }
  }
  v11 = v4->Flink;
  if ( v4 == v4->Flink )
  {
    v12 = v78;
    v13 = 1;
    LODWORD(v14) = v68;
    v15 = v72;
  }
  else
  {
    if ( v11 )
    {
      p_Blink = (CDataStreamBlock *)&v11[-1].Blink;
      v76 = (CDataStreamBlock *)&v11[-1].Blink;
    }
    else
    {
      p_Blink = 0LL;
      v76 = 0LL;
    }
    v37 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)p_Blink + 8LL);
    if ( v37 == CDataStreamBlock::GetWrittenSize )
      WrittenSize = CDataStreamBlock::GetWrittenSize(p_Blink);
    else
      WrittenSize = v37(p_Blink);
    v39 = WrittenSize;
    v40 = *(const void *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)p_Blink + 16LL);
    if ( v40 == CDataStreamBlock::GetData )
      Data = (unsigned int *)CDataStreamBlock::GetData(p_Blink);
    else
      Data = (unsigned int *)v40(p_Blink);
    v42 = *v39;
    v12 = Data;
    v77 = Data;
    v13 = -2147467259;
    v79 = v42;
    v78 = Data;
    if ( v42 )
    {
      if ( v42 < 8 || (v43 = *Data, (unsigned int)v43 < 8) || (v43 & 3) != 0 || (unsigned int)v43 > v42 )
      {
        LODWORD(v14) = v68;
        v15 = v72;
        v16 = v66;
      }
      else
      {
        v16 = v12[1];
        v15 = (CRenderData *)(v12 + 1);
        LODWORD(v14) = v43 - 4;
        v66 = v16;
        v12 = (unsigned int *)((char *)v12 + v43);
        v78 = v12;
        v13 = 0;
      }
      v10 = 0;
      goto LABEL_6;
    }
    v15 = 0LL;
    LODWORD(v14) = 0;
    v13 = 1;
    v10 = 0;
    if ( *((struct _LIST_ENTRY **)p_Blink + 1) != v4 )
      v13 = -2147467259;
  }
  v16 = v66;
LABEL_6:
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xCEu);
    v7 = 0;
    goto LABEL_11;
  }
  *(_QWORD *)&v80 = (int)v14;
  *((_QWORD *)&v80 + 1) = v15;
  v17 = v80;
  v82 = v80;
  if ( v13 )
    goto LABEL_8;
  do
  {
    if ( v8 || a3 )
    {
      v28 = v63;
    }
    else
    {
      DrawListCacheForCommandRun = CRenderData::GetDrawListCacheForCommandRun(
                                     v74,
                                     (struct IRenderTarget **)v71,
                                     (char **)v73,
                                     v10,
                                     &v70);
      v13 = DrawListCacheForCommandRun;
      if ( DrawListCacheForCommandRun < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListCacheForCommandRun, 0xDFu);
        v8 = v70;
        goto LABEL_10;
      }
      v8 = v70;
      v28 = 0;
      v63 = 0;
    }
    v65 = 0;
    if ( !a3 )
    {
      v83 = v17;
      v31 = CRenderData::TryDrawCommandAsDrawList(
              (__int64)v74,
              v71,
              (__int64)v8,
              (struct CDrawListEntryBuilder *)v85,
              v64 != 0,
              v16,
              (__int64)&v83,
              &v65);
      v13 = v31;
      if ( v31 < 0 )
      {
        v62 = 236;
LABEL_147:
        v60 = v31;
LABEL_149:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, v62);
        goto LABEL_10;
      }
      if ( v65 )
      {
        v63 = 1;
        goto LABEL_62;
      }
      v28 = v63;
    }
    if ( v28 )
    {
      v31 = CRenderData::FlushDrawListCache(v15, v71, v8, (struct CDrawListEntryBuilder *)v85);
      v13 = v31;
      if ( v31 < 0 )
      {
        v62 = 252;
        goto LABEL_147;
      }
      v51 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        v70 = 0LL;
        CMILRefCountBase::Release(v51);
      }
      v63 = 0;
    }
    if ( v16 == 445 )
    {
      v46 = *(struct CTransform **)(*((_QWORD *)v74 + 13) + 8LL * *(unsigned int *)(*((_QWORD *)&v82 + 1) + 4LL));
      v47 = *(__int64 (__fastcall **)(CDrawingContext *__hidden, struct CTransform *))(*(_QWORD *)v67 + 112LL);
      if ( v47 == CDrawingContext::PushTransform )
        v48 = CDrawingContext::PushTransform(v67, v46);
      else
        v48 = v47(v67, v46);
      v13 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x109u);
        goto LABEL_10;
      }
      ++v64;
    }
    else
    {
      if ( v16 == 444 )
      {
        if ( !v64 )
        {
          v13 = -2003292412;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x119u);
          goto LABEL_10;
        }
        v49 = *(__int64 (**)(void))(*(_QWORD *)v67 + 104LL);
        if ( (char *)v49 == (char *)CDrawingContext::Pop )
          v50 = CDrawingContext::Pop(v67);
        else
          v50 = v49();
        v13 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x113u);
          goto LABEL_10;
        }
        --v64;
        goto LABEL_61;
      }
      v29 = *(__int64 (**)(void))(*(_QWORD *)v67 + 120LL);
      if ( (char *)v29 == (char *)CDrawingContext::ApplyRenderState )
        v30 = CDrawingContext::ApplyRenderState(v67);
      else
        v30 = v29();
      v13 = v30;
      if ( v30 < 0 )
      {
        v62 = 289;
        v60 = v30;
        goto LABEL_149;
      }
      v84 = v17;
      v31 = CRenderData::DrawCommandAsLegacy((__int64)v74, v67, v16, (__int64)&v84);
      v13 = v31;
      if ( v31 < 0 )
      {
        v62 = 291;
        goto LABEL_147;
      }
    }
LABEL_61:
    if ( v13 == 1 )
      break;
LABEL_62:
    v13 = -2147467259;
    v32 = (unsigned __int64)v77 + v79 - (_QWORD)v12;
    if ( v32 )
    {
      if ( v32 >= 8 )
      {
        v15 = (CRenderData *)*v12;
        if ( (unsigned int)v15 >= 8 && ((unsigned __int8)v15 & 3) == 0 && (unsigned __int64)v15 <= v32 )
        {
          v16 = v12[1];
          v45 = (CRenderData *)(v12 + 1);
          v12 = (unsigned int *)((char *)v12 + (_QWORD)v15);
          v72 = v45;
          v66 = v16;
          v68 = (_DWORD)v15 - 4;
          v13 = 0;
          v78 = v12;
        }
      }
    }
    else
    {
      v14 = (struct _LIST_ENTRY *)*((_QWORD *)p_Blink + 1);
      v13 = 1;
      v72 = 0LL;
      v68 = 0;
      if ( v14 != v4 )
      {
        CDataBlockReader::SetCurrentBlock((CDataBlockReader *)&v75, v14);
        NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v77, &v66, (void **)&v72, &v68);
        v4 = v75;
        v13 = NextItemSafe;
        p_Blink = v76;
        v12 = v78;
        v16 = v66;
        if ( NextItemSafe == 1 && *((struct _LIST_ENTRY **)v76 + 1) != v75 )
          v13 = -2147467259;
      }
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x135u);
      goto LABEL_10;
    }
    *(_QWORD *)&v81 = (int)v68;
    v10 = v69 + 1;
    *((_QWORD *)&v81 + 1) = v72;
    v17 = v81;
    v82 = v81;
    ++v69;
  }
  while ( !v13 );
  if ( !v63 )
    goto LABEL_8;
  v33 = HIDWORD(v90);
  v13 = 0;
  v34 = v71;
  if ( HIDWORD(v90) )
  {
    v56 = CDrawListCache::Update(v8, v71, (struct CDrawListEntryBuilder *)v85);
    v13 = v56;
    if ( v56 >= 0 )
    {
      v33 = HIDWORD(v90);
      goto LABEL_68;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x447u);
  }
  else
  {
LABEL_68:
    v35 = 0;
    if ( v33 )
    {
      do
        ReleaseInterface<CDisplay const>((char *)v87 + 8 * v35++);
      while ( v35 < HIDWORD(v90) );
    }
    v36 = v86;
    HIDWORD(v90) = 0;
    v92 = 0;
    if ( v86 )
    {
      v86 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
    }
    if ( *((_QWORD *)v8 + 3) )
    {
      v52 = CDrawingContext::EmitDrawListCache(v34, v8);
      v13 = v52;
      if ( v52 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x44Fu);
    }
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x140u);
  }
  else
  {
    if ( v8 )
    {
      v70 = 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 2, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(struct CDrawListCache *, __int64))(*(_QWORD *)v8 + 16LL))(v8, 1LL);
      v8 = v70;
    }
LABEL_8:
    if ( v13 == 1 )
      v13 = 0;
  }
LABEL_10:
  v7 = v64;
LABEL_11:
  v3 = v67;
LABEL_12:
  while ( v7 )
  {
    v61 = (*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v3 + 104LL))(v3);
    v13 = v61;
    if ( v61 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x14Fu);
    else
      --v7;
  }
  if ( v8 )
    CMILRefCountBase::Release(v8);
  for ( i = 0; i < HIDWORD(v90); ++i )
    ReleaseInterface<CDisplay const>((char *)v87 + 8 * i);
  v19 = v86;
  HIDWORD(v90) = 0;
  v92 = 0;
  if ( v86 )
  {
    v86 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  }
  v20 = v125;
  if ( v125 )
  {
    v125 = 0LL;
    CMILRefCountBase::Release(v20);
  }
  if ( v119 != v120 )
  {
    operator delete(v119);
    v119 = 0LL;
  }
  if ( v113 != v114 )
  {
    operator delete(v113);
    v113 = 0LL;
  }
  if ( v108 != v109 )
  {
    operator delete(v108);
    v108 = 0LL;
  }
  v21 = v107;
  if ( v107 )
  {
    v107 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v101;
  v102 = 0LL;
  v100 = 0;
  HIDWORD(v96) = 0;
  v104 = 0LL;
  v105 = 0;
  if ( v101 )
  {
    *((_QWORD *)v101 + 8) = 0LL;
    *((_DWORD *)v22 + 8) = 0;
    *((_DWORD *)v22 + 14) = 0;
    *((_QWORD *)v22 + 11) = 0LL;
    *((_QWORD *)v22 + 12) = 0LL;
    *((_DWORD *)v22 + 26) = 0;
    *((_DWORD *)v22 + 32) = 0;
    v22 = v101;
  }
  v106 = v106 & 4 | 1;
  if ( v103 )
  {
    Mesh::MeshGraph::`scalar deleting destructor'(v103, (unsigned int)v14);
    v22 = v101;
  }
  if ( v22 )
    Mesh::MeshGraph::`scalar deleting destructor'(v22, (unsigned int)v14);
  if ( lpMem[0] )
    operator delete(lpMem[0]);
  if ( v93 != v94 )
  {
    operator delete(v93);
    v93 = 0LL;
  }
  if ( v87 != v88 )
  {
    operator delete(v87);
    v87 = 0LL;
  }
  v23 = v86;
  if ( v86 )
  {
    v86 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  }
  return (unsigned int)v13;
}
