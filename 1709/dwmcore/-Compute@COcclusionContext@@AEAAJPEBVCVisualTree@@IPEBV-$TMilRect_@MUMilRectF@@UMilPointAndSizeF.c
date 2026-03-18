/*
 * XREFs of ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180060F58
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015570 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180042C58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x180036460 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005C710 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180060D80 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Compute(
        COcclusionContext *this,
        void **a2,
        unsigned int a3,
        float *a4,
        int a5,
        char a6,
        struct CMILMatrix *a7,
        __int64 a8)
{
  char v8; // r12
  float *v11; // rbp
  CArrayBasedCoverageSet *v12; // rcx
  unsigned __int64 v13; // r14
  float v14; // xmm7_4
  float v15; // xmm1_4
  void (*v16)(void); // rax
  int v17; // eax
  unsigned int v18; // esi
  float *v19; // rcx
  float *v20; // rax
  unsigned __int64 v21; // r8
  char v22; // r9
  unsigned int v23; // r8d
  unsigned int v24; // edx
  int v25; // eax
  unsigned int i; // r14d
  __int64 v27; // rcx
  CInputSinkStruct::InputQueueInfo *v29; // rax
  unsigned int v30; // esi
  float *v31; // rdi
  __int128 v32; // xmm0
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  __int64 v36; // rcx
  bool v37; // [rsp+30h] [rbp-98h]
  __int128 v39; // [rsp+40h] [rbp-88h] BYREF

  v8 = 0;
  *(_QWORD *)((char *)this + 1036) = 0LL;
  v11 = 0LL;
  v12 = (CArrayBasedCoverageSet *)*((_QWORD *)this + 49);
  v13 = a3;
  v14 = 0.0;
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm);
  v16 = *(void (**)(void))(*(_QWORD *)v12 + 48LL);
  v37 = v15 >= 0.0000011920929;
  if ( (char *)v16 == (char *)CArrayBasedCoverageSet::Clear )
    CArrayBasedCoverageSet::Clear(v12);
  else
    v16();
  *((_DWORD *)this + 258) = 0;
  *((_DWORD *)this + 294) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1152, 40LL);
  v17 = COcclusionContext::SetDeviceTransform(this, a7);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xD1u);
    goto LABEL_16;
  }
  if ( a6 && *((_BYTE *)this + 816) )
  {
    v8 = 1;
    goto LABEL_24;
  }
  if ( v15 >= 0.0000011920929 )
  {
LABEL_24:
    v29 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(v13, 0x10uLL));
    v11 = (float *)v29;
    if ( v29 )
      `vector constructor iterator'(v29, 16LL, v13, COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    else
      v11 = 0LL;
    if ( !v11 )
    {
      v18 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xD9u);
      goto LABEL_16;
    }
    v30 = 0;
    if ( (_DWORD)v13 )
    {
      v31 = v11 + 2;
      do
      {
        if ( v8 )
        {
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)this + 888, (__int64)&a4[4 * v30], (float *)&v39);
          v32 = v39;
        }
        else
        {
          v32 = *(_OWORD *)((char *)v31 + (char *)a4 - (char *)v11 - 8);
        }
        *(_OWORD *)(v31 - 2) = v32;
        if ( v37 && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v11[4 * v30]) )
        {
          v33 = *(v31 - 1) - *(float *)&a5;
          *(v31 - 2) = *(v31 - 2) - *(float *)&a5;
          v34 = *(float *)&a5 + *v31;
          *(v31 - 1) = v33;
          v35 = *(float *)&a5 + v31[1];
          *v31 = v34;
          v31[1] = v35;
        }
        ++v30;
        v31 += 4;
      }
      while ( v30 < (unsigned int)v13 );
    }
    a4 = v11;
  }
  *((_DWORD *)this + 160) = v13;
  if ( (_DWORD)v13 )
  {
    v19 = (float *)((char *)this + 772);
    v20 = a4 + 1;
    v21 = v13;
    do
    {
      *v19 = (float)(v20[1] - *(v20 - 1)) * (float)(v20[2] - *v20);
      *(_OWORD *)((char *)v20 + this - (COcclusionContext *)a4 + 640) = *(_OWORD *)(v20 - 1);
      v20 += 4;
      v14 = v14 + *v19++;
      --v21;
    }
    while ( v21 );
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm) < 0.0000011920929 )
  {
    v18 = -2003292287;
  }
  else
  {
    v22 = 0;
    **((_DWORD **)this + 120) = 0;
    *((_QWORD *)this + 148) = a8;
    if ( a8 )
    {
      v23 = *(_DWORD *)(a8 + 24);
      v24 = 0;
      if ( v23 )
      {
        while ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a8 + 8LL * v24) + 1176LL) )
        {
          if ( ++v24 >= v23 )
            goto LABEL_14;
        }
        v22 = 1;
      }
    }
LABEL_14:
    *((_BYTE *)this + 817) = v22;
    v25 = CVisualTreeIterator::WalkSubtree<COcclusionContext>(
            (__int64)this + 40,
            (const struct CVisualTree *)a2,
            a2[3],
            this,
            2);
    v18 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x117u);
  }
LABEL_16:
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 30) = 0;
  for ( i = 0; i < *((_DWORD *)this + 44); ++i )
  {
    v36 = *(_QWORD *)(*((_QWORD *)this + 19) + 16LL * i);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  *((_DWORD *)this + 44) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 152, 16LL);
  v27 = *((_QWORD *)this + 32);
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    *((_QWORD *)this + 32) = 0LL;
  }
  *((_DWORD *)this + 90) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 336, 8LL);
  **((_DWORD **)this + 120) = 0;
  *((_QWORD *)this + 148) = 0LL;
  if ( v11 )
    HeapFree(WPF::g_processHeap, 0, v11);
  return v18;
}
