/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180042F3C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081490 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014B390 (-RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180036D60 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800BC4E8 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int updated; // eax
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 48) + 32LL))(
         *((_QWORD *)this + 48),
         (char *)this + 8,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( g_LockAndReadD2DTarget )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 45) + 184LL))(
        *((_QWORD *)this + 45),
        0LL,
        0LL);
    if ( !a2 )
    {
      ReplaceInterface<IDXGIResource,IDXGIResource>((char *)this + 360, v8);
      ReleaseInterface<ID2D1Geometry>((char *)this + 368);
      (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 45))(
        *((_QWORD *)this + 45),
        &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
        (char *)this + 368);
      updated = CDrawingContext::UpdateRenderTargetState(this);
      v5 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2441u);
      goto LABEL_7;
    }
LABEL_10:
    ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 360);
    ReleaseInterface<ID2D1Geometry>((char *)this + 368);
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2430u);
  if ( a2 )
    goto LABEL_10;
LABEL_7:
  --*((_DWORD *)this + 258);
LABEL_8:
  ReleaseInterfaceNoNULL<CManipulationManager>(v8);
  result = v5;
  *((_BYTE *)this + 6825) = 1;
  return result;
}
