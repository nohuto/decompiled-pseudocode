/*
 * XREFs of ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90
 * Callers:
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800847E0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800849A0 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800849B0 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800877F0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180083850 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x180083870 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18009B530 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x18009B5B0 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18009B620 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x18009B9C0 (-DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009BB00 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18009BB30 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x18009BC50 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x1800A1C60 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800A6380 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x1800A73D0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1800A7630 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x1800A8CC0 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800A91D0 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x1800A95F0 (-DrawRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800C1FBC (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C2114 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x180160020 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x180160140 (-Release@CRenderDataDrawFrame@@QEAAKXZ.c)
 */

__int64 __fastcall CRenderData::Draw(CRenderData *this, struct IDrawingContext *a2)
{
  struct _LIST_ENTRY *v2; // rdi
  __int64 v4; // rax
  bool v6; // zf
  struct _LIST_ENTRY *Flink; // rax
  int v8; // r13d
  CDataStreamBlock *p_Blink; // r14
  CDrawingContext *v10; // r15
  int v11; // ebx
  __int64 (__fastcall *v13)(CDrawingContext *__hidden); // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 (__fastcall *v16)(CDrawingContext *, struct MilRectF *); // rax
  int v17; // eax
  unsigned int *(__fastcall *v18)(CDataStreamBlock *); // rax
  unsigned int *WrittenSize; // rax
  unsigned int *v20; // rbx
  char *(__fastcall *v21)(CDataStreamBlock *); // rax
  char *Data; // rax
  char *v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 (__fastcall *v27)(CDrawingContext *, __int128 *, _QWORD); // rax
  int v28; // eax
  unsigned __int64 v29; // rax
  struct _LIST_ENTRY *v30; // rdx
  unsigned __int64 v31; // rdx
  struct CGeometry *v32; // r8
  struct CLegacyMilBrush *v33; // rdx
  int (*v34)(COcclusionContext *__hidden, struct CLegacyMilBrush *, struct CGeometry *); // rax
  int v35; // eax
  struct CTransform *v36; // rdx
  __int64 (__fastcall *v37)(CDrawingContext *__hidden, struct CTransform *); // rax
  int v38; // eax
  __int64 v39; // rax
  __int64 (__fastcall *v40)(CDrawingContext *__hidden); // rax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 (__fastcall *v44)(CDrawingContext *); // rax
  int v45; // eax
  struct CResource *v46; // rdx
  __int64 (__fastcall *v47)(CDrawingContext *__hidden, struct CResource *); // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 (__fastcall *v50)(CDrawingContext *); // rax
  int v51; // eax
  __int64 v52; // rdx
  int v53; // eax
  struct _LIST_ENTRY *v54; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // eax
  int v59; // eax
  int NextItemSafe; // eax
  unsigned int v61; // [rsp+20h] [rbp-E0h]
  unsigned int v62[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v63; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C0h]
  void *v65; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v66; // [rsp+50h] [rbp-B0h] BYREF
  char *v67; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY *v68; // [rsp+60h] [rbp-A0h] BYREF
  CDataStreamBlock *v69; // [rsp+68h] [rbp-98h]
  char *v70; // [rsp+70h] [rbp-90h] BYREF
  char *v71; // [rsp+78h] [rbp-88h]
  unsigned int v72; // [rsp+80h] [rbp-80h]
  struct IDrawingContext *v73; // [rsp+88h] [rbp-78h] BYREF
  struct CRenderDataDrawFrame *v74; // [rsp+90h] [rbp-70h] BYREF
  __int128 v75; // [rsp+98h] [rbp-68h] BYREF
  __int128 v76; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v77[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v78; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v79; // [rsp+D8h] [rbp-28h] BYREF

  v2 = (struct _LIST_ENTRY *)((char *)this + 56);
  v64 = *((_QWORD *)this + 13);
  v4 = *((_QWORD *)this + 9);
  v6 = v4 == 0;
  if ( v4 )
  {
    v54 = (struct _LIST_ENTRY *)(v4 + 8);
    Blink = v2->Blink;
    if ( v6 )
      v54 = 0LL;
    if ( Blink->Flink != v2 )
      __fastfail(3u);
    v54->Flink = v2;
    v54->Blink = Blink;
    Blink->Flink = v54;
    v2->Blink = v54;
    v2[1].Flink = 0LL;
  }
  Flink = v2->Flink;
  v8 = 0;
  p_Blink = 0LL;
  v10 = a2;
  v68 = v2;
  v69 = 0LL;
  v73 = a2;
  v74 = 0LL;
  v63 = 0;
  if ( v2 == Flink )
  {
    v11 = 1;
    v67 = v70;
    *(_QWORD *)v62 = v65;
  }
  else
  {
    if ( Flink )
    {
      p_Blink = (CDataStreamBlock *)&Flink[-1].Blink;
      v69 = (CDataStreamBlock *)&Flink[-1].Blink;
    }
    else
    {
      v69 = 0LL;
    }
    v18 = *(unsigned int *(__fastcall **)(CDataStreamBlock *))(*(_QWORD *)p_Blink + 8LL);
    if ( v18 == CDataStreamBlock::GetWrittenSize )
      WrittenSize = CDataStreamBlock::GetWrittenSize(p_Blink);
    else
      WrittenSize = (unsigned int *)((__int64 (__fastcall *)(CDataStreamBlock *, _QWORD))v18)(p_Blink, 0LL);
    v20 = WrittenSize;
    v21 = *(char *(__fastcall **)(CDataStreamBlock *))(*(_QWORD *)p_Blink + 16LL);
    if ( v21 == CDataStreamBlock::GetData )
      Data = CDataStreamBlock::GetData(p_Blink);
    else
      Data = v21(p_Blink);
    v23 = Data;
    v67 = Data;
    v70 = Data;
    v24 = *v20;
    v11 = -2147467259;
    v72 = v24;
    v25 = (unsigned int)v24;
    v71 = v23;
    if ( (_DWORD)v24 )
    {
      if ( v24 < 8 || (v26 = *(unsigned int *)v23, (unsigned int)v26 < 8) || (v26 & 3) != 0 || v26 > v25 )
      {
        *(_QWORD *)v62 = v65;
      }
      else
      {
        v66 = *((_DWORD *)v23 + 1);
        *(_QWORD *)v62 = v23 + 4;
        v11 = 0;
        v65 = v23 + 4;
        v71 = &v23[(unsigned int)v26];
      }
    }
    else
    {
      *(_QWORD *)v62 = 0LL;
      v65 = 0LL;
      v11 = 1;
      if ( *((struct _LIST_ENTRY **)p_Blink + 1) != v2 )
        v11 = -2147467259;
    }
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1D3u);
  }
  else
  {
    if ( v11 )
    {
LABEL_6:
      if ( v11 == 1 )
LABEL_7:
        v11 = 0;
    }
    else
    {
      while ( 1 )
      {
        v13 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)v10 + 128LL);
        v14 = v13 == CDrawingContext::ApplyRenderState ? CDrawingContext::ApplyRenderState(v10) : v13(v10);
        v11 = v14;
        if ( v14 < 0 )
          break;
        if ( v66 == 337 )
        {
          v78 = *(_OWORD *)(*(_QWORD *)v62 + 4LL);
          v27 = *(__int64 (__fastcall **)(CDrawingContext *, __int128 *, _QWORD))(*(_QWORD *)v10 + 104LL);
          if ( (char *)v27 == (char *)COcclusionContext::DrawOcclusionRectangle )
            v28 = COcclusionContext::DrawOcclusionRectangle(v10, &v78, 0LL);
          else
            v28 = v27(v10, &v78, 0LL);
          v11 = v28;
          if ( v28 < 0 )
          {
            v61 = 611;
            goto LABEL_124;
          }
        }
        else if ( v66 == 342 )
        {
          v32 = *(struct CGeometry **)(v64 + 8LL * *(unsigned int *)(*(_QWORD *)v62 + 8LL));
          v33 = *(struct CLegacyMilBrush **)(v64 + 8LL * *(unsigned int *)(*(_QWORD *)v62 + 4LL));
          v34 = *(int (**)(COcclusionContext *__hidden, struct CLegacyMilBrush *, struct CGeometry *))(*(_QWORD *)v10 + 24LL);
          if ( v34 == COcclusionContext::DrawGeometry )
          {
            v35 = COcclusionContext::DrawGeometry(v10, v33, v32);
          }
          else if ( (char *)v34 == (char *)CDrawingContext::DrawGeometry )
          {
            v35 = CDrawingContext::DrawGeometry(v10, v33, v32);
          }
          else
          {
            v35 = ((__int64 (__fastcall *)(CDrawingContext *, struct CLegacyMilBrush *, struct CGeometry *))v34)(
                    v10,
                    v33,
                    v32);
          }
          v11 = v35;
          if ( v35 < 0 )
          {
            v61 = 542;
            goto LABEL_124;
          }
        }
        else
        {
          switch ( v66 )
          {
            case 0x14Eu:
              v46 = *(struct CResource **)(v64 + 8LL * *(unsigned int *)(*(_QWORD *)v62 + 4LL));
              v47 = *(__int64 (__fastcall **)(CDrawingContext *__hidden, struct CResource *))(*(_QWORD *)v10 + 48LL);
              if ( v47 == CDrawingContext::DrawBitmap )
                v48 = CDrawingContext::DrawBitmap(v10, v46);
              else
                v48 = v47(v10, v46);
              v11 = v48;
              if ( v48 >= 0 )
                break;
              v61 = 585;
              goto LABEL_124;
            case 0x150u:
              v56 = *(_QWORD *)(v64 + 8LL * *(unsigned int *)(*(_QWORD *)v62 + 8LL));
              v57 = v56 - 16;
              if ( !v56 )
                v57 = 0LL;
              v58 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int64))(*(_QWORD *)v10 + 88LL))(
                      v10,
                      *(_QWORD *)(v64 + 8LL * *(unsigned int *)(*(_QWORD *)v62 + 4LL)),
                      v57);
              v11 = v58;
              if ( v58 >= 0 )
                break;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x257u);
              goto LABEL_8;
            case 0x152u:
              (*(void (__fastcall **)(CDrawingContext *, _QWORD))(*(_QWORD *)v10 + 96LL))(
                v10,
                *(_QWORD *)(v64 + 8LL * *(unsigned int *)(*(_QWORD *)v62 + 4LL)));
              break;
            case 0x153u:
              v15 = *(_QWORD *)v62 + 20LL;
              v76 = *(_OWORD *)(*(_QWORD *)v62 + 4LL);
              v16 = *(__int64 (__fastcall **)(CDrawingContext *, struct MilRectF *))(*(_QWORD *)v10 + 16LL);
              if ( v16 == CDrawingContext::DrawSolidRectangle )
              {
                v17 = CDrawingContext::DrawSolidRectangle(v10, (struct MilRectF *)&v76);
              }
              else if ( (char *)v16 == (char *)COcclusionContext::DrawSolidRectangle )
              {
                v17 = COcclusionContext::DrawSolidRectangle(v10, &v76, v15);
              }
              else
              {
                v17 = ((__int64 (__fastcall *)(CDrawingContext *, __int128 *, __int64))v16)(v10, &v76, v15);
              }
              v11 = v17;
              if ( v17 >= 0 )
                break;
              v61 = 528;
              goto LABEL_124;
            case 0x154u:
              v52 = *(unsigned int *)(*(_QWORD *)v62 + 4LL);
              v79 = *(_OWORD *)(*(_QWORD *)v62 + 8LL);
              v53 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int128 *, __int64, _DWORD))(*(_QWORD *)v10 + 40LL))(
                      v10,
                      *(_QWORD *)(v64 + 8 * v52),
                      &v79,
                      *(_QWORD *)v62 + 28LL,
                      *(_DWORD *)(*(_QWORD *)v62 + 24LL));
              v11 = v53;
              if ( v53 >= 0 )
                break;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x23Du);
              goto LABEL_8;
            case 0x155u:
              v42 = *(unsigned int *)(*(_QWORD *)v62 + 4LL);
              v75 = *(_OWORD *)(*(_QWORD *)v62 + 8LL);
              v43 = *(_QWORD *)(v64 + 8 * v42);
              v44 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v10 + 8LL);
              if ( (char *)v44 == (char *)COcclusionContext::DrawRectangle )
              {
                v45 = COcclusionContext::DrawRectangle(v10, &v75, v43, 0LL);
              }
              else if ( v44 == CDrawingContext::DrawRectangle )
              {
                v45 = CDrawingContext::DrawRectangle(v10);
              }
              else
              {
                v45 = ((__int64 (__fastcall *)(CDrawingContext *, __int128 *, __int64, _QWORD))v44)(v10, &v75, v43, 0LL);
              }
              v11 = v45;
              if ( v45 >= 0 )
                break;
              v61 = 515;
              goto LABEL_124;
            case 0x157u:
              v77[0] = *(_DWORD *)(*(_QWORD *)v62 + 8LL);
              v77[1] = *(_DWORD *)(*(_QWORD *)v62 + 12LL);
              v77[2] = *(_DWORD *)(*(_QWORD *)v62 + 16LL);
              v77[3] = *(_DWORD *)(*(_QWORD *)v62 + 20LL);
              v49 = *(_QWORD *)(v64 + 8LL * *(unsigned int *)(*(_QWORD *)v62 + 4LL));
              v50 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v10 + 32LL);
              if ( v50 == CDrawingContext::DrawImage )
              {
                v51 = CDrawingContext::DrawImage(v10);
              }
              else if ( (char *)v50 == (char *)COcclusionContext::DrawImage )
              {
                v51 = COcclusionContext::DrawImage(v10, v49, v77, 0LL);
              }
              else
              {
                v51 = ((__int64 (__fastcall *)(CDrawingContext *, __int64, _DWORD *, _QWORD))v50)(v10, v49, v77, 0LL);
              }
              v11 = v51;
              if ( v51 >= 0 )
                break;
              v61 = 558;
              goto LABEL_124;
            case 0x158u:
              v36 = *(struct CTransform **)(v64 + 8LL * *(unsigned int *)(*(_QWORD *)v62 + 4LL));
              v37 = *(__int64 (__fastcall **)(CDrawingContext *__hidden, struct CTransform *))(*(_QWORD *)v10 + 120LL);
              if ( v37 == CDrawingContext::PushTransform )
              {
                v38 = CDrawingContext::PushTransform(v10, v36);
              }
              else if ( v37 == COcclusionContext::PushTransform )
              {
                v38 = COcclusionContext::PushTransform(v10, v36);
              }
              else
              {
                v38 = v37(v10, v36);
              }
              v11 = v38;
              if ( v38 < 0 )
              {
                v61 = 639;
                goto LABEL_124;
              }
              v63 = ++v8;
              break;
            case 0x159u:
              if ( v8 <= 0 )
              {
                v59 = CRenderData::EndBoundingFrame(this, &v63, &v74, &v73, a2);
                v11 = v59;
                if ( v59 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x29Bu);
                  goto LABEL_8;
                }
                v10 = v73;
                v8 = v63;
              }
              else
              {
                v39 = *(_QWORD *)v10;
                v63 = --v8;
                v40 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(v39 + 112);
                if ( v40 == CDrawingContext::Pop )
                {
                  v41 = CDrawingContext::Pop(v10);
                }
                else if ( v40 == COcclusionContext::Pop )
                {
                  v41 = COcclusionContext::Pop(v10);
                }
                else
                {
                  v41 = v40(v10);
                }
                v11 = v41;
                if ( v41 < 0 )
                {
                  v61 = 659;
                  goto LABEL_124;
                }
              }
              break;
            default:
              goto LABEL_38;
          }
        }
        if ( v11 == 1 )
          goto LABEL_7;
LABEL_38:
        v11 = -2147467259;
        v29 = (unsigned __int64)&v67[v72 - (_QWORD)v71];
        if ( v29 )
        {
          if ( v29 >= 8 )
          {
            v31 = *(unsigned int *)v71;
            if ( (unsigned int)v31 >= 8 && (v31 & 3) == 0 && v31 <= v29 )
            {
              v66 = *((_DWORD *)v71 + 1);
              *(_QWORD *)v62 = v71 + 4;
              v11 = 0;
              v65 = v71 + 4;
              v71 += (unsigned int)v31;
            }
          }
        }
        else
        {
          *(_QWORD *)v62 = 0LL;
          v11 = 1;
          v65 = 0LL;
          v30 = (struct _LIST_ENTRY *)*((_QWORD *)p_Blink + 1);
          if ( v30 != v2 )
          {
            CDataBlockReader::SetCurrentBlock((CDataBlockReader *)&v68, v30);
            NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v70, &v66, &v65, v62);
            v2 = v68;
            v11 = NextItemSafe;
            p_Blink = v69;
            if ( NextItemSafe == 1 && *((struct _LIST_ENTRY **)v69 + 1) != v68 )
              v11 = -2147467259;
            v67 = v70;
            *(_QWORD *)v62 = v65;
          }
        }
        if ( v11 < 0 )
        {
          v61 = 693;
          goto LABEL_124;
        }
        if ( v11 )
          goto LABEL_6;
      }
      v61 = 482;
LABEL_124:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v61);
    }
LABEL_8:
    if ( v74 )
      CRenderDataDrawFrame::Release(v74);
  }
  return (unsigned int)v11;
}
