/*
 * XREFs of ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180095F00
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800654E0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?QueueForRender@CHWCallbackRenderer@@QEAAXIPEAVIRenderTarget@@@Z @ 0x180059CA4 (-QueueForRender@CHWCallbackRenderer@@QEAAXIPEAVIRenderTarget@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentRenderTargetInfo@CDrawingContext@@UEBAAEBURenderTargetInfo@@XZ @ 0x1800673E0 (-GetCurrentRenderTargetInfo@CDrawingContext@@UEBAAEBURenderTargetInfo@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x180094E8C (--0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180094F10 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180094F78 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x180095BF0 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C3D28 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800C87FC (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PushTarget(CD2DContext *this, struct ID2DContextOwner *a2, struct IRenderTarget *a3)
{
  struct ID2D1PrivateCompositorRenderer **v3; // rbx
  CHWCallbackRenderer *v5; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  CD2DTarget *v10; // r14
  int v11; // eax
  __int64 v12; // r15
  const struct RenderTargetInfo *(__fastcall *v13)(CDrawingContext *); // rax
  const struct RenderTargetInfo *CurrentRenderTargetInfo; // rax
  int v15; // eax
  int v16; // ebx
  CD2DTarget **v17; // r14
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edx
  CD2DTarget *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  CD2DTarget *v31; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1Bitmap1 *v32; // [rsp+78h] [rbp+48h] BYREF
  struct ID2D1PrivateDepthBuffer *v33; // [rsp+80h] [rbp+50h] BYREF

  v3 = (struct ID2D1PrivateCompositorRenderer **)((char *)this + 448);
  v5 = (CHWCallbackRenderer *)*((_QWORD *)this + 56);
  if ( v5 )
  {
    v25 = *((_DWORD *)this + 86);
    v26 = 0LL;
    if ( v25 )
      v26 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v25 - 1));
    CHWCallbackRenderer::QueueForRender(v5, *((_DWORD *)this + 8), *(struct IRenderTarget **)(v26 + 24));
    v27 = CD2DContext::DrawCustomCallbackRendererInternal(this, *v3);
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x325u);
    else
      ReleaseInterface<CWARPCallbackRenderer>(v3);
  }
  else
  {
    v8 = *((_QWORD *)this + 57);
    if ( v8 )
    {
      *(_DWORD *)(v8 + 44) = *((_DWORD *)this + 8);
      *(_OWORD *)(v8 + 48) = *(_OWORD *)((char *)this + 424);
      *(_DWORD *)(v8 + 64) = *((_DWORD *)this + 110);
      *(_BYTE *)(v8 + 68) = 1;
      v28 = CD2DContext::DrawCustomCallbackRendererInternal(
              this,
              *((struct ID2D1PrivateCompositorRenderer **)this + 57));
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x331u);
      else
        ReleaseInterface<CWARPCallbackRenderer>((char *)this + 456);
    }
  }
  v32 = 0LL;
  v9 = (_QWORD *)((char *)this + 320);
  v33 = 0LL;
  v10 = 0LL;
  v11 = *((_DWORD *)this + 86);
  v12 = 0LL;
  if ( v11 )
    v12 = *(_QWORD *)(*v9 + 8LL * (unsigned int)(v11 - 1));
  v13 = *(const struct RenderTargetInfo *(__fastcall **)(CDrawingContext *))(*(_QWORD *)a2 + 80LL);
  if ( v13 == CDrawingContext::GetCurrentRenderTargetInfo )
    CurrentRenderTargetInfo = CDrawingContext::GetCurrentRenderTargetInfo(a2);
  else
    CurrentRenderTargetInfo = v13(a2);
  *(_OWORD *)((char *)this + 424) = *(_OWORD *)CurrentRenderTargetInfo;
  *((_DWORD *)this + 110) = *((_DWORD *)CurrentRenderTargetInfo + 4);
  v15 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct ID2D1Bitmap1 **))(*(_QWORD *)a3 + 88LL))(a3, &v32);
  LODWORD(v31) = v15;
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x369u);
  }
  else
  {
    (*(void (__fastcall **)(struct IRenderTarget *, struct ID2D1PrivateDepthBuffer **))(*(_QWORD *)a3 + 128LL))(
      a3,
      &v33);
    if ( !v12 )
    {
      v17 = (CD2DTarget **)((char *)this + 416);
      v18 = *((_QWORD *)this + 52);
      if ( v18 && v32 == *(struct ID2D1Bitmap1 **)(v18 + 32) && v33 == *(struct ID2D1PrivateDepthBuffer **)(v18 + 40) )
      {
        *(_QWORD *)v18 = a2;
        v31 = *v17;
        v19 = *((_DWORD *)this + 86);
        v20 = v19 + 1;
        v16 = v19 + 1 < v19 ? 0x80070216 : 0;
        if ( v19 + 1 < v19 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xB5u);
        }
        else if ( v20 > *((_DWORD *)this + 85) )
        {
          v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 320, 8u, 1, &v31);
          v16 = v29;
          if ( v29 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*v9 + 8LL * v19) = v31;
          *((_DWORD *)this + 86) = v20;
        }
        LODWORD(v31) = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x37Bu);
        else
          *v17 = 0LL;
        goto LABEL_17;
      }
      SAFE_DELETE<CD2DTarget>((char *)this + 416);
    }
    v22 = (CD2DTarget *)operator new(0x50uLL);
    if ( v22 )
      v10 = CD2DTarget::CD2DTarget(v22, a2, *((struct CD2DFactory **)this + 19), a3, v32, v33);
    else
      v10 = 0LL;
    if ( !v10 )
    {
      v16 = -2147024882;
      LODWORD(v31) = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x38Fu);
      goto LABEL_17;
    }
    v23 = *((_DWORD *)this + 86);
    v31 = v10;
    v24 = v23 + 1;
    v16 = v23 + 1 < v23 ? 0x80070216 : 0;
    if ( v23 + 1 < v23 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xB5u);
    }
    else if ( v24 > *((_DWORD *)this + 85) )
    {
      v30 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 320, 8u, 1, &v31);
      v16 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v9 + 8LL * v23) = v31;
      *((_DWORD *)this + 86) = v24;
    }
    LODWORD(v31) = v16;
    if ( v16 >= 0 )
    {
      if ( *((_BYTE *)this + 464) )
      {
        if ( v12 )
          *(_BYTE *)(v12 + 48) = 0;
        CD2DTarget::ApplyState(v10, this);
      }
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x394u);
  }
  if ( v10 )
    CD2DTarget::`scalar deleting destructor'(v10);
LABEL_17:
  if ( v32 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v33 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v33 + 16LL))(v33);
  TranslateDXGIorD3DErrorInContext(v16, 0, &v31);
  return (unsigned int)v31;
}
