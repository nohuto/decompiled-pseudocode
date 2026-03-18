/*
 * XREFs of ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047A70 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1800121E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@@@Z @ 0x180046C48 (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@QEAAXVDisplayId@@@Z @ 0x180047400 (-SetDisplayId@CRenderTargetBitmap@@QEAAXVDisplayId@@@Z.c)
 *     ?GetBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180047428 (-GetBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x180048068 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x18007D63C (-CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A0FE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B4250 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4E20 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B6B98 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18012B740 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     Template_ppffffdd @ 0x180165D58 (Template_ppffffdd.c)
 */

__int64 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Update(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5)
{
  unsigned int v7; // edi
  char v8; // r15
  CCachedVisualImage *v9; // rcx
  char v10; // r13
  int v11; // eax
  float v12; // xmm2_4
  float v13; // xmm0_4
  int v14; // eax
  int v15; // eax
  CDrawingContext *v16; // r14
  __int64 v17; // r10
  __int128 *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax
  int v23; // eax
  int Bounds; // eax
  char IsEmpty; // al
  __int64 v26; // rdx
  int v27; // eax
  char v28; // bl
  int v29; // eax
  int v30; // eax
  char v31; // al
  bool v32; // al
  float v34; // [rsp+64h] [rbp-9Ch] BYREF
  float v35; // [rsp+68h] [rbp-98h] BYREF
  float v36; // [rsp+6Ch] [rbp-94h] BYREF
  CDrawingContext *v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h]
  __int128 v41; // [rsp+A0h] [rbp-60h]
  __int128 v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+C0h] [rbp-40h]
  __int128 v44; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v45; // [rsp+E0h] [rbp-20h]
  __int128 v46; // [rsp+F0h] [rbp-10h]
  __int128 v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+110h] [rbp+10h]
  _DWORD v49[10]; // [rsp+118h] [rbp+18h] BYREF
  int v50; // [rsp+140h] [rbp+40h] BYREF
  float v51; // [rsp+144h] [rbp+44h]
  float v52; // [rsp+148h] [rbp+48h]
  float v53; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v54[24]; // [rsp+150h] [rbp+50h] BYREF

  v7 = 0;
  if ( !a4 || (v8 = 1, !*(_BYTE *)(*(_QWORD *)a1 + 321LL)) )
    v8 = 0;
  v37 = 0LL;
  CCachedVisualImage::RenderTargetBitmapInfo::UpdateViewbox(a1, a2, a5);
  if ( *((_BYTE *)a1 + 44) || v8 )
  {
    v9 = *(CCachedVisualImage **)a1;
    v10 = 0;
    v43 = 0;
    v11 = CCachedVisualImage::EnsureVisualTree(v9);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2FEu);
      return v7;
    }
    CRenderTargetBitmap::GetBounds(*((_QWORD *)a1 + 1), &v50);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    {
      v12 = *((float *)a1 + 9) - *((float *)a1 + 7);
      v13 = *((float *)a1 + 8) - *((float *)a1 + 6);
      Template_ppffffdd(
        *a1 + 16,
        (int)(float)(v52 - *(float *)&v50),
        *(_QWORD *)a1 != 0LL ? *a1 + 16 : 0,
        *(_QWORD *)(*(_QWORD *)a1 + 136LL),
        a1[6],
        a1[7],
        SLOBYTE(v13),
        SLOBYTE(v12),
        (int)(float)(v52 - *(float *)&v50),
        (int)(float)(v53 - v51));
    }
    v14 = CVisualTree::PreCompute(*(CVisualTree **)(*(_QWORD *)a1 + 176LL));
    v7 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x310u);
      return v7;
    }
    v15 = CDrawingContext::Create(*(struct CComposition **)(*(_QWORD *)a1 + 32LL), &v37);
    v16 = v37;
    v7 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x316u);
    }
    else
    {
      CTileBrushUtils::CalculateViewboxToViewportMapping(
        (unsigned int)&v50,
        (_DWORD)a1 + 24,
        a1[10],
        0,
        0,
        (__int64)v39);
      v17 = *(_QWORD *)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 322LL)
        && CVisual::GetEffectiveOffset(*(CVisual **)(*(_QWORD *)(v17 + 176) + 24LL), &v35, &v34, &v36) )
      {
        CMILMatrix::PrependTranslate(
          (CMILMatrix *)v39,
          COERCE_FLOAT(LODWORD(v35) ^ _xmm),
          COERCE_FLOAT(LODWORD(v34) ^ _xmm));
      }
      v18 = *(__int128 **)(v17 + 160);
      if ( v18 )
      {
        v19 = v18[1];
        v44 = *v18;
        v20 = v18[2];
        v45 = v19;
        v21 = v18[3];
        v22 = *((_DWORD *)v18 + 16);
        v46 = v20;
        v48 = v22;
        v47 = v21;
        CMILMatrix::Multiply((CMILMatrix *)&v44, (const struct CMILMatrix *)v39);
        v43 = v48;
        *(_OWORD *)v39 = v44;
        v40 = v45;
        v41 = v46;
        v42 = v47;
      }
      CRenderTargetBitmap::SetDisplayId(*((_QWORD *)a1 + 1), a3);
      v23 = CDrawingContext::BeginFrame(
              v16,
              *(CSwRenderTargetGetBounds **)(*((_QWORD *)a1 + 1) + 120LL),
              (__int64)v39,
              0LL,
              0,
              0LL);
      v7 = v23;
      if ( v23 >= 0 )
      {
        Bounds = CVisualTree::GetBounds(*(_QWORD *)(*(_QWORD *)a1 + 176LL), v54);
        v7 = Bounds;
        if ( Bounds < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x34Bu);
        }
        else
        {
          IsEmpty = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v54);
          v26 = *(_QWORD *)a1;
          if ( IsEmpty )
          {
            v27 = CDrawingContext::Clear((CD2DContext **)v16, (const struct _D3DCOLORVALUE *)(v26 + 328));
            v7 = v27;
            if ( v27 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x34Eu);
            else
              *((_BYTE *)a1 + 44) = 0;
            goto LABEL_40;
          }
          v28 = (*(_BYTE *)(*(_QWORD *)(v26 + 136) + 88LL) & 0x40) != 0
             && (*(float *)v39 < 0.40000001 || *((float *)&v40 + 1) < 0.40000001);
          v38 = 0LL;
          CDrawingContext::CalculateOcclusion(v16, *(struct CVisualTree **)(v26 + 176), 1, (int)&v50, 1, (__int64)&v38);
          if ( (float)(*((float *)a1 + 8) - *((float *)a1 + 6)) <= (float)(v52 - *(float *)&v50)
            && (float)(*((float *)a1 + 9) - *((float *)a1 + 7)) <= (float)(v53 - v51) )
          {
LABEL_31:
            v30 = CDrawingContext::DrawVisualTree(v16, 0x7FFFFFFF, 1, v10, 1, v28, 1, 1);
            v7 = v30;
            if ( v30 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x388u);
            }
            else
            {
              if ( !v8 )
                *(_BYTE *)(*(_QWORD *)a1 + 321LL) = *((_BYTE *)v16 + 6776);
              if ( !*((_BYTE *)v16 + 6778) )
                CRenderTargetBitmap::SetDisplayId(*((_QWORD *)a1 + 1), (unsigned int)DisplayId::None);
              *((_BYTE *)a1 + 44) = v8 != 0;
            }
            goto LABEL_40;
          }
          v49[0] = 3;
          v49[1] = 6;
          v49[4] = 1;
          v29 = CDrawingContext::PushRenderOptionsInternal(v16, 0LL, (const struct MilRenderOptions *)v49, 1);
          v7 = v29;
          if ( v29 >= 0 )
          {
            v10 = 1;
            goto LABEL_31;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x37Au);
        }
LABEL_40:
        v31 = g_LockAndReadD2DTarget;
        if ( g_LockTilingTarget )
          v31 = 1;
        g_LockAndReadD2DTarget = v31;
        CDrawingContext::EndFrame(v16);
        v32 = g_LockAndReadD2DTarget;
        if ( g_LockTilingTarget )
          v32 = 0;
        g_LockAndReadD2DTarget = v32;
        goto LABEL_47;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x345u);
    }
LABEL_47:
    if ( v16 && _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 6, 0xFFFFFFFF) == 1 )
    {
      --*((_DWORD *)v16 + 6);
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v16 + 2) + 24LL))((__int64)v16 + 16, 1LL);
    }
  }
  return v7;
}
