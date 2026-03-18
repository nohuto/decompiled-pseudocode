/*
 * XREFs of ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18009F160
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x18006FAD0 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180098678 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009FBE0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Compute(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        struct CMILMatrix *a6,
        __int64 a7)
{
  CArrayBasedCoverageSet *v8; // rcx
  __int64 v9; // r13
  unsigned __int64 v11; // r15
  float v12; // xmm6_4
  CInputSinkStruct::InputQueueInfo *v13; // r14
  void (*v14)(void); // rax
  _OWORD *v15; // rdi
  float *v16; // rcx
  float *v17; // rax
  unsigned __int64 v18; // r8
  float v19; // xmm1_4
  char v20; // r9
  unsigned int v21; // r8d
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // edi
  unsigned int i; // r15d
  __int64 v26; // rcx
  __m128 v28; // xmm0
  int v29; // eax
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  int v32; // eax
  __m128 v33; // xmm1
  unsigned __int64 v34; // r12
  CInputSinkStruct::InputQueueInfo *v35; // rax
  CInputSinkStruct::InputQueueInfo *v36; // r13
  __int64 v37; // rcx
  __m128 v39[4]; // [rsp+48h] [rbp-81h] BYREF
  int v40; // [rsp+88h] [rbp-41h]
  __int128 v41; // [rsp+98h] [rbp-31h] BYREF

  *(_DWORD *)(a1 + 948) = 0;
  v8 = *(CArrayBasedCoverageSet **)(a1 + 304);
  v9 = a2;
  v11 = a3;
  v12 = 0.0;
  v13 = 0LL;
  v14 = *(void (**)(void))(*(_QWORD *)v8 + 40LL);
  if ( (char *)v14 == (char *)CArrayBasedCoverageSet::Clear )
    CArrayBasedCoverageSet::Clear(v8);
  else
    v14();
  *(_DWORD *)(a1 + 944) = 0;
  *(_DWORD *)(a1 + 1080) = 0;
  DynArrayImpl<0>::ShrinkToSize(a1 + 1056, 0x28u);
  if ( !a6 || CMILMatrix::IsIdentity<0>((__int64)a6) )
  {
    if ( a1 != -732 )
    {
      *(_WORD *)(a1 + 796) = 32085;
      *(_OWORD *)(a1 + 732) = _xmm;
      *(_OWORD *)(a1 + 748) = _xmm;
      *(_OWORD *)(a1 + 764) = _xmm;
      *(_OWORD *)(a1 + 780) = _xmm;
    }
    v15 = (_OWORD *)(a1 + 800);
    if ( a1 != -800 )
    {
      *(_WORD *)(a1 + 864) = 32085;
      *v15 = _xmm;
      *(_OWORD *)(a1 + 816) = _xmm;
      *(_OWORD *)(a1 + 832) = _xmm;
      *(_OWORD *)(a1 + 848) = _xmm;
    }
    *(_BYTE *)(a1 + 728) = 0;
  }
  else
  {
    v40 = 0;
    if ( !CMILMatrix::SetToInverse(v39, a6) )
    {
      v24 = -2003304441;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x8Fu);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0xBBu);
      goto LABEL_20;
    }
    *(_OWORD *)(a1 + 732) = *(_OWORD *)a6;
    *(_OWORD *)(a1 + 748) = *((_OWORD *)a6 + 1);
    *(_OWORD *)(a1 + 764) = *((_OWORD *)a6 + 2);
    v28 = v39[0];
    *(_OWORD *)(a1 + 780) = *((_OWORD *)a6 + 3);
    v29 = *((_DWORD *)a6 + 16);
    v15 = (_OWORD *)(a1 + 800);
    v30 = v39[1];
    *(__m128 *)(a1 + 800) = v28;
    *(_DWORD *)(a1 + 796) = v29;
    v31 = v39[2];
    v32 = v40;
    *(__m128 *)(a1 + 816) = v30;
    *(_BYTE *)(a1 + 728) = 1;
    v33 = v39[3];
    *(__m128 *)(a1 + 832) = v31;
    *(__m128 *)(a1 + 848) = v33;
    *(_DWORD *)(a1 + 864) = v32;
  }
  if ( a5 && *(_BYTE *)(a1 + 728) )
  {
    v34 = v11;
    v35 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(v11, 0x10uLL));
    v13 = v35;
    if ( v35 )
      `vector constructor iterator'(
        v35,
        0x10uLL,
        v11,
        (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    else
      v13 = 0LL;
    if ( !v13 )
    {
      v24 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC3u);
      goto LABEL_20;
    }
    if ( (_DWORD)v11 )
    {
      v36 = v13;
      do
      {
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v15, a4, (float *)&v41);
        a4 += 16LL;
        *(_OWORD *)v36 = v41;
        v36 = (CInputSinkStruct::InputQueueInfo *)((char *)v36 + 16);
        --v34;
      }
      while ( v34 );
      v9 = a2;
    }
    a4 = (__int64)v13;
  }
  *(_DWORD *)(a1 + 552) = v11;
  if ( (_DWORD)v11 )
  {
    v16 = (float *)(a1 + 684);
    v17 = (float *)(a4 + 4);
    v18 = v11;
    do
    {
      *v16 = (float)(v17[2] - *v17) * (float)(v17[1] - *(v17 - 1));
      *(_OWORD *)((char *)v17 + a1 - a4 + 552) = *(_OWORD *)(v17 - 1);
      v17 += 4;
      v12 = v12 + *v16++;
      --v18;
    }
    while ( v18 );
  }
  v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
  if ( v19 < 0.0000011920929 )
  {
    v24 = -2003292287;
  }
  else
  {
    v20 = 0;
    **(_DWORD **)(a1 + 872) = 0;
    *(_QWORD *)(a1 + 1088) = a7;
    if ( a7 )
    {
      v21 = *(_DWORD *)(a7 + 24);
      v22 = 0;
      if ( v21 )
      {
        while ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a7 + 8LL * v22) + 1088LL) )
        {
          if ( ++v22 >= v21 )
            goto LABEL_18;
        }
        v20 = 1;
      }
    }
LABEL_18:
    *(_BYTE *)(a1 + 729) = v20;
    v23 = CVisualTreeIterator::WalkSubtree<COcclusionContext>(a1 + 40, v9, *(_QWORD *)(v9 + 24), a1, 2);
    v24 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xEFu);
  }
LABEL_20:
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 176); ++i )
  {
    v37 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL * i);
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  *(_DWORD *)(a1 + 176) = 0;
  DynArrayImpl<0>::ShrinkToSize(a1 + 152, 8u);
  v26 = *(_QWORD *)(a1 + 224);
  if ( v26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  **(_DWORD **)(a1 + 872) = 0;
  *(_QWORD *)(a1 + 1088) = 0LL;
  if ( v13 )
    HeapFree(WPF::g_processHeap, 0, v13);
  return v24;
}
