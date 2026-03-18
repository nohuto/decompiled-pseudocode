/*
 * XREFs of ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180045370
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetCurrentRenderTargetInfo@CDrawingContext@@UEBAAEBURenderTargetInfo@@XZ @ 0x180036D00 (-GetCurrentRenderTargetInfo@CDrawingContext@@UEBAAEBURenderTargetInfo@@XZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x180081A84 (--0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180081B24 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180081B90 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800C00F4 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PushTarget(CD2DContext *this, struct ID2DContextOwner *a2, struct IRenderTarget *a3)
{
  _QWORD *v6; // rsi
  CD2DTarget *v7; // r14
  int v8; // eax
  __int64 v9; // r13
  const struct RenderTargetInfo *(__fastcall *v10)(CDrawingContext *); // rax
  const struct RenderTargetInfo *CurrentRenderTargetInfo; // rax
  int v12; // eax
  int v13; // ebx
  CD2DTarget **v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // eax
  CD2DTarget *v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // edx
  CD2DTarget *v27; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1Bitmap1 *v28; // [rsp+78h] [rbp+48h] BYREF
  struct ID2D1PrivateDepthBuffer *v29; // [rsp+80h] [rbp+50h] BYREF

  CD2DContext::FlushDrawList(this);
  v28 = 0LL;
  v6 = (_QWORD *)((char *)this + 320);
  v29 = 0LL;
  v7 = 0LL;
  v8 = *((_DWORD *)this + 86);
  v9 = 0LL;
  if ( v8 )
    v9 = *(_QWORD *)(*v6 + 8LL * (unsigned int)(v8 - 1));
  v10 = *(const struct RenderTargetInfo *(__fastcall **)(CDrawingContext *))(*(_QWORD *)a2 + 80LL);
  if ( v10 == CDrawingContext::GetCurrentRenderTargetInfo )
    CurrentRenderTargetInfo = CDrawingContext::GetCurrentRenderTargetInfo(a2);
  else
    CurrentRenderTargetInfo = v10(a2);
  *(_OWORD *)((char *)this + 424) = *(_OWORD *)CurrentRenderTargetInfo;
  *((_DWORD *)this + 110) = *((_DWORD *)CurrentRenderTargetInfo + 4);
  v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct ID2D1Bitmap1 **))(*(_QWORD *)a3 + 96LL))(a3, &v28);
  LODWORD(v27) = v12;
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x35Cu);
  }
  else
  {
    (*(void (__fastcall **)(struct IRenderTarget *, struct ID2D1PrivateDepthBuffer **))(*(_QWORD *)a3 + 112LL))(
      a3,
      &v29);
    if ( !v9 )
    {
      v14 = (CD2DTarget **)((char *)this + 416);
      v15 = *((_QWORD *)this + 52);
      if ( v15 && v28 == *(struct ID2D1Bitmap1 **)(v15 + 32) && v29 == *(struct ID2D1PrivateDepthBuffer **)(v15 + 40) )
      {
        *(_QWORD *)v15 = a2;
        v16 = *((unsigned int *)this + 86);
        v27 = *v14;
        v17 = (unsigned int)v27;
        v18 = v16 + 1;
        if ( (int)v16 + 1 >= (unsigned int)v16 )
          v17 = v16 + 1;
        v13 = v18 < (unsigned int)v16 ? 0x80070216 : 0;
        if ( v18 < (unsigned int)v16 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB5u);
        }
        else if ( v17 > *((_DWORD *)this + 85) )
        {
          v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 320, 8LL, 1LL, &v27);
          v13 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*v6 + 8 * v16) = v27;
          *((_DWORD *)this + 86) = v17;
        }
        LODWORD(v27) = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x36Eu);
        else
          *v14 = 0LL;
        goto LABEL_17;
      }
      SAFE_DELETE<CD2DTarget>((char *)this + 416);
    }
    v20 = (CD2DTarget *)operator new(0x50uLL);
    if ( v20 )
      v7 = CD2DTarget::CD2DTarget(v20, a2, *((struct CD2DFactory **)this + 19), a3, v28, v29);
    else
      v7 = 0LL;
    if ( !v7 )
    {
      v13 = -2147024882;
      LODWORD(v27) = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x382u);
      goto LABEL_17;
    }
    v21 = *((unsigned int *)this + 86);
    v27 = v7;
    v22 = (unsigned int)v7;
    v23 = v21 + 1;
    if ( (int)v21 + 1 >= (unsigned int)v21 )
      v22 = v21 + 1;
    v13 = v23 < (unsigned int)v21 ? 0x80070216 : 0;
    if ( v23 < (unsigned int)v21 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB5u);
    }
    else if ( v22 > *((_DWORD *)this + 85) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 320, 8LL, 1LL, &v27);
      v13 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v6 + 8 * v21) = v27;
      *((_DWORD *)this + 86) = v22;
    }
    LODWORD(v27) = v13;
    if ( v13 >= 0 )
    {
      if ( *((_BYTE *)this + 464) )
      {
        if ( v9 )
          *(_BYTE *)(v9 + 48) = 0;
        CD2DTarget::ApplyState(v7, this);
      }
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x387u);
  }
  if ( v7 )
    CD2DTarget::`scalar deleting destructor'(v7, v26);
LABEL_17:
  if ( v28 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v29 + 16LL))(v29);
  TranslateDXGIorD3DErrorInContext(v13, 0, &v27);
  return (unsigned int)v27;
}
