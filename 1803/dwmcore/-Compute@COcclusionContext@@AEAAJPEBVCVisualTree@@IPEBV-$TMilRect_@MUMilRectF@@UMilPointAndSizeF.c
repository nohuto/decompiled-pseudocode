/*
 * XREFs of ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800A89A8
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800653F4 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x180064BB0 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800A81C0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x1800A87CC (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Compute(
        COcclusionContext *this,
        unsigned __int64 *a2,
        unsigned int a3,
        struct D2D_RECT_F *a4,
        int a5,
        char a6,
        struct CMILMatrix *a7,
        __int64 a8)
{
  char v8; // r13
  struct D2D_RECT_F *v11; // r14
  CArrayBasedCoverageSet *v12; // rcx
  unsigned __int64 v13; // rbp
  float v14; // xmm6_4
  float v15; // xmm1_4
  void (*v16)(void); // rax
  int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // r8
  float *v20; // rcx
  float *p_top; // rax
  char v22; // r9
  unsigned int v23; // r8d
  unsigned int v24; // edx
  int v25; // eax
  unsigned int i; // ebp
  __int64 v27; // rcx
  unsigned __int64 v29; // r12
  CInputSinkStruct::InputQueueInfo *v30; // rax
  float *p_right; // rdi
  const struct D2D_RECT_F *v32; // rsi
  signed __int64 v33; // r15
  __int128 v34; // xmm0
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  __int64 v38; // rcx
  bool v39; // [rsp+30h] [rbp-98h]
  __int128 v42; // [rsp+40h] [rbp-88h] BYREF

  v8 = 0;
  *(_QWORD *)((char *)this + 1036) = 0LL;
  v11 = 0LL;
  v12 = (CArrayBasedCoverageSet *)*((_QWORD *)this + 49);
  v13 = a3;
  v14 = 0.0;
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm);
  v16 = *(void (**)(void))(*(_QWORD *)v12 + 48LL);
  v39 = v15 >= 0.0000011920929;
  if ( (char *)v16 == (char *)CArrayBasedCoverageSet::Clear )
    CArrayBasedCoverageSet::Clear(v12);
  else
    v16();
  *((_DWORD *)this + 258) = 0;
  *((_DWORD *)this + 294) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1152, 0x28u);
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
    v29 = v13;
    v30 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(v13, 0x10uLL));
    v11 = (struct D2D_RECT_F *)v30;
    if ( v30 )
      `vector constructor iterator'(
        v30,
        0x10uLL,
        v13,
        (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    else
      v11 = 0LL;
    if ( !v11 )
    {
      v18 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xD9u);
      goto LABEL_16;
    }
    if ( (_DWORD)v13 )
    {
      p_right = &v11->right;
      v32 = v11;
      v33 = (char *)a4 - (char *)v11;
      do
      {
        if ( v8 )
        {
          CMILMatrix::Transform2DBoundsHelper<0>(
            (COcclusionContext *)((char *)this + 888),
            (__int64)v32 + v33,
            (float *)&v42);
          v34 = v42;
        }
        else
        {
          v34 = *(_OWORD *)((char *)p_right + v33 - 8);
        }
        *(_OWORD *)(p_right - 2) = v34;
        if ( v39 && !IsEmpty(v32) )
        {
          v35 = *(p_right - 1) - *(float *)&a5;
          *(p_right - 2) = *(p_right - 2) - *(float *)&a5;
          v36 = *(float *)&a5 + *p_right;
          *(p_right - 1) = v35;
          v37 = *(float *)&a5 + p_right[1];
          *p_right = v36;
          p_right[1] = v37;
        }
        ++v32;
        p_right += 4;
        --v29;
      }
      while ( v29 );
      LODWORD(v13) = a3;
    }
    a4 = v11;
  }
  *((_DWORD *)this + 160) = v13;
  if ( (_DWORD)v13 )
  {
    v19 = (unsigned int)v13;
    v20 = (float *)((char *)this + 772);
    p_top = &a4->top;
    do
    {
      *v20 = (float)(p_top[1] - *(p_top - 1)) * (float)(p_top[2] - *p_top);
      *(_OWORD *)((char *)p_top + this - (COcclusionContext *)a4 + 640) = *(_OWORD *)(p_top - 1);
      p_top += 4;
      v14 = v14 + *v20++;
      --v19;
    }
    while ( v19 );
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
        while ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a8 + 8LL * v24) + 1188LL) )
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
    v38 = *(_QWORD *)(*((_QWORD *)this + 19) + 16LL * i);
    if ( v38 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  *((_DWORD *)this + 44) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 152, 0x10u);
  v27 = *((_QWORD *)this + 32);
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    *((_QWORD *)this + 32) = 0LL;
  }
  *((_DWORD *)this + 90) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 336, 8u);
  **((_DWORD **)this + 120) = 0;
  *((_QWORD *)this + 148) = 0LL;
  if ( v11 )
    HeapFree(WPF::g_processHeap, 0, v11);
  return v18;
}
