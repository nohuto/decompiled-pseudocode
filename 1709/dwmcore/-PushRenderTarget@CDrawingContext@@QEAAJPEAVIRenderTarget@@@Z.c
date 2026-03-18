/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180042D8C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800816F0 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014B270 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180036D60 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18003CC3C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800BC4E8 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18011ACB4 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IRenderTarget *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  int v7; // eax
  int updated; // eax
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  *((_BYTE *)this + 6825) = 1;
  v4 = CDrawingContext::PushClippingScope(this, 0LL, 0, 0LL, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x23F1u);
    goto LABEL_7;
  }
  v6 = (_QWORD *)((char *)this + 360);
  ReplaceInterface<IDXGIResource,IDXGIResource>((char *)this + 360, a2);
  ReleaseInterface<ID2D1Geometry>((char *)this + 368);
  (**(void (__fastcall ***)(_QWORD, GUID *, char *))*v6)(
    *v6,
    &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
    (char *)this + 368);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v6 + 40LL))(*v6, &v12);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2402u);
    goto LABEL_11;
  }
  if ( !*((_QWORD *)this + 48) )
  {
    v11 = v12;
    v12 = 0LL;
    *((_QWORD *)this + 48) = v11;
  }
  updated = CDrawingContext::UpdateRenderTargetState(this);
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2413u);
    goto LABEL_11;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 48) + 24LL))(
         *((_QWORD *)this + 48),
         (char *)this + 8,
         *v6);
  v5 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2419u);
LABEL_11:
    CDrawingContext::PopClippingScope(this, 0);
  }
LABEL_7:
  ReleaseInterfaceNoNULL<CManipulationManager>(v12);
  return v5;
}
