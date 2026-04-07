/*
 * XREFs of ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18003DA94
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18003D8A4 (-Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDC.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x18006F440 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800182E4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180019424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180019468 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x1800194E4 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18003DC4C (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateSettings(CFullScreenMagnifier *this, double a2, double a3, double a4)
{
  bool v5; // al
  __int64 v6; // rcx
  struct tagPOINT *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rcx
  struct tagPOINT *v12; // rcx
  struct tagPOINT v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((double *)this + 6) != a2;
  *((double *)this + 6) = a2;
  *((double *)this + 7) = a3;
  *((double *)this + 8) = a4;
  if ( a2 > 1.01 )
  {
    if ( v5 )
    {
      v11 = *((_QWORD *)this + 4);
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, 1LL);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), 1LL);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
      }
    }
    CVisual::SetInterpolationMode(*((CVisual **)this + 5), 1);
    v12 = (struct tagPOINT *)*((_QWORD *)this + 5);
    v13.x = (int)*((double *)this + 7);
    v13.y = (int)*((double *)this + 8);
    CVisual::SetOffset(v12, &v13);
    CVisual::SetScale(*((CVisual **)this + 5), *((double *)this + 6), *((double *)this + 6));
  }
  else
  {
    v6 = *((_QWORD *)this + 4);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 56LL))(*((_QWORD *)this + 4), 0LL);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
    }
    CVisual::SetInterpolationMode(*((CVisual **)this + 5), 0);
    CVisual::ClearInterpolationMode(*((CVisual **)this + 5));
    v7 = (struct tagPOINT *)*((_QWORD *)this + 5);
    v13.x = 0;
    v13.y = 0;
    CVisual::SetOffset(v7, &v13);
    CVisual::SetScale(*((CVisual **)this + 5), 1.0, 1.0);
    CVisual::SetSamplingMode(*((_QWORD *)this + 5), 0LL);
  }
  v8 = CVisual::RenderRecursive(*((CVisual **)this + 5));
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xF7u);
  return v9;
}
