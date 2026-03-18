/*
 * XREFs of ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x180072BEC
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180003AE0 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D124 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180097330 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?GetDeviceResource@CDrawListBitmap@@QEBAJPEAPEAVIDeviceResource@@@Z @ 0x1800062B4 (-GetDeviceResource@CDrawListBitmap@@QEBAJPEAPEAVIDeviceResource@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800459A0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180047860 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180070560 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??_ECDrawListBitmap@@QEAAPEAXI@Z @ 0x1800772E4 (--_ECDrawListBitmap@@QEAAPEAXI@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180077350 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800947F0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18013E3C0 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::RealizeBitmaps(
        CPrimitiveGroupDrawListGenerator *this,
        const struct CDrawingContext *a2,
        char a3)
{
  struct _LUID *v3; // r13
  int v4; // edi
  CDrawListBitmap *v6; // rcx
  CDrawListBitmap *v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  bool v12; // cf
  SIZE_T v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // edx
  _QWORD *v16; // r14
  CDrawListBitmap *v17; // r12
  CDrawListBitmap *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r12
  CGdiSpriteBitmap *v23; // r14
  __int64 (__fastcall *v24)(CCompositionSurfaceBitmap *, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  struct IDeviceTexture *v26; // rcx
  CDxHandleBitmapRealization *v27; // rdi
  __int64 (__fastcall *v28)(CDxHandleBitmapRealization *, struct _LUID *, struct IDeviceTexture **); // rax
  int v29; // eax
  __int64 v30; // rcx
  struct IDeviceTexture *v31; // rax
  __int64 v32; // rcx
  struct IDeviceTexture *v33; // rcx
  CDxHandleBitmapRealization *v34; // rcx
  unsigned __int64 v35; // r15
  __int64 v36; // rcx
  struct IDeviceResource *v37; // r8
  int DeviceResource; // eax
  struct IDeviceResourceNotify *v39; // rdx
  __int64 (__fastcall *v40)(CD2DResource *, struct IDeviceResourceNotify *); // rax
  int v41; // eax
  struct IDeviceResource *v42; // rax
  __int64 v43; // rcx
  __int64 v45; // rax
  SIZE_T v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // edx
  _QWORD *v49; // r14
  CDrawListBitmap *v50; // rcx
  __int64 v51; // r14
  __int64 v52; // r12
  int v53; // eax
  int v54; // r9d
  unsigned int v55; // [rsp+20h] [rbp-38h]
  unsigned int v56; // [rsp+20h] [rbp-38h]
  struct IDeviceTexture *v57; // [rsp+30h] [rbp-28h] BYREF
  CDxHandleBitmapRealization *v58; // [rsp+38h] [rbp-20h] BYREF
  __int64 v59; // [rsp+40h] [rbp-18h]
  unsigned int v60; // [rsp+A0h] [rbp+48h]
  struct IDeviceResource *v61; // [rsp+A8h] [rbp+50h] BYREF
  char v62; // [rsp+B0h] [rbp+58h]
  unsigned int v63; // [rsp+B8h] [rbp+60h]

  v62 = a3;
  v61 = a2;
  v3 = (struct _LUID *)((char *)a2 + 392);
  v4 = 0;
  if ( *((_DWORD *)this + 10) != *((_DWORD *)a2 + 98)
    || *((_DWORD *)this + 11) != *((_DWORD *)a2 + 99)
    || *((_DWORD *)this + 12) != *((_DWORD *)a2 + 100)
    || *((_DWORD *)this + 13) != *((_DWORD *)a2 + 101)
    || *((_BYTE *)this + 56) != *((_BYTE *)a2 + 408) )
  {
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    v6 = (CDrawListBitmap *)*((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = 0LL;
    if ( v6 )
      CDrawListBitmap::`vector deleting destructor'(v6, (unsigned int)a2);
    v7 = (CDrawListBitmap *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    if ( v7 )
      CDrawListBitmap::`vector deleting destructor'(v7, (unsigned int)a2);
    v8 = *((_QWORD *)this + 16);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 32LL))(v8, (char *)this + 16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
    }
    v9 = *((unsigned int *)this + 16);
    v63 = v9;
    if ( (_DWORD)v9 )
    {
      v10 = (unsigned int)v9;
      v11 = 24 * v9;
      if ( !is_mul_ok(v9, 0x18uLL) )
        v11 = -1LL;
      v12 = __CFADD__(v11, 8LL);
      v13 = v11 + 8;
      if ( v12 )
        v13 = -1LL;
      if ( !v13 )
        v13 = 1LL;
      v14 = HeapAlloc(WPF::g_processHeap, 0, v13);
      if ( v14 )
      {
        *v14 = v9;
        v16 = v14 + 1;
        v17 = (CDrawListBitmap *)(v14 + 1);
        do
        {
          CDrawListBitmap::CDrawListBitmap(v17);
          v17 = (CDrawListBitmap *)((char *)v17 + 24);
          --v10;
        }
        while ( v10 );
        LODWORD(v9) = v63;
      }
      else
      {
        v16 = 0LL;
      }
      v18 = (CDrawListBitmap *)*((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = v16;
      if ( v18 )
      {
        CDrawListBitmap::`vector deleting destructor'(v18, v15);
        v16 = (_QWORD *)*((_QWORD *)this + 14);
      }
      if ( !v16 )
      {
        v55 = 231;
        goto LABEL_88;
      }
      v60 = 0;
      if ( (_DWORD)v9 )
      {
        v19 = 0LL;
        v20 = 0LL;
        v59 = 0LL;
        while ( 1 )
        {
          v21 = *((_QWORD *)this + 9);
          v58 = 0LL;
          v57 = 0LL;
          v22 = *((_QWORD *)this + 14);
          v23 = *(CGdiSpriteBitmap **)(v20 + v21);
          v24 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct IBitmapRealization **))(*(_QWORD *)v23 + 80LL);
          if ( v24 == CGdiSpriteBitmap::GetCurrentRenderingRealization )
            CurrentRenderingRealization = CGdiSpriteBitmap::GetCurrentRenderingRealization(v23, &v58);
          else
            CurrentRenderingRealization = v24 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization
                                        ? CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v23, &v58)
                                        : v24(v23, &v58);
          v4 = CurrentRenderingRealization;
          if ( CurrentRenderingRealization < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentRenderingRealization, 0x27u);
          }
          else
          {
            v26 = v57;
            v27 = v58;
            if ( v57 )
            {
              v57 = 0LL;
              (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v26 + 16LL))(v26);
            }
            v28 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *, struct _LUID *, struct IDeviceTexture **))(*(_QWORD *)v27 + 144LL);
            v29 = v28 == CDxHandleBitmapRealization::GetDeviceTexture
                ? CDxHandleBitmapRealization::GetDeviceTexture(v27, v3, &v57)
                : v28(v27, v3, &v57);
            v4 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x2Au);
            }
            else
            {
              if ( *(CGdiSpriteBitmap **)(v19 + v22) != v23 )
              {
                (*(void (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v23 + 8LL))(v23);
                v30 = *(_QWORD *)(v19 + v22);
                *(_QWORD *)(v19 + v22) = v23;
                if ( v30 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
              }
              v31 = v57;
              v32 = *(_QWORD *)(v19 + v22 + 8);
              v57 = 0LL;
              *(_QWORD *)(v19 + v22 + 8) = v31;
              if ( v32 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
              *(_BYTE *)(v19 + v22 + 16) = v62;
            }
          }
          v33 = v57;
          if ( v57 )
          {
            v57 = 0LL;
            (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v33 + 16LL))(v33);
          }
          v34 = v58;
          if ( v58 )
          {
            v58 = 0LL;
            (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v34 + 16LL))(v34);
          }
          if ( v4 < 0 )
            break;
          v19 += 24LL;
          v20 = v59 + 8;
          ++v60;
          v59 += 8LL;
          if ( v60 >= v63 )
            goto LABEL_44;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xEEu);
LABEL_56:
        if ( v4 >= 0 )
          return (unsigned int)v4;
LABEL_89:
        CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(this);
        return (unsigned int)v4;
      }
    }
LABEL_44:
    v35 = *((unsigned int *)this + 20);
    if ( !(_DWORD)v35 )
    {
LABEL_45:
      v36 = *((_QWORD *)this + 14);
      v37 = 0LL;
      v61 = 0LL;
      if ( v36 )
      {
        DeviceResource = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IDeviceResource **))(v36 + 8))(
                           *(_QWORD *)(v36 + 8),
                           &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
                           &v61);
        v4 = DeviceResource;
        if ( DeviceResource >= 0 )
        {
LABEL_47:
          if ( !v61 )
          {
LABEL_55:
            *(_OWORD *)((char *)this + 40) = *(_OWORD *)&v3->LowPart;
            *((_DWORD *)this + 14) = v3[2].LowPart;
            goto LABEL_56;
          }
          v39 = (CPrimitiveGroupDrawListGenerator *)((char *)this + 16);
          v40 = *(__int64 (__fastcall **)(CD2DResource *, struct IDeviceResourceNotify *))(*(_QWORD *)v61 + 24LL);
          if ( v40 == CD2DResource::AddResourceNotifier )
            v41 = CD2DResource::AddResourceNotifier(v61, v39);
          else
            v41 = v40(v61, v39);
          v4 = v41;
          if ( v41 >= 0 )
          {
            v42 = v61;
            v43 = *((_QWORD *)this + 16);
            v37 = 0LL;
            v61 = 0LL;
            *((_QWORD *)this + 16) = v42;
            if ( v43 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
              v37 = v61;
            }
            goto LABEL_53;
          }
          v56 = 272;
          v54 = v41;
LABEL_98:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, v56);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v61);
          goto LABEL_56;
        }
        v56 = 263;
      }
      else
      {
        if ( !*((_QWORD *)this + 15) )
        {
LABEL_53:
          if ( v37 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(struct IDeviceResource *))(*(_QWORD *)v37 + 16LL))(v37);
          }
          goto LABEL_55;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v61);
        DeviceResource = CDrawListBitmap::GetDeviceResource(*((CDrawListBitmap **)this + 15), &v61);
        v4 = DeviceResource;
        if ( DeviceResource >= 0 )
          goto LABEL_47;
        v56 = 267;
      }
      v54 = DeviceResource;
      goto LABEL_98;
    }
    v45 = 24LL * *((unsigned int *)this + 20);
    if ( !is_mul_ok(v35, 0x18uLL) )
      v45 = -1LL;
    v12 = __CFADD__(v45, 8LL);
    v46 = v45 + 8;
    if ( v12 )
      v46 = -1LL;
    if ( !v46 )
      v46 = 1LL;
    v47 = HeapAlloc(WPF::g_processHeap, 0, v46);
    if ( v47 )
    {
      v49 = v47 + 1;
      *v47 = v35;
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)(v47 + 1),
        0x18uLL,
        v35,
        (void *(*)(void *))CDrawListBitmap::CDrawListBitmap);
    }
    else
    {
      v49 = 0LL;
    }
    v50 = (CDrawListBitmap *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = v49;
    if ( v50 )
    {
      CDrawListBitmap::`vector deleting destructor'(v50, v48);
      v49 = (_QWORD *)*((_QWORD *)this + 15);
    }
    if ( v49 )
    {
      v51 = 0LL;
      v52 = 0LL;
      while ( 1 )
      {
        v53 = CDrawListBitmap::FromImageSource(
                (CDrawListBitmap *)(*((_QWORD *)this + 15) + 24 * v51),
                *(struct IImageSource **)(v52 + *((_QWORD *)this + 11)),
                v61,
                0);
        v4 = v53;
        if ( v53 < 0 )
          break;
        v51 = (unsigned int)(v51 + 1);
        v52 += 8LL;
        if ( (unsigned int)v51 >= (unsigned int)v35 )
          goto LABEL_45;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0xFDu);
      goto LABEL_56;
    }
    v55 = 246;
LABEL_88:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v55);
    goto LABEL_89;
  }
  return (unsigned int)v4;
}
