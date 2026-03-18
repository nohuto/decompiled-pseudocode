/*
 * XREFs of ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180027268 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EDB8 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180174EF0 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180028C20 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180046620 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180048570 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18004D7E0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008DE60 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18008DFB0 (-GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?AddResourceNotifier@CHwTextureRenderTarget@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18008FAB0 (-AddResourceNotifier@CHwTextureRenderTarget@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18009DEA0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18011B864 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ?GetDeviceResource@CDrawListBitmap@@QEBAJPEAPEAVIDeviceResource@@@Z @ 0x18011C650 (-GetDeviceResource@CDrawListBitmap@@QEBAJPEAPEAVIDeviceResource@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::RealizeBitmaps(
        CPrimitiveGroupDrawListGenerator *this,
        const struct CDrawingContext *a2,
        char a3)
{
  const struct RenderTargetInfo *v3; // r13
  int v4; // edi
  char *v6; // rcx
  char *v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  bool v12; // cf
  SIZE_T v13; // rax
  _QWORD *v14; // rax
  char *v15; // r15
  CDrawListBitmap *v16; // r12
  char *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r12
  CGdiSpriteBitmap *v22; // rbx
  __int64 (__fastcall *v23)(CCachedVisualImage *__hidden, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  struct IDeviceTexture *v25; // rcx
  CDxHandleBitmapRealization *v26; // rdi
  int (*v27)(CCachedVisualImage *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  __int64 v29; // rcx
  struct IDeviceTexture *v30; // rax
  __int64 v31; // rcx
  struct IDeviceTexture *v32; // rcx
  struct IBitmapRealization *v33; // rcx
  unsigned __int64 v34; // r12
  __int64 v35; // rcx
  struct IDeviceResource *v36; // r8
  __int64 (__fastcall ***v37)(_QWORD, GUID *, struct IDeviceResource **); // rcx
  int v38; // eax
  struct IDeviceResourceNotify *v39; // rdx
  __int64 (__fastcall *v40)(CD2DResource *, struct IDeviceResourceNotify *); // rax
  int v41; // eax
  struct IDeviceResource *v42; // rax
  __int64 v43; // rcx
  char *v45; // rbx
  char *v46; // rbx
  char *v47; // rbx
  __int64 v48; // rax
  SIZE_T v49; // rax
  _QWORD *v50; // rax
  char *v51; // r15
  char *v52; // rcx
  char *v53; // rbx
  __int64 v54; // rbx
  __int64 v55; // r15
  int v56; // eax
  int v57; // r9d
  int DeviceResource; // eax
  unsigned int v59; // [rsp+20h] [rbp-38h]
  unsigned int v60; // [rsp+20h] [rbp-38h]
  struct IDeviceTexture *v61; // [rsp+30h] [rbp-28h] BYREF
  struct IBitmapRealization *v62; // [rsp+38h] [rbp-20h] BYREF
  __int64 v63; // [rsp+40h] [rbp-18h]
  unsigned int v64; // [rsp+A0h] [rbp+48h]
  struct IDeviceResource *v65; // [rsp+A8h] [rbp+50h] BYREF
  char v66; // [rsp+B0h] [rbp+58h]
  unsigned int v67; // [rsp+B8h] [rbp+60h]

  v66 = a3;
  v65 = a2;
  v3 = (const struct CDrawingContext *)((char *)a2 + 392);
  v4 = 0;
  if ( *((_DWORD *)this + 12) != *((_DWORD *)a2 + 98)
    || *((_DWORD *)this + 13) != *((_DWORD *)a2 + 99)
    || *((_DWORD *)this + 14) != *((_DWORD *)a2 + 100)
    || *((_DWORD *)this + 15) != *((_DWORD *)a2 + 101)
    || *((_BYTE *)this + 64) != *((_BYTE *)a2 + 408) )
  {
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_DWORD *)this + 16) = 0;
    v6 = (char *)*((_QWORD *)this + 15);
    if ( v6 )
    {
      v45 = v6 - 8;
      `vector destructor iterator'(v6, 24LL, *((_QWORD *)v6 - 1), CDrawListBitmap::~CDrawListBitmap);
      WPF::ProcessHeapImpl::Free(v45);
      *((_QWORD *)this + 15) = 0LL;
    }
    v7 = (char *)*((_QWORD *)this + 16);
    if ( v7 )
    {
      v46 = v7 - 8;
      `vector destructor iterator'(v7, 24LL, *((_QWORD *)v7 - 1), CDrawListBitmap::~CDrawListBitmap);
      WPF::ProcessHeapImpl::Free(v46);
      *((_QWORD *)this + 16) = 0LL;
    }
    v8 = *((_QWORD *)this + 17);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 32LL))(v8, (char *)this + 16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 136);
    }
    v9 = *((unsigned int *)this + 20);
    v67 = v9;
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
        *v14 = (unsigned int)v9;
        v15 = (char *)(v14 + 1);
        v16 = (CDrawListBitmap *)(v14 + 1);
        do
        {
          CDrawListBitmap::CDrawListBitmap(v16);
          v16 = (CDrawListBitmap *)((char *)v16 + 24);
          --v10;
        }
        while ( v10 );
        LODWORD(v9) = v67;
      }
      else
      {
        v15 = 0LL;
      }
      v17 = (char *)*((_QWORD *)this + 15);
      if ( v15 != v17 )
      {
        if ( v17 )
        {
          v47 = v17 - 8;
          `vector destructor iterator'(v17, 24LL, *((_QWORD *)v17 - 1), CDrawListBitmap::~CDrawListBitmap);
          WPF::ProcessHeapImpl::Free(v47);
        }
        *((_QWORD *)this + 15) = v15;
      }
      if ( !*((_QWORD *)this + 15) )
      {
        v59 = 235;
        goto LABEL_80;
      }
      v64 = 0;
      if ( (_DWORD)v9 )
      {
        v18 = 0LL;
        v63 = 0LL;
        v19 = 0LL;
        while ( 1 )
        {
          v20 = *((_QWORD *)this + 9);
          v62 = 0LL;
          v61 = 0LL;
          v21 = *((_QWORD *)this + 15);
          v22 = *(CGdiSpriteBitmap **)(v18 + v20);
          v23 = *(__int64 (__fastcall **)(CCachedVisualImage *__hidden, struct IBitmapRealization **))(*(_QWORD *)v22 + 80LL);
          if ( v23 == CGdiSpriteBitmap::GetCurrentRenderingRealization )
          {
            CurrentRenderingRealization = CGdiSpriteBitmap::GetCurrentRenderingRealization(v22, &v62);
          }
          else if ( v23 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
          {
            CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v22, &v62);
          }
          else
          {
            CurrentRenderingRealization = v23 == CCachedVisualImage::GetCurrentRenderingRealization
                                        ? CCachedVisualImage::GetCurrentRenderingRealization(v22, &v62)
                                        : v23(v22, &v62);
          }
          v4 = CurrentRenderingRealization;
          if ( CurrentRenderingRealization < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentRenderingRealization, 0x30u);
          }
          else
          {
            v25 = v61;
            v26 = v62;
            if ( v61 )
            {
              v61 = 0LL;
              (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v25 + 16LL))(v25);
            }
            v27 = *(int (**)(CCachedVisualImage *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v26 + 144LL);
            if ( (char *)v27 == (char *)CDxHandleBitmapRealization::GetDeviceTexture )
              DeviceTexture = CDxHandleBitmapRealization::GetDeviceTexture(v26, v3, &v61);
            else
              DeviceTexture = v27 == CCachedVisualImage::GetDeviceTexture
                            ? CCachedVisualImage::GetDeviceTexture(v26, v3, &v61)
                            : ((__int64 (__fastcall *)(CDxHandleBitmapRealization *, const struct RenderTargetInfo *, struct IDeviceTexture **))v27)(
                                v26,
                                v3,
                                &v61);
            v4 = DeviceTexture;
            if ( DeviceTexture < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTexture, 0x37u);
            }
            else
            {
              if ( *(CGdiSpriteBitmap **)(v19 + v21) != v22 )
              {
                (*(void (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v22 + 8LL))(v22);
                v29 = *(_QWORD *)(v19 + v21);
                *(_QWORD *)(v19 + v21) = v22;
                if ( v29 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
              }
              v30 = v61;
              v31 = *(_QWORD *)(v19 + v21 + 8);
              v61 = 0LL;
              *(_QWORD *)(v19 + v21 + 8) = v30;
              if ( v31 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              *(_BYTE *)(v19 + v21 + 16) = v66;
            }
          }
          v32 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v32 + 16LL))(v32);
          }
          v33 = v62;
          if ( v62 )
          {
            v62 = 0LL;
            (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v33 + 16LL))(v33);
          }
          if ( v4 < 0 )
            break;
          v19 += 24LL;
          v18 = v63 + 8;
          ++v64;
          v63 += 8LL;
          if ( v64 >= v67 )
            goto LABEL_46;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xF2u);
LABEL_61:
        if ( v4 >= 0 )
          return (unsigned int)v4;
LABEL_81:
        CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(this);
        return (unsigned int)v4;
      }
    }
LABEL_46:
    v34 = *((unsigned int *)this + 24);
    if ( !(_DWORD)v34 )
    {
LABEL_47:
      v35 = *((_QWORD *)this + 15);
      v36 = 0LL;
      v65 = 0LL;
      if ( v35 )
      {
        v37 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IDeviceResource **))(v35 + 8);
        if ( v37 )
        {
          v38 = (**v37)(v37, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v65);
          v4 = v38;
          if ( v38 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x8Eu);
          if ( v4 >= 0 )
          {
LABEL_52:
            if ( !v65 )
            {
LABEL_60:
              *((_OWORD *)this + 3) = *(_OWORD *)v3;
              *((_DWORD *)this + 16) = *((_DWORD *)v3 + 4);
              goto LABEL_61;
            }
            v39 = (CPrimitiveGroupDrawListGenerator *)((char *)this + 16);
            v40 = *(__int64 (__fastcall **)(CD2DResource *, struct IDeviceResourceNotify *))(*(_QWORD *)v65 + 24LL);
            if ( v40 == CD2DResource::AddResourceNotifier )
            {
              v41 = CD2DResource::AddResourceNotifier(v65, v39);
            }
            else if ( v40 == CHwTextureRenderTarget::AddResourceNotifier )
            {
              v41 = CHwTextureRenderTarget::AddResourceNotifier(v65, v39);
            }
            else
            {
              v41 = v40(v65, v39);
            }
            v4 = v41;
            if ( v41 >= 0 )
            {
              v42 = v65;
              v43 = *((_QWORD *)this + 17);
              v36 = 0LL;
              v65 = 0LL;
              *((_QWORD *)this + 17) = v42;
              if ( v43 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
                v36 = v65;
              }
              goto LABEL_58;
            }
            v60 = 276;
            goto LABEL_108;
          }
        }
        else
        {
          v4 = -2003304315;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304315, 0x8Bu);
        }
        v60 = 267;
LABEL_108:
        v57 = v4;
LABEL_109:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, v60);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v65);
        goto LABEL_61;
      }
      if ( !*((_QWORD *)this + 16) )
      {
LABEL_58:
        if ( v36 )
        {
          v65 = 0LL;
          (*(void (__fastcall **)(struct IDeviceResource *))(*(_QWORD *)v36 + 16LL))(v36);
        }
        goto LABEL_60;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v65);
      DeviceResource = CDrawListBitmap::GetDeviceResource(*((CDrawListBitmap **)this + 16), &v65);
      v4 = DeviceResource;
      if ( DeviceResource < 0 )
      {
        v60 = 271;
        v57 = DeviceResource;
        goto LABEL_109;
      }
      goto LABEL_52;
    }
    v48 = 24LL * *((unsigned int *)this + 24);
    if ( !is_mul_ok(v34, 0x18uLL) )
      v48 = -1LL;
    v12 = __CFADD__(v48, 8LL);
    v49 = v48 + 8;
    if ( v12 )
      v49 = -1LL;
    if ( !v49 )
      v49 = 1LL;
    v50 = HeapAlloc(WPF::g_processHeap, 0, v49);
    if ( v50 )
    {
      v51 = (char *)(v50 + 1);
      *v50 = v34;
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)(v50 + 1),
        24LL,
        v34,
        (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CDrawListBitmap::CDrawListBitmap);
    }
    else
    {
      v51 = 0LL;
    }
    v52 = (char *)*((_QWORD *)this + 16);
    if ( v51 != v52 )
    {
      if ( v52 )
      {
        v53 = v52 - 8;
        `vector destructor iterator'(v52, 24LL, *((_QWORD *)v52 - 1), CDrawListBitmap::~CDrawListBitmap);
        WPF::ProcessHeapImpl::Free(v53);
      }
      *((_QWORD *)this + 16) = v51;
    }
    if ( *((_QWORD *)this + 16) )
    {
      v54 = 0LL;
      v55 = 0LL;
      while ( 1 )
      {
        v56 = CDrawListBitmap::FromImageSource(
                (CDrawListBitmap *)(*((_QWORD *)this + 16) + 24 * v54),
                *(struct IImageSource **)(v55 + *((_QWORD *)this + 11)),
                v65,
                0,
                0);
        v4 = v56;
        if ( v56 < 0 )
          break;
        v54 = (unsigned int)(v54 + 1);
        v55 += 8LL;
        if ( (unsigned int)v54 >= (unsigned int)v34 )
          goto LABEL_47;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x101u);
      goto LABEL_61;
    }
    v59 = 250;
LABEL_80:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v59);
    goto LABEL_81;
  }
  return (unsigned int)v4;
}
