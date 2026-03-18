/*
 * XREFs of ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1800447F8
 * Callers:
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800445FC (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18019F284 (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x180044078 (-GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z.c)
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x18004428C (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1800442F0 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18004447C (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x180045084 (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2D0C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B3F9C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1800C75E8 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x18019AB40 (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18019ABF8 (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ??$ExtendBaseByAdjacentSectionsOfRect@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@0AEAV0@@Z @ 0x18019EC50 (--$ExtendBaseByAdjacentSectionsOfRect@V-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAX.c)
 *     ?ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x18019EF10 (-ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV-$TMilRect@IUMilRectU@@UNotNeeded@R.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18019F284 (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 */

__int64 __fastcall CHwBitmapColorSource::FillTextureWithTransformedSource(
        CHwBitmapColorSource *this,
        struct IUnknown *a2)
{
  unsigned int v2; // r14d
  __int64 *v3; // r15
  __int128 *v5; // r12
  unsigned int v6; // eax
  unsigned int *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  char v11; // bl
  char DirtyRects; // al
  struct tagRECT *v13; // r13
  char v14; // bl
  __int128 v15; // xmm0
  unsigned int v16; // ebx
  __int64 v17; // r13
  __m128i *v18; // r13
  int v19; // eax
  int v20; // eax
  __int128 v21; // xmm0
  unsigned int v23; // eax
  int v24; // r8d
  __int64 v25; // rbx
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-E0h]
  int v31; // [rsp+38h] [rbp-C8h]
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v34; // [rsp+58h] [rbp-A8h] BYREF
  struct IUnknown *v35; // [rsp+60h] [rbp-A0h]
  int v36; // [rsp+68h] [rbp-98h] BYREF
  __m128i *v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v38; // [rsp+78h] [rbp-88h] BYREF
  struct IUnknown *v39; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT *v40; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v41[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v42[9]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v43[176]; // [rsp+130h] [rbp+30h] BYREF
  char v44; // [rsp+1E0h] [rbp+E0h] BYREF

  v35 = a2;
  v2 = 0;
  v34 = 0;
  v3 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( CHwBitmapColorSource::IsRealizationCurrent(this) )
    ExtendBaseByAdjacentSectionsOfRect<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>>(
      (char *)this + 188,
      (char *)this + 172);
  v5 = (__int128 *)((char *)this + 188);
  v6 = *((_DWORD *)this + 47);
  v7 = (unsigned int *)((char *)this + 172);
  if ( v6 > *((_DWORD *)this + 43) )
    *v7 = v6;
  v8 = *((_DWORD *)this + 48);
  if ( v8 > *((_DWORD *)this + 44) )
    *((_DWORD *)this + 44) = v8;
  v9 = *((_DWORD *)this + 49);
  if ( v9 < *((_DWORD *)this + 45) )
    *((_DWORD *)this + 45) = v9;
  v10 = *((_DWORD *)this + 50);
  if ( v10 < *((_DWORD *)this + 46) )
    *((_DWORD *)this + 46) = v10;
  if ( *((_DWORD *)this + 45) <= *v7 || *((_DWORD *)this + 46) <= *((_DWORD *)this + 44) )
  {
    *(_QWORD *)((char *)this + 180) = 0LL;
    v11 = 0;
    *(_QWORD *)v7 = 0LL;
  }
  else
  {
    v11 = 1;
  }
  v40 = 0LL;
  v33 = 0;
  DirtyRects = CHwBitmapColorSource::GetDirtyRects(this, (const struct tagRECT **)&v40, &v33, &v34);
  v13 = v40;
  v14 = v11 ^ 1;
  if ( !DirtyRects )
    v14 = 1;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v42,
    0x10uLL,
    9uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  if ( v14
    || (v23 = CHwBitmapColorSource::ComputePrefilteredDirtyRects(this, v13, v33, v42), (v25 = v23) != 0)
    && (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v42, (char *)this + 172) )
  {
    v15 = *v5;
    v16 = 1;
    v32 = 1;
    v42[0] = v15;
  }
  else
  {
    v26 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
            (int)this + 188,
            (int)this + 172,
            v24,
            (unsigned int)&v42[v25],
            4);
    v27 = v26 + (_DWORD)v25 == 0;
    v16 = v26 + v25;
    v32 = v16;
    if ( v27 )
      goto LABEL_25;
  }
  v37 = (__m128i *)v42;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v43,
    0xB0uLL,
    2uLL,
    DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>::DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>);
  v17 = *((_QWORD *)this + 33);
  if ( !v17 )
  {
LABEL_18:
    if ( !v16 )
    {
LABEL_24:
      `vector destructor iterator'(v43, 0xB0uLL, 2uLL, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
LABEL_25:
      CHwBitmapColorSource::UpdateTexturePixelFormatInfo(this);
      v21 = *v5;
      *((_DWORD *)this + 42) = v34;
      *(_OWORD *)v7 = v21;
      goto LABEL_26;
    }
    v18 = v37;
    v19 = CHwBitmapColorSource::PrepareToPushSourceBitsToVidMem(
            (__int64)this,
            (struct IBitmapSource *)v35,
            v16,
            (unsigned int *)v37,
            (__int64 *)&v38);
    v2 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC8Eu);
      `vector destructor iterator'(v43, 0xB0uLL, 2uLL, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
      v3 = v38;
LABEL_26:
      if ( v3 )
        ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v3);
      goto LABEL_28;
    }
    v3 = v38;
    if ( v38 && *(int *)(*((_QWORD *)this + 2) + 740LL) < 40960 && v35 == *((struct IUnknown **)this + 14) )
    {
      v29 = (*(__int64 (__fastcall **)(__int64 *, struct IUnknown **))(*v38 + 72))(v38, &v39);
      v2 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC9Bu);
LABEL_48:
        `vector destructor iterator'(v43, 0xB0uLL, 2uLL, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
        goto LABEL_26;
      }
      if ( v39 )
        CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver(
          (CD3DResourceManager *)(*((_QWORD *)this + 2) + 928LL),
          v39);
    }
    v20 = CHwBitmapColorSource::PushTheSourceBitsToVideoMemory((__int64)this, v16, v18, v3, v30);
    v2 = v20;
    if ( v20 >= 0 )
    {
      ReleaseDecoderCopyBuffers(v35);
      goto LABEL_24;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xCABu);
    goto LABEL_48;
  }
  v36 = 0;
  v41[0] = v43;
  v41[1] = &v44;
  while ( 1 )
  {
    v28 = CHwBitmapColorSource::UpdateFromReusableSource(
            (_DWORD)this,
            (_DWORD)v35,
            v17,
            v16,
            (__int64)v37,
            (__int64)&v32,
            (__int64)&v37,
            v31,
            (__int64)v41,
            (__int64)&v36);
    v2 = v28;
    if ( v28 < 0 )
      break;
    v17 = *(_QWORD *)(v17 + 264);
    v16 = v32;
    if ( !v17 )
      goto LABEL_18;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC79u);
  `vector destructor iterator'(v43, 0xB0uLL, 2uLL, DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
LABEL_28:
  if ( v39 )
    ((void (__fastcall *)(struct IUnknown *))v39->lpVtbl->Release)(v39);
  return v2;
}
