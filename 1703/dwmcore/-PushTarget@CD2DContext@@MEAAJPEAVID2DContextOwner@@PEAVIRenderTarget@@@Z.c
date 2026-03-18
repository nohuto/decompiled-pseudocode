/*
 * XREFs of ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800ADDF0
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18000F688 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18000FD68 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x18007B190 (--0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@.c)
 *     ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18007B230 (-GetColorSpace@CD2DTarget@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18007B250 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x18007B2BC (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?Set@CHWCallbackRenderer@@QEAAXIAEBURenderTargetInfo@@IIW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008DF3C (-Set@CHWCallbackRenderer@@QEAAXIAEBURenderTargetInfo@@IIW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetCurrentDisplayId@CDrawingContext@@UEBA?AVDisplayId@@XZ @ 0x1800A1DF0 (-GetCurrentDisplayId@CDrawingContext@@UEBA-AVDisplayId@@XZ.c)
 *     ?GetCurrentAdapterLuid@CDrawingContext@@UEBA?AU_LUID@@XZ @ 0x1800A1E00 (-GetCurrentAdapterLuid@CDrawingContext@@UEBA-AU_LUID@@XZ.c)
 *     ?GetCurrentStereoContext@CDrawingContext@@UEBA?AW4StereoContext@@XZ @ 0x1800A1E40 (-GetCurrentStereoContext@CDrawingContext@@UEBA-AW4StereoContext@@XZ.c)
 *     ?GetCurrentHardwareProtection@CDrawingContext@@UEBA_NXZ @ 0x1800A1E50 (-GetCurrentHardwareProtection@CDrawingContext@@UEBA_NXZ.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C5FC4 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800C9990 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PushTarget(CD2DContext *this, struct ID2DContextOwner *a2, struct IRenderTarget *a3)
{
  CHWCallbackRenderer **v3; // r15
  struct ID2D1PrivateCompositorRenderer **v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  CD2DTarget *v10; // r15
  int v11; // eax
  __int64 v12; // r13
  __int64 (__fastcall *v13)(struct ID2DContextOwner *, CD2DTarget **); // rax
  _QWORD *CurrentAdapterLuid; // rax
  _DWORD *(__fastcall *v15)(__int64, CD2DTarget **); // rax
  _DWORD *CurrentDisplayId; // rax
  __int64 (__fastcall *v17)(__int64); // rax
  int CurrentStereoContext; // eax
  __int64 (__fastcall *v19)(CDrawingContext *); // rax
  char CurrentHardwareProtection; // al
  int v21; // eax
  int v22; // ebx
  CD2DTarget **v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  CD2DTarget *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  int v33; // eax
  CD2DTarget *v34; // r13
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  int v41; // edi
  int v42; // ebx
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  CD2DTarget *v48; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1Bitmap1 *v49; // [rsp+78h] [rbp+48h] BYREF
  struct ID2D1PrivateDepthBuffer *v50; // [rsp+80h] [rbp+50h] BYREF

  v3 = (CHWCallbackRenderer **)((char *)this + 464);
  if ( *((_QWORD *)this + 58) )
  {
    v33 = *((_DWORD *)this + 90);
    v34 = 0LL;
    if ( v33 )
      v34 = *(CD2DTarget **)(*((_QWORD *)this + 42) + 8LL * (unsigned int)(v33 - 1));
    v35 = *((_DWORD *)this + 90);
    v36 = 0LL;
    if ( v35 )
      v36 = *(_QWORD *)(*((_QWORD *)this + 42) + 8LL * (unsigned int)(v35 - 1));
    v37 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v36 + 24) + 120LL))(*(_QWORD *)(v36 + 24));
    v38 = 0LL;
    LODWORD(v48) = *(_DWORD *)(v37 + 152);
    v39 = *((_DWORD *)this + 90);
    if ( v39 )
      v38 = *(_QWORD *)(*((_QWORD *)this + 42) + 8LL * (unsigned int)(v39 - 1));
    v40 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v38 + 24) + 120LL))(*(_QWORD *)(v38 + 24));
    v41 = *((_DWORD *)this + 8);
    v42 = *(_DWORD *)(v40 + 148);
    ColorSpace = (unsigned int)CD2DTarget::GetColorSpace(v34);
    CHWCallbackRenderer::Set(*v3, v41, (CD2DContext *)((char *)this + 440), v42, (signed int)v48, ColorSpace);
    v44 = CD2DContext::DrawCustomCallbackRendererInternal(this, *v3);
    if ( v44 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x3E2u);
    else
      ReleaseInterface<CWARPCallbackRenderer>(v3);
  }
  else
  {
    v7 = (struct ID2D1PrivateCompositorRenderer **)((char *)this + 472);
    v8 = *((_QWORD *)this + 59);
    if ( v8 )
    {
      *(_DWORD *)(v8 + 44) = *((_DWORD *)this + 8);
      *(_OWORD *)(v8 + 48) = *(_OWORD *)((char *)this + 440);
      *(_DWORD *)(v8 + 64) = *((_DWORD *)this + 114);
      *(_BYTE *)(v8 + 68) = 1;
      v47 = CD2DContext::DrawCustomCallbackRendererInternal(this, *v7);
      if ( v47 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x3EEu);
      else
        ReleaseInterface<CWARPCallbackRenderer>(v7);
    }
  }
  v49 = 0LL;
  v9 = (_QWORD *)((char *)this + 336);
  v50 = 0LL;
  v10 = 0LL;
  v11 = *((_DWORD *)this + 90);
  v12 = 0LL;
  if ( v11 )
    v12 = *(_QWORD *)(*v9 + 8LL * (unsigned int)(v11 - 1));
  v13 = *(__int64 (__fastcall **)(struct ID2DContextOwner *, CD2DTarget **))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v13 == (char *)CDrawingContext::GetCurrentAdapterLuid )
    CurrentAdapterLuid = (_QWORD *)CDrawingContext::GetCurrentAdapterLuid(a2, &v48);
  else
    CurrentAdapterLuid = (_QWORD *)v13(a2, &v48);
  *((_QWORD *)this + 55) = *CurrentAdapterLuid;
  v15 = *(_DWORD *(__fastcall **)(__int64, CD2DTarget **))(*(_QWORD *)a2 + 56LL);
  if ( (char *)v15 == (char *)CDrawingContext::GetCurrentDisplayId )
    CurrentDisplayId = CDrawingContext::GetCurrentDisplayId((__int64)a2, &v48);
  else
    CurrentDisplayId = v15((__int64)a2, &v48);
  *((_DWORD *)this + 112) = *CurrentDisplayId;
  v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v17 == CDrawingContext::GetCurrentStereoContext )
    CurrentStereoContext = CDrawingContext::GetCurrentStereoContext((__int64)a2);
  else
    CurrentStereoContext = v17((__int64)a2);
  *((_DWORD *)this + 113) = CurrentStereoContext;
  v19 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)a2 + 72LL);
  if ( v19 == CDrawingContext::GetCurrentHardwareProtection )
    CurrentHardwareProtection = CDrawingContext::GetCurrentHardwareProtection(a2);
  else
    CurrentHardwareProtection = v19(a2);
  *((_BYTE *)this + 456) = CurrentHardwareProtection;
  v21 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct ID2D1Bitmap1 **))(*(_QWORD *)a3 + 112LL))(a3, &v49);
  LODWORD(v48) = v21;
  v22 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x41Eu);
  }
  else
  {
    (*(void (__fastcall **)(struct IRenderTarget *, struct ID2D1PrivateDepthBuffer **))(*(_QWORD *)a3 + 128LL))(
      a3,
      &v50);
    if ( !v12 )
    {
      v23 = (CD2DTarget **)((char *)this + 432);
      v24 = *((_QWORD *)this + 54);
      if ( v24 && v49 == *(struct ID2D1Bitmap1 **)(v24 + 32) && v50 == *(struct ID2D1PrivateDepthBuffer **)(v24 + 40) )
      {
        *(_QWORD *)v24 = a2;
        v25 = *((unsigned int *)this + 90);
        v48 = *v23;
        v26 = (unsigned int)v48;
        v27 = v25 + 1;
        if ( (int)v25 + 1 >= (unsigned int)v25 )
          v26 = v25 + 1;
        v22 = v27 < (unsigned int)v25 ? 0x80070216 : 0;
        if ( v27 < (unsigned int)v25 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xB5u);
        }
        else if ( v26 > *((_DWORD *)this + 89) )
        {
          v45 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 336, 8u, 1, &v48);
          v22 = v45;
          if ( v45 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*v9 + 8 * v25) = v48;
          *((_DWORD *)this + 90) = v26;
        }
        LODWORD(v48) = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x430u);
        else
          *v23 = 0LL;
        goto LABEL_25;
      }
      SAFE_DELETE<CD2DTarget>((char *)this + 432);
    }
    v29 = (CD2DTarget *)operator new(0x50uLL);
    if ( v29 )
      v10 = CD2DTarget::CD2DTarget(v29, a2, *((struct CD2DFactory **)this + 19), a3, v49, v50);
    else
      v10 = 0LL;
    if ( !v10 )
    {
      v22 = -2147024882;
      LODWORD(v48) = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x444u);
      goto LABEL_25;
    }
    v30 = *((unsigned int *)this + 90);
    v48 = v10;
    v31 = (unsigned int)v10;
    v32 = v30 + 1;
    if ( (int)v30 + 1 >= (unsigned int)v30 )
      v31 = v30 + 1;
    v22 = v32 < (unsigned int)v30 ? 0x80070216 : 0;
    if ( v32 < (unsigned int)v30 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xB5u);
    }
    else if ( v31 > *((_DWORD *)this + 89) )
    {
      v46 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 336, 8u, 1, &v48);
      v22 = v46;
      if ( v46 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v9 + 8 * v30) = v48;
      *((_DWORD *)this + 90) = v31;
    }
    LODWORD(v48) = v22;
    if ( v22 >= 0 )
    {
      if ( *((_BYTE *)this + 480) )
      {
        if ( v12 )
          *(_BYTE *)(v12 + 48) = 0;
        CD2DTarget::ApplyState(v10, this);
      }
      goto LABEL_25;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x449u);
  }
  if ( v10 )
    CD2DTarget::`scalar deleting destructor'(v10);
LABEL_25:
  if ( v49 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v49 + 16LL))(v49);
  if ( v50 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v50 + 16LL))(v50);
  TranslateDXGIorD3DErrorInContext(v22, 0, &v48);
  return (unsigned int)v48;
}
