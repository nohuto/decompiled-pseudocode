/*
 * XREFs of ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801A6C4C
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801A70E4 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@IPEAV2@@Z @ 0x180131CB8 (-GetOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     Template_qdffff @ 0x1801464EC (Template_qdffff.c)
 *     Template_xqq @ 0x180146618 (Template_xqq.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A40A8 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderDirtyRegion(
        CHolographicInteropTarget *this,
        struct CHolographicInteropTexture *a2,
        struct CVisualTree *a3,
        const struct CDirtyRegion *a4,
        unsigned int a5,
        struct IRenderTargetBitmap *a6,
        struct CDrawingContext *a7)
{
  unsigned int v7; // edi
  char *v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // rbx
  char v13; // dl
  __int64 v14; // rcx
  struct CHolographicInteropTexture *v15; // r13
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  __int128 v22; // xmm0
  char *v23; // r14
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // r15d
  unsigned int *v27; // r14
  const __m128i *v28; // r13
  __m128 v29; // xmm6
  unsigned __int32 v30; // xmm7_4
  unsigned __int32 v31; // xmm8_4
  unsigned __int32 v32; // xmm9_4
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  char v37; // [rsp+68h] [rbp-A0h]
  char v38; // [rsp+6Ch] [rbp-9Ch]
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  struct CVisualTree *v40; // [rsp+78h] [rbp-90h]
  struct CHolographicInteropTexture *v41; // [rsp+80h] [rbp-88h]
  __m128 v42; // [rsp+88h] [rbp-80h] BYREF
  __int128 v43; // [rsp+98h] [rbp-70h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v45[16]; // [rsp+B8h] [rbp-50h] BYREF
  int v46[4]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v47[8]; // [rsp+148h] [rbp+40h] BYREF

  v7 = 0;
  v40 = a3;
  v41 = a2;
  *(_QWORD *)&v43 = a6;
  if ( a4 )
    v10 = (char *)a4 + (*((_BYTE *)a4 + 2724) != 0 ? 0x6D4 : 0) + 960;
  else
    v10 = 0LL;
  if ( a4 )
    v11 = *((_DWORD *)a4 + 280);
  else
    v11 = 0;
  v12 = 0LL;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v46,
    16LL,
    8LL,
    (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  v39 = 0LL;
  v13 = *((_BYTE *)v41 + 112);
  v38 = v13;
  v37 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 151LL);
  if ( a4 )
  {
    if ( *((_BYTE *)a4 + 2724) )
      v13 = 1;
    v38 = v13;
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v43 + 64LL))(v43, &v44);
  v15 = v41;
  v16 = (float)*((int *)v41 + 34);
  v17 = (float)*((int *)v41 + 33);
  v18 = *((float *)&v44 + 1) + v16;
  v19 = *(float *)&v44 + v17;
  v20 = *((float *)&v44 + 2) + v17;
  v21 = *((float *)&v44 + 3) + v16;
  *((float *)&v44 + 1) = *((float *)&v44 + 1) + v16;
  *(float *)&v44 = *(float *)&v44 + v17;
  *((float *)&v44 + 2) = *((float *)&v44 + 2) + v17;
  *((float *)&v44 + 3) = *((float *)&v44 + 3) + v16;
  if ( v38 )
  {
    v22 = v44;
    LODWORD(v12) = 1;
    v47[0] = 0;
    *((_BYTE *)v41 + 112) = 0;
    *(_OWORD *)v46 = v22;
  }
  else
  {
    v14 = 0LL;
    if ( v11 )
    {
      v23 = v10 + 8;
      do
      {
        v43 = *(_OWORD *)(v23 - 8);
        *(_OWORD *)&v46[4 * (unsigned int)v12] = v43;
        if ( v19 > *(float *)&v46[4 * (unsigned int)v12] )
          *(float *)&v46[4 * (unsigned int)v12] = v19;
        if ( v18 > *(float *)&v46[4 * (unsigned int)v12 + 1] )
          *(float *)&v46[4 * (unsigned int)v12 + 1] = v18;
        if ( *(float *)&v46[4 * (unsigned int)v12 + 2] > v20 )
          *(float *)&v46[4 * (unsigned int)v12 + 2] = v20;
        if ( *(float *)&v46[4 * (unsigned int)v12 + 3] > v21 )
          *(float *)&v46[4 * (unsigned int)v12 + 3] = v21;
        if ( *(float *)&v46[4 * (unsigned int)v12 + 2] <= *(float *)&v46[4 * (unsigned int)v12]
          || *(float *)&v46[4 * (unsigned int)v12 + 3] <= *(float *)&v46[4 * (unsigned int)v12 + 1] )
        {
          *(_QWORD *)&v46[4 * (unsigned int)v12 + 2] = 0LL;
          *(_QWORD *)&v46[4 * (unsigned int)v12] = 0LL;
        }
        else
        {
          v47[v12] = v14;
          v12 = (unsigned int)(v12 + 1);
        }
        v14 = (unsigned int)(v14 + 1);
        v23 += 16;
      }
      while ( (unsigned int)v14 < v11 );
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq(v14, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (__int64)a7, 0, v12);
  if ( (_DWORD)v12 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xd(v14, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (__int64)a7, 0);
    CDrawingContext::CalculateOcclusion(a7, v40, v12, (__int64)v46, 0, &v39);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xd(v14, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (__int64)a7, 0);
    if ( v37 )
    {
      v24 = CDrawingContext::Clear((CD2DContext **)a7, &stru_1801FC928);
      v7 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x218u);
        return v7;
      }
      CHolographicInteropTexture::NotifyRenderedRect((__int64)v15, v25, (float *)&v44);
      LODWORD(v12) = 0;
    }
    v26 = 0;
    if ( (_DWORD)v12 )
    {
      v27 = v47;
      v28 = (const __m128i *)v46;
      do
      {
        v29 = (__m128)_mm_loadu_si128(v28);
        LODWORD(v43) = v29.m128_i32[0];
        v30 = _mm_shuffle_ps(v29, v29, 85).m128_u32[0];
        v31 = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
        v32 = _mm_shuffle_ps(v29, v29, 255).m128_u32[0];
        *(_QWORD *)((char *)&v43 + 4) = __PAIR64__(v31, v30);
        HIDWORD(v43) = v32;
        v42 = v29;
        if ( !v38 && v39 )
        {
          v43 = *(_OWORD *)CDirtyRegion::GetOccludedDirtyRegion(
                             (__int64)a4,
                             (__int64)v45,
                             v39,
                             v40,
                             *v27,
                             (float *)&v44);
          LOBYTE(v32) = BYTE12(v43);
          LOBYTE(v31) = BYTE8(v43);
          LOBYTE(v30) = BYTE4(v43);
          v29.m128_i8[0] = v43;
        }
        if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v43) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
            Template_qdffff(v14, &EVTDESC_ETWGUID_DIRTYREGIONEVENT, *v27, v33, v29.m128_i8[0], v30, v31, v32);
          v34 = CDrawingContext::DrawVisualTree(
                  a7,
                  (__int64)v40,
                  (__int128 *)&v42,
                  0LL,
                  0x7FFFFFFF,
                  0,
                  0,
                  v39 != 0,
                  0,
                  1,
                  0);
          v7 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x252u);
            return v7;
          }
          CHolographicInteropTexture::NotifyRenderedRect((__int64)v41, v35, (float *)&v43);
        }
        ++v26;
        ++v28;
        ++v27;
      }
      while ( v26 < (unsigned int)v12 );
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_x(v14, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a7);
  return v7;
}
