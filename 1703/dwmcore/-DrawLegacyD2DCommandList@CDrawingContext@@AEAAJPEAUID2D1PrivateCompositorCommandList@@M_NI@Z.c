/*
 * XREFs of ?DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z @ 0x18000EF20
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000EFFC (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1800AD1A0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawLegacyD2DCommandList(
        CDrawingContext *this,
        struct ID2D1PrivateCompositorCommandList *a2,
        float a3)
{
  __int64 v5; // r10
  char *v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx

  D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 65));
  CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8));
  v5 = *((_QWORD *)this + 49);
  v6 = (char *)this + 8;
  if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v5 + 152LL) == CD2DContext::DrawLegacyCommandList )
    v7 = CD2DContext::DrawLegacyCommandList(v5, v6, a2);
  else
    v7 = (*(__int64 (__fastcall **)(__int64, char *, struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v5 + 152LL))(
           v5,
           v6,
           a2);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA43u);
  return v8;
}
