/*
 * XREFs of ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801EFC8C
 * Callers:
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1801EF984 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x1801F0AA4 (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180083960 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x1800CDD5C (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x1801E5CD8 (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1801E8B30 (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ??$ExtendBaseByAdjacentSectionsOfRect@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@0AEAV0@@Z @ 0x1801EE078 (--$ExtendBaseByAdjacentSectionsOfRect@V-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAX.c)
 *     ?ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x1801EEA84 (-ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV-$TMilRect@IUMilRectU@@UNotNeeded@R.c)
 *     ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1801F0084 (-GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z.c)
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x1801F00B8 (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801F0160 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1801F04A4 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x1801F0AA4 (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1802016B0 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::FillTextureWithTransformedSource(
        CHwBitmapColorSource *this,
        struct IUnknown *a2)
{
  int v2; // r13d
  unsigned int v3; // r14d
  __int64 v4; // r12
  unsigned int v6; // eax
  unsigned int *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // esi
  bool DoesContain; // r15
  bool DirtyRects; // al
  __int64 v14; // r8
  _DWORD *v15; // rcx
  __int128 v16; // xmm0
  struct tagRECT *v17; // r13
  __int64 v18; // r15
  int v19; // eax
  struct IUnknown *v20; // r15
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int128 v24; // xmm0
  int v26; // [rsp+38h] [rbp-C8h]
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v29; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT *v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v33; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT *v34; // [rsp+80h] [rbp-80h] BYREF
  struct IUnknown *v35; // [rsp+88h] [rbp-78h]
  _QWORD v36[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v37[9]; // [rsp+A0h] [rbp-60h] BYREF
  char v38[176]; // [rsp+130h] [rbp+30h] BYREF
  char v39; // [rsp+1E0h] [rbp+E0h] BYREF

  v2 = 0;
  v35 = a2;
  v3 = 0;
  v29 = 0;
  v4 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( CHwBitmapColorSource::IsRealizationCurrent(this) )
    ExtendBaseByAdjacentSectionsOfRect<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>>(
      (unsigned int *)this + 49,
      (unsigned int *)this + 45,
      (unsigned int *)this + 49);
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
  v11 = 1;
  if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)this + 45) )
  {
    *(_QWORD *)((char *)this + 188) = 0LL;
    DoesContain = 1;
    *(_QWORD *)v7 = 0LL;
  }
  else
  {
    DoesContain = 0;
  }
  v34 = 0LL;
  v28 = 0;
  DirtyRects = CHwBitmapColorSource::GetDirtyRects(this, (const struct tagRECT **)&v34, &v28, &v29);
  v30 = v34;
  if ( !DirtyRects )
    DoesContain = 1;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v37,
    16LL,
    9LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  if ( !DoesContain )
  {
    v2 = CHwBitmapColorSource::ComputePrefilteredDirtyRects(this, v30, v28, (__int64)v37);
    if ( v2 )
      DoesContain = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
                      (__int64)v37,
                      (__int64)this + 180);
  }
  v15 = (_DWORD *)((char *)this + 196);
  if ( DoesContain )
  {
    v16 = *(_OWORD *)v15;
    v27 = 1;
    v37[0] = v16;
  }
  else
  {
    v11 = v2
        + TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
            v15,
            (_DWORD *)this + 45,
            v14,
            &v37[v2],
            4u);
    v27 = v11;
    if ( !v11 )
    {
LABEL_37:
      CHwBitmapColorSource::UpdateTexturePixelFormatInfo(this);
      v24 = *(_OWORD *)((char *)this + 196);
      *((_DWORD *)this + 44) = v29;
      *(_OWORD *)v7 = v24;
      goto LABEL_38;
    }
  }
  v17 = (struct tagRECT *)v37;
  v30 = (struct tagRECT *)v37;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v38,
    176LL,
    2LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>::DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>);
  v18 = *((_QWORD *)this + 34);
  if ( v18 )
  {
    v31 = 0;
    v36[0] = v38;
    v36[1] = &v39;
    while ( 1 )
    {
      v19 = CHwBitmapColorSource::UpdateFromReusableSource(
              (_DWORD)this,
              (_DWORD)v35,
              v18,
              v11,
              (__int64)v17,
              (__int64)&v27,
              (__int64)&v30,
              v26,
              (__int64)v36,
              (__int64)&v31);
      v3 = v19;
      if ( v19 < 0 )
        break;
      v18 = *(_QWORD *)(v18 + 272);
      v11 = v27;
      v17 = v30;
      if ( !v18 )
        goto LABEL_26;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC72u);
    goto LABEL_42;
  }
LABEL_26:
  if ( !v11 )
  {
LABEL_36:
    `vector destructor iterator'(
      v38,
      176LL,
      2LL,
      (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
    goto LABEL_37;
  }
  v20 = v35;
  v21 = CHwBitmapColorSource::PrepareToPushSourceBitsToVidMem(this, v35, v11, v17, &v32);
  v3 = v21;
  if ( v21 >= 0 )
  {
    v4 = v32;
    if ( v32 && *(int *)(*((_QWORD *)this + 2) + 756LL) < 40960 && v20 == *((struct IUnknown **)this + 15) )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v32 + 56LL))(v32, &v33);
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC94u);
        goto LABEL_42;
      }
      if ( v33 )
        CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver(
          (CD3DResourceManager *)(*((_QWORD *)this + 2) + 896LL),
          v33);
    }
    v23 = CHwBitmapColorSource::PushTheSourceBitsToVideoMemory(this, v11, v17, v4);
    v3 = v23;
    if ( v23 >= 0 )
    {
      ReleaseDecoderCopyBuffers(v20);
      goto LABEL_36;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xCA4u);
LABEL_42:
    `vector destructor iterator'(
      v38,
      176LL,
      2LL,
      (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
    goto LABEL_38;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC87u);
  `vector destructor iterator'(
    v38,
    176LL,
    2LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  v4 = v32;
LABEL_38:
  ReleaseInterfaceNoNULL<IWICBitmap>(v4);
  if ( v33 )
    ((void (__fastcall *)(struct IUnknown *))v33->lpVtbl->Release)(v33);
  return v3;
}
