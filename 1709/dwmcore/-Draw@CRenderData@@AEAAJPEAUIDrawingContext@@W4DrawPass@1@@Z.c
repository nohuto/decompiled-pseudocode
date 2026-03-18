/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590
 * Callers:
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E440 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18001E470 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045C9C (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180053AF0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x18000FD50 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x18000FD70 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18001D858 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV?$span@$$CBE@gsl@@@Z @ 0x18001DD7C (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV-$span@$$CBE@gsl@@@Z.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE@gsl@@PEA_N@Z @ 0x18001E008 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180022DE0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180023768 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180023CA8 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18003B440 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18003CBF0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18003EA78 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180041BF0 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18005D740 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x18005D7C0 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x180083920 (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800844E4 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800B2960 (-GetCache@CDrawListCacheSet@@QEAAJIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800B7570 (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800B76C8 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800BC5BC (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::Draw(_QWORD *a1, __int64 a2, int a3)
{
  struct _LIST_ENTRY *v3; // rsi
  int v6; // r13d
  struct CDrawListCache *v7; // rbx
  __int64 v8; // rax
  bool v9; // zf
  CDataStreamBlock *p_Blink; // r14
  struct _LIST_ENTRY *v11; // rax
  char *v12; // r13
  int v13; // edi
  signed int v14; // ecx
  __int64 v15; // rdx
  void *v16; // rax
  __int128 v17; // xmm6
  unsigned int i; // ebx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  Mesh::MeshGraph *v22; // rcx
  __int64 v23; // rcx
  CVisual *v25; // rcx
  __int64 v26; // r10
  struct _LIST_ENTRY *v27; // r11
  CRenderData *v28; // rcx
  __int64 (__fastcall *v29)(CDrawingContext *__hidden); // rax
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // rax
  struct _LIST_ENTRY *v33; // rdx
  CDrawingContext *v34; // rsi
  CMILRefCountBase *v35; // rcx
  void (*v36)(void); // rax
  unsigned int *(__fastcall *v37)(CDataStreamBlock *); // rax
  unsigned int *WrittenSize; // rax
  unsigned int *v39; // rdi
  char *(__fastcall *v40)(CDataStreamBlock *); // rax
  char *Data; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  int v44; // eax
  int Cache; // eax
  __int64 v46; // rax
  bool (__fastcall *v47)(CContent *__hidden, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *, const struct CMILMatrix *); // rax
  bool IsDrawListCacheDirty; // al
  unsigned __int64 v49; // r8
  unsigned int v50; // ecx
  struct CTransform *v51; // rdx
  __int64 (__fastcall *v52)(CDrawingContext *__hidden, struct CTransform *); // rax
  int v53; // eax
  __int64 (__fastcall *v54)(CDrawingContext *__hidden); // rax
  int v55; // eax
  int v56; // eax
  unsigned int (__fastcall *v57)(CMILRefCountBase *__hidden); // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v59; // r10
  struct _LIST_ENTRY *Flink; // rcx
  int v61; // eax
  int v62; // eax
  struct _LIST_ENTRY *v63; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int NextItemSafe; // eax
  int v66; // r9d
  int v67; // eax
  unsigned int v68; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v69; // [rsp+40h] [rbp-C0h]
  int v70; // [rsp+44h] [rbp-BCh]
  char v71[4]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v72; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v73; // [rsp+50h] [rbp-B0h]
  struct CDrawingContext *v74; // [rsp+58h] [rbp-A8h]
  unsigned int v75; // [rsp+60h] [rbp-A0h] BYREF
  struct _LIST_ENTRY *v76; // [rsp+68h] [rbp-98h]
  CContent *v77; // [rsp+70h] [rbp-90h]
  void *v78[2]; // [rsp+80h] [rbp-80h] BYREF
  struct D2D_SIZE_F v79; // [rsp+90h] [rbp-70h] BYREF
  struct CDrawListCache *v80; // [rsp+98h] [rbp-68h] BYREF
  struct _LIST_ENTRY *v81; // [rsp+A0h] [rbp-60h] BYREF
  CDataStreamBlock *v82; // [rsp+A8h] [rbp-58h]
  char *v83; // [rsp+B0h] [rbp-50h] BYREF
  char *v84; // [rsp+B8h] [rbp-48h]
  unsigned int v85; // [rsp+C0h] [rbp-40h]
  struct CDrawListCache *v86[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v87; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v88; // [rsp+F0h] [rbp-10h]
  _QWORD v89[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v90; // [rsp+120h] [rbp+20h]
  void *v91; // [rsp+128h] [rbp+28h]
  _BYTE *v92; // [rsp+130h] [rbp+30h]
  int v93; // [rsp+138h] [rbp+38h]
  __int64 v94; // [rsp+13Ch] [rbp+3Ch]
  _BYTE v95[32]; // [rsp+148h] [rbp+48h] BYREF
  int v96; // [rsp+168h] [rbp+68h]
  void *v97; // [rsp+170h] [rbp+70h]
  _BYTE *v98; // [rsp+178h] [rbp+78h]
  int v99; // [rsp+180h] [rbp+80h]
  __int64 v100; // [rsp+184h] [rbp+84h]
  _BYTE v101[112]; // [rsp+190h] [rbp+90h] BYREF
  LPVOID lpMem[2]; // [rsp+200h] [rbp+100h]
  __int64 v103; // [rsp+210h] [rbp+110h]
  int v104; // [rsp+218h] [rbp+118h]
  Mesh::MeshGraph *v105; // [rsp+220h] [rbp+120h]
  __int64 v106; // [rsp+228h] [rbp+128h]
  Mesh::MeshGraph *v107; // [rsp+230h] [rbp+130h]
  __int64 v108; // [rsp+240h] [rbp+140h]
  int v109; // [rsp+248h] [rbp+148h]
  char v110; // [rsp+25Ch] [rbp+15Ch]
  char v111; // [rsp+25Dh] [rbp+15Dh]
  __int64 v112; // [rsp+260h] [rbp+160h]
  void *v113; // [rsp+268h] [rbp+168h]
  _BYTE *v114; // [rsp+270h] [rbp+170h]
  int v115; // [rsp+278h] [rbp+178h]
  __int64 v116; // [rsp+27Ch] [rbp+17Ch]
  _BYTE v117[960]; // [rsp+288h] [rbp+188h] BYREF
  void *v118; // [rsp+648h] [rbp+548h]
  _BYTE *v119; // [rsp+650h] [rbp+550h]
  int v120; // [rsp+658h] [rbp+558h]
  __int64 v121; // [rsp+65Ch] [rbp+55Ch]
  _BYTE v122[960]; // [rsp+668h] [rbp+568h] BYREF
  int v123; // [rsp+A28h] [rbp+928h]
  void *v124; // [rsp+A30h] [rbp+930h]
  _BYTE *v125; // [rsp+A38h] [rbp+938h]
  int v126; // [rsp+A40h] [rbp+940h]
  __int64 v127; // [rsp+A44h] [rbp+944h]
  _BYTE v128[64]; // [rsp+A50h] [rbp+950h] BYREF
  __int64 v129; // [rsp+A90h] [rbp+990h]
  __int64 v130; // [rsp+A98h] [rbp+998h]
  __int16 v131; // [rsp+AA0h] [rbp+9A0h]

  v111 &= ~1u;
  v3 = (struct _LIST_ENTRY *)(a1 + 7);
  v77 = (CContent *)a1;
  memset(v89, 0, sizeof(v89));
  v90 = 0LL;
  v91 = v95;
  v6 = 0;
  v93 = 4;
  v92 = v95;
  v7 = 0LL;
  v94 = 4LL;
  v97 = v101;
  v98 = v101;
  v73 = 2;
  v99 = 2;
  v100 = 2LL;
  v113 = v117;
  v114 = v117;
  v118 = v122;
  v119 = v122;
  v124 = v128;
  v125 = v128;
  v8 = a1[9];
  v96 = 0;
  *(_OWORD *)lpMem = 0LL;
  v103 = 0LL;
  v105 = 0LL;
  v107 = 0LL;
  v106 = 0LL;
  v104 = 0;
  v108 = 0LL;
  v109 = 0;
  v110 = 5;
  v112 = 0LL;
  v115 = 960;
  v116 = 960LL;
  v120 = 960;
  v121 = 960LL;
  v123 = 0;
  v126 = 30;
  v127 = 30LL;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0;
  v70 = 0;
  v74 = 0LL;
  v76 = 0LL;
  v80 = 0LL;
  v69 = 0;
  v9 = v8 == 0;
  if ( v8 )
  {
    v63 = (struct _LIST_ENTRY *)(v8 + 8);
    Blink = v3->Blink;
    if ( v9 )
      v63 = 0LL;
    if ( Blink->Flink != v3 )
      __fastfail(3u);
    v63->Flink = v3;
    v63->Blink = Blink;
    Blink->Flink = v63;
    v3->Blink = v63;
    v3[1].Flink = 0LL;
  }
  p_Blink = 0LL;
  v81 = v3;
  v82 = 0LL;
  if ( !a3 )
  {
    v25 = 0LL;
    v74 = (struct CDrawingContext *)a2;
    if ( *(_BYTE *)(a2 + 6520) )
    {
      if ( *(_BYTE *)(a2 + 6521) )
        v25 = *(CVisual **)(a2 + 3160);
      else
        v25 = *(CVisual **)(*(_QWORD *)(a2 + 6528) + 24LL);
    }
    v26 = *(_QWORD *)(a2 + 6528);
    v76 = 0LL;
    if ( *(_BYTE *)(v26 + 32) )
    {
      v27 = (struct _LIST_ENTRY *)((char *)v25 + 280);
      v76 = (struct _LIST_ENTRY *)((char *)v25 + 280);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v25);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( Flink[2].Flink != v59 )
          {
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_45;
          }
          v27 = Flink - 14;
          v76 = Flink - 14;
        }
      }
    }
LABEL_45:
    if ( !v27 )
    {
      v13 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xBEu);
      goto LABEL_10;
    }
  }
  v11 = v3->Flink;
  if ( v3 == v3->Flink )
  {
    v12 = v83;
    v13 = 1;
    v14 = v73;
    v15 = 0LL;
    v16 = v78[0];
  }
  else
  {
    if ( v11 )
    {
      p_Blink = (CDataStreamBlock *)&v11[-1].Blink;
      v82 = (CDataStreamBlock *)&v11[-1].Blink;
    }
    else
    {
      p_Blink = 0LL;
      v82 = 0LL;
    }
    v37 = *(unsigned int *(__fastcall **)(CDataStreamBlock *))(*(_QWORD *)p_Blink + 8LL);
    if ( v37 == CDataStreamBlock::GetWrittenSize )
      WrittenSize = CDataStreamBlock::GetWrittenSize(p_Blink);
    else
      WrittenSize = v37(p_Blink);
    v39 = WrittenSize;
    v40 = *(char *(__fastcall **)(CDataStreamBlock *))(*(_QWORD *)p_Blink + 16LL);
    if ( v40 == CDataStreamBlock::GetData )
      Data = CDataStreamBlock::GetData(p_Blink);
    else
      Data = v40(p_Blink);
    v12 = Data;
    v83 = Data;
    v42 = *v39;
    v85 = v42;
    v13 = -2147467259;
    v84 = v12;
    if ( (_DWORD)v42 )
    {
      if ( v42 < 8 || (v43 = *(unsigned int *)v12, (unsigned int)v43 < 8) || (v43 & 3) != 0 || v43 > v42 )
      {
        v14 = v73;
        v15 = 0LL;
        v16 = v78[0];
      }
      else
      {
        v16 = v12 + 4;
        v72 = *((_DWORD *)v12 + 1);
        v14 = v43 - 4;
        v84 = &v12[v43];
        v15 = 0LL;
        v13 = 0;
      }
    }
    else
    {
      v14 = 0;
      v16 = 0LL;
      v15 = 0LL;
      v13 = 1;
      if ( *((struct _LIST_ENTRY **)p_Blink + 1) != v3 )
        v13 = -2147467259;
    }
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC6u);
    v6 = 0;
    goto LABEL_10;
  }
  v78[0] = v16;
  v78[1] = (void *)v14;
  v17 = *(_OWORD *)v78;
  v87 = *(_OWORD *)v78;
  if ( v13 )
    goto LABEL_7;
  do
  {
    if ( v7 || a3 )
    {
      v28 = (CRenderData *)v69;
    }
    else
    {
      v86[0] = 0LL;
      Cache = CDrawListCacheSet::GetCache((CDrawListCacheSet *)&v76[8], v73, *((struct IRenderTarget **)v74 + 45), v86);
      v13 = Cache;
      if ( Cache < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Cache, 0x1A2u);
        v28 = v86[0];
        if ( v86[0] )
          (*(void (__fastcall **)(struct CDrawListCache *))(*(_QWORD *)v86[0] + 8LL))(v86[0]);
      }
      else
      {
        v7 = v86[0];
        v79.width = 1.0;
        v46 = *(_QWORD *)v77;
        v79.height = 1.0;
        v47 = *(bool (__fastcall **)(CContent *__hidden, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *, const struct CMILMatrix *))(v46 + 216);
        if ( v47 == CContent::IsDrawListCacheDirty )
          IsDrawListCacheDirty = CContent::IsDrawListCacheDirty(v77, v86[0], v74, &v79, 0LL);
        else
          IsDrawListCacheDirty = v47(v77, v86[0], v74, &v79, 0LL);
        if ( IsDrawListCacheDirty && *((_QWORD *)v7 + 3) )
        {
          if ( *((_DWORD *)v7 + 4) == 1 )
          {
            ++dword_18026EE00;
          }
          else if ( *((_DWORD *)v7 + 4) == 2 )
          {
            ++dword_18026EE0C;
          }
          *((_QWORD *)v7 + 3) = 0LL;
          *((_DWORD *)v7 + 4) = 0;
          CDrawListCache::ReleaseDrawListEntries(v7);
          *((_BYTE *)v7 + 100) = 0;
        }
        v80 = v7;
      }
      if ( v13 < 0 )
      {
        v68 = 215;
        goto LABEL_160;
      }
      LOBYTE(v28) = 0;
      v69 = 0;
    }
    v71[0] = 0;
    if ( !a3 )
    {
      *(_OWORD *)v86 = v17;
      v44 = CRenderData::TryDrawCommandAsDrawList(
              (__int64)v77,
              v74,
              (__int64)v7,
              (struct CDrawListEntryBuilder *)v89,
              v70 != 0,
              v72,
              (__int64 *)v86,
              v71);
      v13 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0xE4u);
        goto LABEL_9;
      }
      if ( v71[0] )
      {
        v69 = 1;
        goto LABEL_59;
      }
      v28 = (CRenderData *)v69;
    }
    if ( (_BYTE)v28 )
    {
      v61 = CRenderData::FlushDrawListCache(v28, v74, v7, (struct CDrawListEntryBuilder *)v89);
      v13 = v61;
      if ( v61 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0xF4u);
        goto LABEL_9;
      }
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v80);
      v7 = v80;
      v69 = 0;
    }
    if ( v72 == 384 )
    {
      v51 = *(struct CTransform **)(*((_QWORD *)v77 + 13) + 8LL * *(unsigned int *)(v87 + 4));
      v52 = *(__int64 (__fastcall **)(CDrawingContext *__hidden, struct CTransform *))(*(_QWORD *)a2 + 112LL);
      if ( v52 == CDrawingContext::PushTransform )
      {
        v53 = CDrawingContext::PushTransform((CDrawingContext *)a2, v51);
      }
      else if ( v52 == COcclusionContext::PushTransform )
      {
        v53 = COcclusionContext::PushTransform((COcclusionContext *)a2, v51);
      }
      else
      {
        v53 = v52((CDrawingContext *)a2, v51);
      }
      v13 = v53;
      if ( v53 < 0 )
      {
        v68 = 257;
LABEL_160:
        v66 = v13;
LABEL_162:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, v68);
        goto LABEL_9;
      }
      ++v70;
    }
    else
    {
      if ( v72 != 383 )
      {
        v29 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)a2 + 120LL);
        if ( v29 == CDrawingContext::ApplyRenderState )
          v30 = CDrawingContext::ApplyRenderState((CDrawingContext *)a2);
        else
          v30 = ((__int64 (__fastcall *)(__int64, __int64))v29)(a2, v15);
        v13 = v30;
        if ( v30 < 0 )
        {
          v68 = 281;
          goto LABEL_160;
        }
        v87 = v17;
        v31 = CRenderData::DrawCommandAsLegacy((__int64)v77, (CDrawingContext *)a2, v72, (__int64 *)&v87);
        v13 = v31;
        if ( v31 < 0 )
        {
          v68 = 283;
          v66 = v31;
          goto LABEL_162;
        }
        goto LABEL_58;
      }
      if ( !v70 )
      {
        v13 = -2003292412;
        v68 = 273;
        goto LABEL_160;
      }
      v54 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)a2 + 104LL);
      if ( v54 == CDrawingContext::Pop )
      {
        v55 = CDrawingContext::Pop((CDrawingContext *)a2);
      }
      else if ( v54 == COcclusionContext::Pop )
      {
        v55 = COcclusionContext::Pop((COcclusionContext *)a2);
      }
      else
      {
        v55 = ((__int64 (__fastcall *)(__int64, __int64))v54)(a2, v15);
      }
      v13 = v55;
      if ( v55 < 0 )
      {
        v68 = 267;
        goto LABEL_160;
      }
      --v70;
    }
LABEL_58:
    if ( v13 == 1 )
      break;
LABEL_59:
    v13 = -2147467259;
    v32 = (unsigned __int64)&v12[v85 - (_QWORD)v84];
    if ( v32 )
    {
      if ( v32 < 8 || (v49 = *(unsigned int *)v84, (unsigned int)v49 < 8) || (v49 & 3) != 0 || v49 > v32 )
      {
        v15 = 0LL;
      }
      else
      {
        v50 = *((_DWORD *)v84 + 1);
        v78[0] = v84 + 4;
        v84 += v49;
        v15 = 0LL;
        v72 = v50;
        v13 = 0;
        v75 = v49 - 4;
      }
    }
    else
    {
      v13 = 1;
      v78[0] = 0LL;
      v75 = 0;
      v33 = (struct _LIST_ENTRY *)*((_QWORD *)p_Blink + 1);
      if ( v33 != v3 )
      {
        CDataBlockReader::SetCurrentBlock((CDataBlockReader *)&v81, v33);
        NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v83, &v72, v78, &v75);
        v3 = v81;
        v13 = NextItemSafe;
        p_Blink = v82;
        v12 = v83;
        if ( NextItemSafe == 1 && *((struct _LIST_ENTRY **)v82 + 1) != v81 )
          v13 = -2147467259;
      }
      v15 = 0LL;
    }
    if ( v13 < 0 )
    {
      v68 = 301;
      goto LABEL_160;
    }
    ++v73;
    *(void **)&v88 = v78[0];
    *((_QWORD *)&v88 + 1) = (int)v75;
    v17 = v88;
    v87 = v88;
  }
  while ( !v13 );
  if ( !v69 )
    goto LABEL_7;
  v13 = 0;
  v34 = v74;
  if ( HIDWORD(v94) && (v62 = CDrawListCache::Update(v7, v74, (struct CDrawListEntryBuilder *)v89), v13 = v62, v62 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x322u);
  }
  else if ( *((_QWORD *)v7 + 3) )
  {
    v56 = CDrawingContext::EmitDrawListCache(v34, v7);
    v13 = v56;
    if ( v56 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x328u);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x138u);
  }
  else
  {
    v35 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      v36 = *(void (**)(void))(*(_QWORD *)v35 + 8LL);
      if ( (char *)v36 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v35);
      else
        v36();
    }
LABEL_7:
    if ( v13 == 1 )
      v13 = 0;
  }
LABEL_9:
  v6 = v70;
LABEL_10:
  while ( v6 )
  {
    v67 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 104LL))(a2, v15);
    v13 = v67;
    if ( v67 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x147u);
    else
      --v6;
  }
  if ( v7 )
  {
    v57 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v7 + 8LL);
    if ( v57 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v7);
    else
      ((void (__fastcall *)(struct CDrawListCache *, __int64))v57)(v7, v15);
  }
  for ( i = 0; i < HIDWORD(v94); ++i )
    ReleaseInterface<CDisplay const>((char *)v91 + 8 * i, v15);
  v19 = v90;
  HIDWORD(v94) = 0;
  v96 = 0;
  if ( v90 )
  {
    v90 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 8LL))(v19, v15);
  }
  v20 = v130;
  if ( v130 )
  {
    v130 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 8LL))(v20, v15);
  }
  if ( v124 != v125 )
  {
    WPF::ProcessHeapImpl::Free(v124);
    v124 = 0LL;
  }
  if ( v118 != v119 )
  {
    WPF::ProcessHeapImpl::Free(v118);
    v118 = 0LL;
  }
  if ( v113 != v114 )
  {
    WPF::ProcessHeapImpl::Free(v113);
    v113 = 0LL;
  }
  v21 = v112;
  if ( v112 )
  {
    v112 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 16LL))(v21, v15);
  }
  v22 = v105;
  v106 = 0LL;
  v104 = 0;
  HIDWORD(v100) = 0;
  v108 = 0LL;
  v109 = 0;
  if ( v105 )
  {
    *((_QWORD *)v105 + 8) = 0LL;
    *((_DWORD *)v22 + 8) = 0;
    *((_DWORD *)v22 + 14) = 0;
    *((_QWORD *)v22 + 11) = 0LL;
    *((_QWORD *)v22 + 12) = 0LL;
    *((_DWORD *)v22 + 26) = 0;
    *((_DWORD *)v22 + 32) = 0;
    v22 = v105;
  }
  v111 &= ~1u;
  v110 = v110 & 4 | 1;
  if ( v107 )
  {
    Mesh::MeshGraph::`scalar deleting destructor'(v107, v15);
    v22 = v105;
  }
  if ( v22 )
    Mesh::MeshGraph::`scalar deleting destructor'(v22, v15);
  if ( lpMem[0] )
    HeapFree(WPF::g_processHeap, 0, lpMem[0]);
  if ( v97 != v98 )
  {
    WPF::ProcessHeapImpl::Free(v97);
    v97 = 0LL;
  }
  if ( v91 != v92 )
  {
    WPF::ProcessHeapImpl::Free(v91);
    v91 = 0LL;
  }
  v23 = v90;
  if ( v90 )
  {
    v90 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 8LL))(v23, v15);
  }
  return (unsigned int)v13;
}
