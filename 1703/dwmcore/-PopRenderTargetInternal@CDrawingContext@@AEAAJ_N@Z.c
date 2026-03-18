/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F84C
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180015610 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801573E0 (-RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18001FC90 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18004D094 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800AE1F0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  unsigned __int64 v2; // r8
  CD2DContext *v6; // rcx
  const struct ID2DContextOwner *v7; // rdx
  __int64 (__fastcall *v8)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **); // rax
  int v9; // eax
  unsigned int v10; // ebx
  int updated; // eax
  __int64 result; // rax
  struct IRenderTarget *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v2 = (unsigned __int64)this + 8;
  v6 = (CD2DContext *)*((_QWORD *)this + 49);
  v7 = (const struct ID2DContextOwner *)(v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  v8 = *(__int64 (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v6 + 32LL);
  if ( v8 == CD2DContext::PopTarget )
    v9 = CD2DContext::PopTarget(v6, v7, &v13);
  else
    v9 = v8(v6, v7, &v13);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( g_LockAndReadD2DTarget )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 46) + 176LL))(
        *((_QWORD *)this + 46),
        0LL,
        0LL);
    if ( !a2 )
    {
      ReplaceInterface<IDXGIResource,IDXGIResource>((char *)this + 368, v13);
      ReleaseInterface<ID2D1Geometry>((char *)this + 376);
      (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 46))(
        *((_QWORD *)this + 46),
        &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
        (char *)this + 376);
      updated = CDrawingContext::UpdateRenderTargetState(this);
      v10 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2639u);
      goto LABEL_9;
    }
LABEL_13:
    ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 368);
    ReleaseInterface<ID2D1Geometry>((char *)this + 376);
    goto LABEL_10;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2628u);
  if ( a2 )
    goto LABEL_13;
LABEL_9:
  --*((_DWORD *)this + 234);
LABEL_10:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v13);
  result = v10;
  *((_BYTE *)this + 6769) = 1;
  return result;
}
