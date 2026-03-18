/*
 * XREFs of ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006B178
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180008128 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18013D170 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015E9B0 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18015EBEC (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x180160F94 (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x180161B58 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     McTemplateU0xff @ 0x180163680 (McTemplateU0xff.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180177BB0 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801793E4 (-GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801A787C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x1801A8D98 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801CD110 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDrawingContext::RecordWindowMoveOptimization(
        CDrawingContext *this,
        struct CWindowNode *a2,
        HWND a3,
        bool *a4)
{
  signed int v7; // edi
  HRGN v8; // r14
  const struct CMILMatrix *v10; // r8
  int v11; // r10d
  int LocalToWorldTransform; // eax
  CDrawingContext *v13; // rcx
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rbx
  unsigned int v15; // ebx
  unsigned int v16; // r12d
  int v17; // xmm7_4
  int v18; // ecx
  int v19; // r9d
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  HRGN RectRgn; // rbx
  signed int LastError; // eax
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // edx
  int v31; // r8d
  signed int v32; // eax
  int v33; // edx
  unsigned int v34; // ecx
  int v35; // r8d
  int v36; // eax
  CMILCOMBase *v37; // rbx
  int v38; // eax
  unsigned int v39; // [rsp+28h] [rbp-E0h]
  int v40; // [rsp+30h] [rbp-D8h]
  bool v41[8]; // [rsp+48h] [rbp-C0h] BYREF
  CMILCOMBase *v42; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v43[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v44; // [rsp+98h] [rbp-70h]
  _OWORD v45[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v46; // [rsp+E8h] [rbp-20h]
  _OWORD v47[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v48; // [rsp+138h] [rbp+30h]
  unsigned __int64 v49; // [rsp+148h] [rbp+40h] BYREF
  float v50; // [rsp+150h] [rbp+48h]
  float v51; // [rsp+154h] [rbp+4Ch]
  struct MilRectF *v52; // [rsp+158h] [rbp+50h] BYREF
  float v53; // [rsp+160h] [rbp+58h]
  float v54; // [rsp+164h] [rbp+5Ch]

  v7 = 0;
  v42 = 0LL;
  v8 = 0LL;
  v41[0] = 0;
  if ( !*((_BYTE *)this + 6828) )
    goto LABEL_2;
  v44 = 0;
  v45[0] = _xmm;
  v46 = 32085;
  v45[1] = _xmm;
  v45[2] = _xmm;
  v45[3] = _xmm;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v43);
  v10 = (const struct CMILMatrix *)v45;
  v47[0] = v43[0];
  v47[1] = v43[1];
  if ( v11 < 2 )
    v10 = 0LL;
  v48 = v44;
  v47[2] = v43[2];
  v47[3] = v43[3];
  LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                            a2,
                            (const struct CMILMatrix *)v43,
                            v10,
                            v41,
                            (struct CMILMatrix *)v47,
                            this);
  v7 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v39 = 7448;
    goto LABEL_56;
  }
  if ( !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(this) )
    goto LABEL_2;
  if ( *((_BYTE *)this + 6605) )
    goto LABEL_2;
  if ( CDrawingContext::IsInLayer(v13) )
    goto LABEL_2;
  if ( !v41[0] )
    goto LABEL_2;
  v52 = 0LL;
  MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(a2, this);
  CMoveRenderPassInfo::ResetVisibleRegion(MoveRenderPassInfoRef);
  v8 = (HRGN)*((_QWORD *)MoveRenderPassInfoRef + 2);
  *((_QWORD *)MoveRenderPassInfoRef + 2) = 0LL;
  if ( !v8 )
    goto LABEL_2;
  v41[1] = 0;
  if ( CWindowNode::GetWindowNodeDirtyRects(a2, &v49, (unsigned int *)&v41[4], &v52)
    && *(_QWORD *)(*((_QWORD *)this + 4) + 384LL) == v49 )
  {
    v15 = 0;
    v16 = *(_DWORD *)&v41[4];
    if ( *(_DWORD *)&v41[4] )
    {
      while ( 1 )
      {
        LocalToWorldTransform = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                                  this,
                                  (char *)v52 + 16 * v15,
                                  v47,
                                  v8);
        v7 = LocalToWorldTransform;
        if ( LocalToWorldTransform < 0 )
          break;
        if ( ++v15 >= v16 )
          goto LABEL_20;
      }
      v39 = 7492;
      goto LABEL_56;
    }
  }
LABEL_20:
  LocalToWorldTransform = CDwmMetaRegion::GetMaxRectFromRegion(v8, &v41[1], &v49);
  v7 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v39 = 7498;
LABEL_56:
    v29 = LocalToWorldTransform;
    goto LABEL_57;
  }
  if ( v41[1] )
  {
    v17 = *((_DWORD *)CVisual::GetMoveRenderPassInfoRef(a2, this) + 15);
    CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)&v52);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xff(v18, (unsigned int)&MILEVENT_MEDIA_UCE_WINDOW_MOVE_DETECTED, (_DWORD)a2, v19, v17);
    v20 = *(float *)&v49;
    if ( *(float *)&v52 > *(float *)&v49 )
    {
      LODWORD(v49) = (_DWORD)v52;
      v20 = *(float *)&v52;
    }
    v21 = *((float *)&v49 + 1);
    if ( *((float *)&v52 + 1) > *((float *)&v49 + 1) )
    {
      HIDWORD(v49) = HIDWORD(v52);
      v21 = *((float *)&v52 + 1);
    }
    v22 = v50;
    if ( v50 > v53 )
    {
      v50 = v53;
      v22 = v53;
    }
    v23 = v51;
    if ( v51 > v54 )
    {
      v51 = v54;
      v23 = v54;
    }
    if ( v22 > v20 && v23 > v21 )
    {
      SetLastError(0);
      RectRgn = CreateRectRgn(0, 0, 0, 0);
      if ( !RectRgn )
      {
        LastError = GetLastError();
        v7 = LastError;
        if ( LastError > 0 )
          v7 = (unsigned __int16)LastError | 0x80070000;
        if ( v7 >= 0 )
          v7 = CheckGUIHandleQuota(v27, v26, v28);
        v39 = 7520;
LABEL_42:
        v29 = v7;
LABEL_57:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, v39);
        goto LABEL_2;
      }
      SetLastError(0);
      if ( !CombineRgn(RectRgn, RectRgn, v8, 2) )
      {
        v32 = GetLastError();
        v7 = v32;
        if ( v32 > 0 )
          v7 = (unsigned __int16)v32 | 0x80070000;
        if ( v7 >= 0 )
          v7 = CheckGUIHandleQuota(v34, v33, v35);
        v39 = 7525;
        goto LABEL_42;
      }
      v36 = MoveOptimizationInfo::Create((_DWORD)a2, v30, v31, (unsigned int)&v49, (__int64)RectRgn, v40, (__int64)&v42);
      v37 = v42;
      v7 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x1D6Du);
      }
      else
      {
        v38 = CDrawingContext::CombineMove(this, v42, &v52);
        v7 = v38;
        if ( v38 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x1D73u);
      }
      if ( v37 )
        CMILCOMBase::InternalRelease(v37);
    }
  }
LABEL_2:
  if ( a4 )
    *a4 = v41[0];
  if ( v8 )
    DeleteObject(v8);
  return (unsigned int)v7;
}
