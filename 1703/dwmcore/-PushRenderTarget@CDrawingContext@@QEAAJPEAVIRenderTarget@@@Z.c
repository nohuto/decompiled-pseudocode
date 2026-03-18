/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18000F688
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18001528C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801572D0 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157C00 (-ApplyState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z @ 0x18000213C (--$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18000D8F8 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18001FC90 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800ADDF0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18012D04C (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IRenderTarget *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct IRenderTarget **v6; // rsi
  int updated; // eax
  CD2DContext *v8; // rcx
  struct ID2DContextOwner *v9; // rdx
  __int64 (__fastcall *v10)(CD2DContext *__hidden, struct ID2DContextOwner *, struct IRenderTarget *); // rax
  struct IRenderTarget *v11; // r8
  int v12; // eax
  CD3DDeviceLevel1 *v14; // rax
  unsigned int v15; // [rsp+20h] [rbp-18h]
  CD3DDeviceLevel1 *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  *((_BYTE *)this + 6769) = 1;
  v4 = CDrawingContext::PushClippingScope(this, 0LL, 0, 0LL, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x25E8u);
    goto LABEL_9;
  }
  v6 = (struct IRenderTarget **)((char *)this + 368);
  ReplaceInterface<IDXGIResource,IDXGIResource>((char *)this + 368, a2);
  ReleaseInterface<ID2D1Geometry>((char *)this + 376);
  (**(void (__fastcall ***)(struct IRenderTarget *, GUID *, char *))*v6)(
    *v6,
    &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
    (char *)this + 376);
  updated = (*(__int64 (__fastcall **)(struct IRenderTarget *, CD3DDeviceLevel1 **))(*(_QWORD *)*v6 + 56LL))(*v6, &v16);
  v5 = updated;
  if ( updated < 0 )
  {
    v15 = 9721;
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 49) )
  {
    v14 = v16;
    v16 = 0LL;
    *((_QWORD *)this + 49) = v14;
  }
  updated = CDrawingContext::UpdateRenderTargetState(this);
  v5 = updated;
  if ( updated < 0 )
  {
    v15 = 9738;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v15);
    goto LABEL_15;
  }
  v8 = (CD2DContext *)*((_QWORD *)this + 49);
  v9 = (CDrawingContext *)((char *)this + 8);
  v10 = *(__int64 (__fastcall **)(CD2DContext *__hidden, struct ID2DContextOwner *, struct IRenderTarget *))(*(_QWORD *)v8 + 24LL);
  v11 = *v6;
  if ( v10 == CD2DContext::PushTarget )
    v12 = CD2DContext::PushTarget(v8, v9, v11);
  else
    v12 = v10(v8, v9, v11);
  v5 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x2610u);
LABEL_15:
    CDrawingContext::PopClippingScope(this, 0);
  }
LABEL_9:
  ReleaseInterfaceNoNULL<ID2DContext>(v16);
  return v5;
}
