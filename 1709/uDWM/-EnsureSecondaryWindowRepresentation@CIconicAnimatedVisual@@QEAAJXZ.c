/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x18009E0B0
 * Callers:
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009E188 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18000DBE8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180034FD0 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation(CIconicAnimatedVisual *this)
{
  unsigned int v1; // ebx
  CSecondaryWindowRepresentation **v2; // rsi
  _DWORD *v4; // rbp
  HMONITOR v5; // rax
  int ScaleFactorForMonitorImp; // eax
  int v7; // r9d
  int v8; // eax
  enum DEVICE_SCALE_FACTOR v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (CSecondaryWindowRepresentation **)((char *)this + 288);
  if ( !*((_QWORD *)this + 36) && *((_QWORD *)this + 37) )
  {
    v4 = (_DWORD *)((char *)this + 352);
    v5 = MonitorFromRect((LPCRECT)this + 22, 2u);
    ScaleFactorForMonitorImp = GetScaleFactorForMonitorImp(v5, &v10);
    v1 = ScaleFactorForMonitorImp;
    if ( ScaleFactorForMonitorImp >= 0 )
    {
      v7 = 0;
      if ( v4[2] - *v4 >= 0 )
        v7 = v4[2] - *v4;
      v8 = CSecondaryWindowRepresentation::Create(
             *((_DWORD *)this + 96) | 0x802u,
             (__int64)this + 280,
             *((_QWORD *)this + 37),
             v7,
             v10,
             v2);
      v1 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x52u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ScaleFactorForMonitorImp, 0x4Bu);
    }
  }
  return v1;
}
