/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006589C
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024A00 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180174200 (-RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180067410 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800961C0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800C2B58 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  unsigned __int64 v2; // r8
  CD2DContext *v6; // rcx
  const struct ID2DContextOwner *v7; // rdx
  __int64 (__fastcall *v8)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **); // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rsi
  int updated; // eax
  __int64 result; // rax
  struct IRenderTarget *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v2 = (unsigned __int64)this + 8;
  v6 = (CD2DContext *)*((_QWORD *)this + 48);
  v7 = (const struct ID2DContextOwner *)(v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  v8 = *(__int64 (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v6 + 32LL);
  if ( v8 == CD2DContext::PopTarget )
    v9 = CD2DContext::PopTarget(v6, v7, &v14);
  else
    v9 = v8(v6, v7, &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (__int64 *)((char *)this + 360);
    if ( g_LockAndReadD2DTarget )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)*v11 + 224LL))(*v11, 0LL, 0LL);
    if ( !a2 )
    {
      ReplaceInterface<IDXGIResource,IDXGIResource>((char *)this + 360, v14);
      ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 46);
      (**(void (__fastcall ***)(__int64, GUID *, char *))*v11)(
        *v11,
        &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
        (char *)this + 368);
      updated = CDrawingContext::UpdateRenderTargetState(this);
      v10 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2589u);
      goto LABEL_9;
    }
LABEL_14:
    ReleaseInterface<IBitmapLock>(v11);
    ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 46);
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2578u);
  if ( a2 )
  {
    v11 = (__int64 *)((char *)this + 360);
    goto LABEL_14;
  }
LABEL_9:
  --*((_DWORD *)this + 258);
LABEL_10:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v14);
  result = v10;
  *((_BYTE *)this + 6825) = 1;
  return result;
}
