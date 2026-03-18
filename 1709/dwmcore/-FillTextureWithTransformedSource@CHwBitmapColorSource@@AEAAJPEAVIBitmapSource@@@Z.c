/*
 * XREFs of ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801B56F8
 * Callers:
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1801B53F0 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x1801B650C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x18008506C (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x1801ABD44 (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1801ABE7C (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ??$ExtendBaseByAdjacentSectionsOfRect@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@0AEAV0@@Z @ 0x1801B439C (--$ExtendBaseByAdjacentSectionsOfRect@V-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAX.c)
 *     ?ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x1801B47BC (-ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV-$TMilRect@IUMilRectU@@UNotNeeded@R.c)
 *     ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1801B5AE0 (-GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z.c)
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x1801B5B14 (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801B5BBC (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1801B5F00 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x1801B650C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1801C4F90 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::FillTextureWithTransformedSource(
        CHwBitmapColorSource *this,
        struct IUnknown *a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r12
  __int128 *v5; // r15
  unsigned int v6; // eax
  unsigned int *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  char v11; // bl
  bool DirtyRects; // al
  struct tagRECT *v13; // r13
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // ebx
  __int128 v20; // xmm0
  __int64 v21; // r13
  signed int v22; // eax
  __int64 v23; // r13
  signed int v24; // eax
  signed int v25; // eax
  signed int v26; // eax
  __int128 v27; // xmm0
  int v29; // [rsp+38h] [rbp-C8h]
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v32; // [rsp+58h] [rbp-A8h] BYREF
  struct IUnknown *v33; // [rsp+60h] [rbp-A0h]
  int v34; // [rsp+68h] [rbp-98h] BYREF
  _OWORD *v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  struct IUnknown *v37; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT *v38; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v39[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v40[9]; // [rsp+A0h] [rbp-60h] BYREF
  char v41[176]; // [rsp+130h] [rbp+30h] BYREF
  char v42; // [rsp+1E0h] [rbp+E0h] BYREF

  v33 = a2;
  v2 = 0;
  v32 = 0;
  v3 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( CHwBitmapColorSource::IsRealizationCurrent(this) )
    ExtendBaseByAdjacentSectionsOfRect<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>>(
      (unsigned int *)this + 49,
      (unsigned int *)this + 45,
      (unsigned int *)this + 49);
  v5 = (__int128 *)((char *)this + 196);
  v6 = *((_DWORD *)this + 49);
  v7 = (unsigned int *)((char *)this + 180);
  if ( v6 > *((_DWORD *)this + 45) )
    *v7 = v6;
  v8 = *((_DWORD *)this + 50);
  if ( v8 > *((_DWORD *)this + 46) )
    *((_DWORD *)this + 46) = v8;
  v9 = *((_DWORD *)this + 51);
  if ( v9 < *((_DWORD *)this + 47) )
    *((_DWORD *)this + 47) = v9;
  v10 = *((_DWORD *)this + 52);
  if ( v10 < *((_DWORD *)this + 48) )
    *((_DWORD *)this + 48) = v10;
  if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)this + 45) )
  {
    *(_QWORD *)((char *)this + 188) = 0LL;
    v11 = 1;
    *(_QWORD *)v7 = 0LL;
  }
  else
  {
    v11 = 0;
  }
  v38 = 0LL;
  v31 = 0;
  DirtyRects = CHwBitmapColorSource::GetDirtyRects(this, (const struct tagRECT **)&v38, &v31, &v32);
  v13 = v38;
  if ( !DirtyRects )
    v11 = 1;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v40,
    16LL,
    9LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  if ( v11
    || (v14 = CHwBitmapColorSource::ComputePrefilteredDirtyRects(this, v13, v31, (__int64)v40), (v16 = v14) != 0)
    && TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)v40, (__int64)this + 180) )
  {
    v20 = *v5;
    v19 = 1;
    v30 = 1;
    v40[0] = v20;
  }
  else
  {
    v17 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
            (_DWORD *)this + 49,
            (_DWORD *)this + 45,
            v15,
            &v40[v16],
            4u);
    v18 = v17 + (_DWORD)v16 == 0;
    v19 = v17 + v16;
    v30 = v19;
    if ( v18 )
    {
LABEL_37:
      CHwBitmapColorSource::UpdateTexturePixelFormatInfo(this);
      v27 = *v5;
      *((_DWORD *)this + 44) = v32;
      *(_OWORD *)v7 = v27;
      goto LABEL_38;
    }
  }
  v35 = v40;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v41,
    176LL,
    2LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>::DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>);
  v21 = *((_QWORD *)this + 34);
  if ( v21 )
  {
    v34 = 0;
    v39[0] = v41;
    v39[1] = &v42;
    while ( 1 )
    {
      v22 = CHwBitmapColorSource::UpdateFromReusableSource(
              (_DWORD)this,
              (_DWORD)v33,
              v21,
              v19,
              (__int64)v35,
              (__int64)&v30,
              (__int64)&v35,
              v29,
              (__int64)v39,
              (__int64)&v34);
      v2 = v22;
      if ( v22 < 0 )
        break;
      v21 = *(_QWORD *)(v21 + 272);
      v19 = v30;
      if ( !v21 )
        goto LABEL_26;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0xC72u);
    goto LABEL_42;
  }
LABEL_26:
  if ( !v19 )
  {
LABEL_36:
    `vector destructor iterator'(
      v41,
      176LL,
      2LL,
      (void (__fastcall *)(CDrawListBitmap *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
    goto LABEL_37;
  }
  v23 = (__int64)v35;
  v24 = CHwBitmapColorSource::PrepareToPushSourceBitsToVidMem(this, v33, v19, v35, &v36);
  v2 = v24;
  if ( v24 >= 0 )
  {
    v3 = v36;
    if ( v36 && *(int *)(*((_QWORD *)this + 2) + 756LL) < 40960 && v33 == *((struct IUnknown **)this + 15) )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v36 + 56LL))(v36, &v37);
      v2 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0xC94u);
        goto LABEL_42;
      }
      if ( v37 )
        CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver(
          (CD3DResourceManager *)(*((_QWORD *)this + 2) + 896LL),
          v37);
    }
    v26 = CHwBitmapColorSource::PushTheSourceBitsToVideoMemory(this, v19, v23, v3);
    v2 = v26;
    if ( v26 >= 0 )
    {
      ReleaseDecoderCopyBuffers(v33);
      goto LABEL_36;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0xCA4u);
LABEL_42:
    `vector destructor iterator'(
      v41,
      176LL,
      2LL,
      (void (__fastcall *)(CDrawListBitmap *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
    goto LABEL_38;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0xC87u);
  `vector destructor iterator'(
    v41,
    176LL,
    2LL,
    (void (__fastcall *)(CDrawListBitmap *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  v3 = v36;
LABEL_38:
  ReleaseInterfaceNoNULL<CManipulationManager>(v3);
  if ( v37 )
    ((void (__fastcall *)(struct IUnknown *))v37->lpVtbl->Release)(v37);
  return v2;
}
