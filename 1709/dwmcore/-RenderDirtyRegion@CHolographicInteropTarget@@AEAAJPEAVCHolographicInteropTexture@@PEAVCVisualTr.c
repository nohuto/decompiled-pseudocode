/*
 * XREFs of ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801C1C3C
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801C20EC (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180042C58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180042E90 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIPEAV2@@Z @ 0x18011B9E8 (-GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     McTemplateU0qdffff @ 0x180136B6C (McTemplateU0qdffff.c)
 *     McTemplateU0xqq @ 0x180136C98 (McTemplateU0xqq.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BEA28 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderDirtyRegion(
        CHolographicInteropTarget *this,
        struct CHolographicInteropTexture *a2,
        struct CVisualTree *a3,
        const struct CDirtyRegion *a4,
        unsigned int a5,
        struct IRenderTargetBitmap *a6,
        struct CComposition **a7)
{
  unsigned int v7; // esi
  char *v10; // rbx
  unsigned int v11; // r15d
  __int64 v12; // rdi
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
  char *v23; // rbx
  __int64 v24; // rcx
  signed int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // r15d
  unsigned int *v28; // rbx
  const __m128i *v29; // r13
  __m128 v30; // xmm6
  unsigned __int32 v31; // xmm7_4
  unsigned __int32 v32; // xmm8_4
  unsigned __int32 v33; // xmm9_4
  __int64 v34; // rcx
  __int64 v35; // r9
  signed int v36; // eax
  __int64 v37; // rdx
  char v39; // [rsp+68h] [rbp-A0h]
  char v40; // [rsp+6Ch] [rbp-9Ch]
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  struct CVisualTree *v42; // [rsp+78h] [rbp-90h]
  struct CHolographicInteropTexture *v43; // [rsp+80h] [rbp-88h]
  __m128 v44; // [rsp+88h] [rbp-80h] BYREF
  __int128 v45; // [rsp+98h] [rbp-70h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v47[16]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v48[8]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v49[8]; // [rsp+148h] [rbp+40h] BYREF

  v7 = 0;
  v42 = a3;
  v43 = a2;
  *(_QWORD *)&v45 = a6;
  if ( a4 )
    v10 = (char *)a4 + (*((_BYTE *)a4 + 2722) != 0 ? 2700LL : 956LL);
  else
    v10 = 0LL;
  if ( a4 )
    v11 = *((_DWORD *)a4 + 279);
  else
    v11 = 0;
  v12 = 0LL;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v48,
    16LL,
    8LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  v41 = 0LL;
  v13 = *((_BYTE *)v43 + 120);
  v40 = v13;
  v39 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 148LL);
  if ( a4 )
  {
    if ( *((_BYTE *)a4 + 2722) )
      v13 = 1;
    v40 = v13;
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v45 + 48LL))(v45, &v46);
  v15 = v43;
  v16 = (float)*((int *)v43 + 36);
  v17 = (float)*((int *)v43 + 35);
  v18 = *((float *)&v46 + 1) + v16;
  v19 = *(float *)&v46 + v17;
  v20 = *((float *)&v46 + 2) + v17;
  v21 = *((float *)&v46 + 3) + v16;
  *((float *)&v46 + 1) = *((float *)&v46 + 1) + v16;
  *(float *)&v46 = *(float *)&v46 + v17;
  *((float *)&v46 + 2) = *((float *)&v46 + 2) + v17;
  *((float *)&v46 + 3) = *((float *)&v46 + 3) + v16;
  if ( v40 )
  {
    v22 = v46;
    LODWORD(v12) = 1;
    v49[0] = 0;
    *((_BYTE *)v43 + 120) = 0;
    v48[0] = v22;
  }
  else
  {
    v14 = 0LL;
    if ( v11 )
    {
      v23 = v10 + 8;
      do
      {
        v45 = *(_OWORD *)(v23 - 8);
        v48[(unsigned int)v12] = v45;
        if ( v19 > *(float *)&v48[(unsigned int)v12] )
          *(float *)&v48[(unsigned int)v12] = v19;
        if ( v18 > *((float *)&v48[(unsigned int)v12] + 1) )
          *((float *)&v48[(unsigned int)v12] + 1) = v18;
        if ( *((float *)&v48[(unsigned int)v12] + 2) > v20 )
          *((float *)&v48[(unsigned int)v12] + 2) = v20;
        if ( *((float *)&v48[(unsigned int)v12] + 3) > v21 )
          *((float *)&v48[(unsigned int)v12] + 3) = v21;
        if ( *((float *)&v48[(unsigned int)v12] + 2) <= *(float *)&v48[(unsigned int)v12]
          || *((float *)&v48[(unsigned int)v12] + 3) <= *((float *)&v48[(unsigned int)v12] + 1) )
        {
          *((_QWORD *)&v48[(unsigned int)v12] + 1) = 0LL;
          *(_QWORD *)&v48[(unsigned int)v12] = 0LL;
        }
        else
        {
          v49[v12] = v14;
          v12 = (unsigned int)(v12 + 1);
        }
        v14 = (unsigned int)(v14 + 1);
        v23 += 16;
      }
      while ( (unsigned int)v14 < v11 );
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(v14, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (__int64)a7, 0, v12);
  if ( (_DWORD)v12 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v14, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (__int64)a7, 0);
    CDrawingContext::CalculateOcclusion(a7, v42, (unsigned int)v12, (__int64)v48, 0, 0, &v41);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v24, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (__int64)a7, 0);
    if ( v39 )
    {
      v25 = CDrawingContext::Clear(a7, &stru_180219A30);
      v7 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0x1F9u);
        return v7;
      }
      CHolographicInteropTexture::NotifyRenderedRect((__int64)v15, v26, (float *)&v46);
      LODWORD(v12) = 0;
    }
    v27 = 0;
    if ( (_DWORD)v12 )
    {
      v28 = v49;
      v29 = (const __m128i *)v48;
      do
      {
        v30 = (__m128)_mm_loadu_si128(v29);
        LODWORD(v45) = v30.m128_i32[0];
        v31 = _mm_shuffle_ps(v30, v30, 85).m128_u32[0];
        v32 = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
        v33 = _mm_shuffle_ps(v30, v30, 255).m128_u32[0];
        *(_QWORD *)((char *)&v45 + 4) = __PAIR64__(v32, v31);
        HIDWORD(v45) = v33;
        v44 = v30;
        if ( !v40 && v41 )
        {
          v45 = *(_OWORD *)CDirtyRegion::GetUnOccludedDirtyRegion(
                             (__int64)a4,
                             (__int64)v47,
                             v41,
                             v42,
                             0,
                             *v28,
                             (__int64)&v46);
          LOBYTE(v33) = BYTE12(v45);
          LOBYTE(v32) = BYTE8(v45);
          LOBYTE(v31) = BYTE4(v45);
          v30.m128_i8[0] = v45;
        }
        if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v45) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
            McTemplateU0qdffff(v34, &EVTDESC_ETWGUID_DIRTYREGIONEVENT, *v28, v35, v30.m128_i8[0], v31, v32, v33);
          v36 = CDrawingContext::DrawVisualTree(
                  (CDrawingContext *)a7,
                  (__int64)v42,
                  &v44,
                  0LL,
                  0x7FFFFFFF,
                  1,
                  0,
                  v41 != 0,
                  0,
                  1,
                  0,
                  0);
          v7 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, 0x232u);
            return v7;
          }
          CHolographicInteropTexture::NotifyRenderedRect((__int64)v43, v37, (float *)&v45);
        }
        ++v27;
        ++v29;
        ++v28;
      }
      while ( v27 < (unsigned int)v12 );
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop,
      (__int64)a7);
  return v7;
}
