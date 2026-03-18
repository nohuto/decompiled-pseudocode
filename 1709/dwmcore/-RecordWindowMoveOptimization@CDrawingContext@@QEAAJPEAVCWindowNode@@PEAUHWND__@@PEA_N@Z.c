/*
 * XREFs of ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18003B1F4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x18003BCDC (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18003CBD8 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013C240 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18013C47C (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x18013D62C (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18013DB40 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     McTemplateU0xff @ 0x18013F758 (McTemplateU0xff.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18014E320 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014FBA0 (-GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180177108 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x180177FBC (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180193F5C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDrawingContext::RecordWindowMoveOptimization(
        CDrawingContext *this,
        struct CWindowNode *a2,
        HWND a3,
        bool *a4)
{
  signed int v7; // edi
  HRGN v8; // r14
  int v10; // ebx
  __int64 v11; // rcx
  int LocalToWorldTransform; // eax
  const struct CMILMatrix *v13; // r8
  CDrawingContext *v14; // rcx
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rbx
  unsigned int v16; // ebx
  unsigned int v17; // r15d
  int v18; // xmm7_4
  int v19; // ecx
  int v20; // r9d
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  HRGN RectRgn; // rbx
  signed int LastError; // eax
  int v27; // edx
  unsigned int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  signed int v31; // eax
  int v32; // edx
  unsigned int v33; // ecx
  int v34; // r8d
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  int v38; // eax
  CMILCOMBase *v39; // rbx
  int v40; // eax
  unsigned int v41; // [rsp+28h] [rbp-E0h]
  bool v42[8]; // [rsp+48h] [rbp-C0h] BYREF
  CMILCOMBase *v43; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v44[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v45; // [rsp+98h] [rbp-70h]
  _OWORD v46[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v47; // [rsp+E8h] [rbp-20h]
  _OWORD v48[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v49; // [rsp+138h] [rbp+30h]
  unsigned __int64 v50; // [rsp+148h] [rbp+40h] BYREF
  float v51; // [rsp+150h] [rbp+48h]
  float v52; // [rsp+154h] [rbp+4Ch]
  struct MilRectF *v53; // [rsp+158h] [rbp+50h] BYREF
  float v54; // [rsp+160h] [rbp+58h]
  float v55; // [rsp+164h] [rbp+5Ch]

  v7 = 0;
  v43 = 0LL;
  v8 = 0LL;
  v42[0] = 0;
  if ( !*((_BYTE *)this + 6828) )
    goto LABEL_2;
  v10 = *(_DWORD *)(*((_QWORD *)this + 4) + 1160LL);
  v47 = 0;
  v44[0] = _xmm;
  v45 = 32085;
  v44[1] = _xmm;
  v44[2] = _xmm;
  v44[3] = _xmm;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v46);
  if ( v10 >= 2 )
  {
    v11 = *((_QWORD *)this + 47);
    if ( v11 )
    {
      LocalToWorldTransform = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v11 + 264LL))(
                                v11,
                                &v50);
      v7 = LocalToWorldTransform;
      if ( LocalToWorldTransform < 0 )
      {
        v41 = 7170;
LABEL_61:
        v30 = LocalToWorldTransform;
        goto LABEL_62;
      }
      CMILMatrix::Translate((CMILMatrix *)v44, (float)-(int)v50, (float)-HIDWORD(v50));
    }
  }
  v13 = (const struct CMILMatrix *)v44;
  v48[0] = v46[0];
  v48[1] = v46[1];
  if ( v10 < 2 )
    v13 = 0LL;
  v49 = v47;
  v48[2] = v46[2];
  v48[3] = v46[3];
  LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                            a2,
                            (const struct CMILMatrix *)v46,
                            v13,
                            v42,
                            (struct CMILMatrix *)v48,
                            this);
  v7 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v41 = 7186;
    goto LABEL_61;
  }
  if ( !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(this) )
    goto LABEL_2;
  if ( *((_BYTE *)this + 6605) )
    goto LABEL_2;
  if ( CDrawingContext::IsInLayer(v14) )
    goto LABEL_2;
  if ( !v42[0] )
    goto LABEL_2;
  v53 = 0LL;
  MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(a2, this);
  CMoveRenderPassInfo::ResetVisibleRegion(MoveRenderPassInfoRef);
  v8 = (HRGN)*((_QWORD *)MoveRenderPassInfoRef + 2);
  *((_QWORD *)MoveRenderPassInfoRef + 2) = 0LL;
  if ( !v8 )
    goto LABEL_2;
  v42[1] = 0;
  if ( CWindowNode::GetWindowNodeDirtyRects(a2, &v50, (unsigned int *)&v42[4], &v53)
    && *(_QWORD *)(*((_QWORD *)this + 4) + 360LL) == v50 )
  {
    v16 = 0;
    v17 = *(_DWORD *)&v42[4];
    if ( *(_DWORD *)&v42[4] )
    {
      while ( 1 )
      {
        LocalToWorldTransform = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                                  this,
                                  (char *)v53 + 16 * v16,
                                  v48,
                                  v8);
        v7 = LocalToWorldTransform;
        if ( LocalToWorldTransform < 0 )
          break;
        if ( ++v16 >= v17 )
          goto LABEL_24;
      }
      v41 = 7230;
      goto LABEL_61;
    }
  }
LABEL_24:
  LocalToWorldTransform = CDwmMetaRegion::GetMaxRectFromRegion(v8, &v42[1], &v50);
  v7 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v41 = 7236;
    goto LABEL_61;
  }
  if ( v42[1] )
  {
    v18 = *((_DWORD *)CVisual::GetMoveRenderPassInfoRef(a2, this) + 15);
    CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)this + 1008), 1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xff(v19, (unsigned int)&MILEVENT_MEDIA_UCE_WINDOW_MOVE_DETECTED, (_DWORD)a2, v20, v18);
    v21 = *(float *)&v50;
    if ( *(float *)&v53 > *(float *)&v50 )
    {
      LODWORD(v50) = (_DWORD)v53;
      v21 = *(float *)&v53;
    }
    v22 = *((float *)&v50 + 1);
    if ( *((float *)&v53 + 1) > *((float *)&v50 + 1) )
    {
      HIDWORD(v50) = HIDWORD(v53);
      v22 = *((float *)&v53 + 1);
    }
    v23 = v51;
    if ( v51 > v54 )
    {
      v23 = v54;
      v51 = v54;
    }
    v24 = v52;
    if ( v52 > v55 )
    {
      v24 = v55;
      v52 = v55;
    }
    if ( v23 > v21 && v24 > v22 )
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
          v7 = CheckGUIHandleQuota(v28, v27, v29);
        v41 = 7259;
LABEL_47:
        v30 = v7;
LABEL_62:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, v41);
        goto LABEL_2;
      }
      SetLastError(0);
      if ( !CombineRgn(RectRgn, RectRgn, v8, 2) )
      {
        v31 = GetLastError();
        v7 = v31;
        if ( v31 > 0 )
          v7 = (unsigned __int16)v31 | 0x80070000;
        if ( v7 >= 0 )
          v7 = CheckGUIHandleQuota(v33, v32, v34);
        v41 = 7264;
        goto LABEL_47;
      }
      v35 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 272LL))(*((_QWORD *)this + 47));
      v38 = MoveOptimizationInfo::Create((_DWORD)a2, v36, v37, (unsigned int)&v50, (__int64)RectRgn, v35, (__int64)&v43);
      v39 = v43;
      v7 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x1C6Au);
      }
      else
      {
        v40 = CDrawingContext::CombineMove(this, v43, &v53);
        v7 = v40;
        if ( v40 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x1C70u);
      }
      if ( v39 )
        CMILCOMBase::InternalRelease(v39);
    }
  }
LABEL_2:
  if ( a4 )
    *a4 = v42[0];
  if ( v8 )
    DeleteObject(v8);
  return (unsigned int)v7;
}
