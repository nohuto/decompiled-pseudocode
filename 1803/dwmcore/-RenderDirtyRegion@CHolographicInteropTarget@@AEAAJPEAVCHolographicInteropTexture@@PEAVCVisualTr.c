/*
 * XREFs of ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801FE024
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x1801FE504 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800653F4 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800657F0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x18013E5CC (-GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ @ 0x18014A414 (-GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 *     McTemplateU0qdffff @ 0x180159018 (McTemplateU0qdffff.c)
 *     McTemplateU0xqq @ 0x180159144 (McTemplateU0xqq.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FB588 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderDirtyRegion(
        CHolographicInteropTarget *this,
        struct CHolographicInteropTexture *a2,
        struct CVisualTree *a3,
        const struct CDirtyRegion *a4,
        unsigned int a5,
        unsigned int a6,
        struct IRenderTargetBitmap *a7,
        struct CDrawingContext *a8)
{
  unsigned int v8; // esi
  char *v11; // rbx
  unsigned int v12; // r12d
  __int64 v13; // rdi
  char v14; // dl
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm5_4
  CComposition *v21; // rcx
  __int64 v22; // rcx
  struct CHolographicInteropTexture *v23; // rbx
  unsigned int v24; // r15d
  char *v25; // rbx
  float v26; // xmm0_4
  float v27; // xmm1_4
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  unsigned int *v31; // rbx
  const __m128i *v32; // r12
  __m128 v33; // xmm6
  FLOAT v34; // xmm7_4
  FLOAT v35; // xmm8_4
  FLOAT v36; // xmm9_4
  __int64 v37; // rcx
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  char v42; // [rsp+68h] [rbp-A0h]
  char v44; // [rsp+78h] [rbp-90h]
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  struct CVisualTree *v46; // [rsp+88h] [rbp-80h]
  __m128 v47; // [rsp+90h] [rbp-78h] BYREF
  struct D2D_RECT_F v48; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v49; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v50[24]; // [rsp+C0h] [rbp-48h] BYREF
  _OWORD v51[8]; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD v52[8]; // [rsp+158h] [rbp+50h] BYREF

  v8 = 0;
  v46 = a3;
  *(_QWORD *)&v48.left = a7;
  if ( a4 )
    v11 = (char *)a4 + (*((_BYTE *)a4 + 2883) != 0 ? 2860LL : 1116LL);
  else
    v11 = 0LL;
  if ( a4 )
    v12 = *((_DWORD *)a4 + 319);
  else
    v12 = 0;
  v13 = 0LL;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v51,
    16LL,
    8LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  v45 = 0LL;
  v14 = *((_BYTE *)a2 + 132);
  v44 = v14;
  v42 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 114LL);
  if ( a4 )
  {
    if ( *((_BYTE *)a4 + 2883) )
      v14 = 1;
    v44 = v14;
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)&v48.left + 48LL))(*(_QWORD *)&v48.left, &v49);
  v15 = (float)*((int *)a2 + 39);
  v16 = (float)*((int *)a2 + 38);
  v17 = *((float *)&v49 + 1) + v15;
  v18 = *(float *)&v49 + v16;
  v19 = *((float *)&v49 + 2) + v16;
  v20 = *((float *)&v49 + 3) + v15;
  *((float *)&v49 + 1) = *((float *)&v49 + 1) + v15;
  *(float *)&v49 = *(float *)&v49 + v16;
  *((float *)&v49 + 2) = *((float *)&v49 + 2) + v16;
  *((float *)&v49 + 3) = *((float *)&v49 + 3) + v15;
  if ( v44 )
  {
    v21 = (CComposition *)*((_QWORD *)this + 2);
    LODWORD(v13) = 1;
    v52[0] = 0;
    v51[0] = v49;
    v23 = a2;
    v24 = 0;
    if ( !CComposition::GetStereoscopicContentManager(v21) || a6 )
      *((_BYTE *)a2 + 132) = 0;
  }
  else
  {
    v24 = 0;
    v22 = 0LL;
    if ( v12 )
    {
      v25 = v11 + 8;
      do
      {
        v48 = *(struct D2D_RECT_F *)(v25 - 8);
        v51[(unsigned int)v13] = v48;
        if ( v18 > *(float *)&v51[(unsigned int)v13] )
          *(float *)&v51[(unsigned int)v13] = v18;
        if ( v17 > *((float *)&v51[(unsigned int)v13] + 1) )
          *((float *)&v51[(unsigned int)v13] + 1) = v17;
        v26 = *((float *)&v51[(unsigned int)v13] + 2);
        if ( v26 > v19 )
        {
          *((float *)&v51[(unsigned int)v13] + 2) = v19;
          v26 = v19;
        }
        v27 = *((float *)&v51[(unsigned int)v13] + 3);
        if ( v27 > v20 )
        {
          *((float *)&v51[(unsigned int)v13] + 3) = v20;
          v27 = v20;
          v26 = *((float *)&v51[(unsigned int)v13] + 2);
        }
        if ( v26 <= *(float *)&v51[(unsigned int)v13] || v27 <= *((float *)&v51[(unsigned int)v13] + 1) )
        {
          *((_QWORD *)&v51[(unsigned int)v13] + 1) = 0LL;
          *(_QWORD *)&v51[(unsigned int)v13] = 0LL;
        }
        else
        {
          v52[v13] = v22;
          v13 = (unsigned int)(v13 + 1);
        }
        v22 = (unsigned int)(v22 + 1);
        v25 += 16;
      }
      while ( (unsigned int)v22 < v12 );
      v23 = a2;
    }
    else
    {
      v23 = a2;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(v22, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (__int64)a8, 0, v13);
  if ( (_DWORD)v13 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v22, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (__int64)a8, 0);
    CDrawingContext::CalculateOcclusion(a8, v46, (unsigned int)v13, (__int64)v51, 0, 0, &v45);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v28, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (__int64)a8, 0);
    if ( v42 )
    {
      v29 = CDrawingContext::Clear(a8, &stru_1802AD270);
      v8 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x20Fu);
        return v8;
      }
      CHolographicInteropTexture::NotifyRenderedRect((__int64)v23, v30, a6, (float *)&v49);
      LODWORD(v13) = 0;
    }
    if ( (_DWORD)v13 )
    {
      v31 = v52;
      v32 = (const __m128i *)v51;
      do
      {
        v33 = (__m128)_mm_loadu_si128(v32);
        LODWORD(v48.left) = v33.m128_i32[0];
        LODWORD(v34) = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
        LODWORD(v35) = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
        LODWORD(v36) = _mm_shuffle_ps(v33, v33, 255).m128_u32[0];
        v48.top = v34;
        v48.right = v35;
        v48.bottom = v36;
        v47 = v33;
        if ( !v44 && v45 )
        {
          v48 = *(struct D2D_RECT_F *)CDirtyRegion::GetUnOccludedDirtyRegion(
                                        (__int64)a4,
                                        (__int64)v50,
                                        v45,
                                        v46,
                                        0,
                                        *v31,
                                        (__int64)&v49);
          LOBYTE(v36) = LOBYTE(v48.bottom);
          LOBYTE(v35) = LOBYTE(v48.right);
          LOBYTE(v34) = LOBYTE(v48.top);
          v33.m128_i8[0] = LOBYTE(v48.left);
        }
        if ( !IsEmpty(&v48) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
            McTemplateU0qdffff(
              v37,
              &EVTDESC_ETWGUID_DIRTYREGIONEVENT,
              *v31,
              v38,
              v33.m128_i8[0],
              SLOBYTE(v34),
              SLOBYTE(v35),
              SLOBYTE(v36));
          v39 = CDrawingContext::DrawVisualTree(a8, (__int64)v46, &v47, 0LL, 0x7FFFFFFF, 1, 0, v45 != 0, 0, 1, 0, 0);
          v8 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x248u);
            return v8;
          }
          CHolographicInteropTexture::NotifyRenderedRect((__int64)a2, v40, a6, &v48.left);
        }
        ++v24;
        ++v32;
        ++v31;
      }
      while ( v24 < (unsigned int)v13 );
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop,
      (__int64)a8);
  return v8;
}
