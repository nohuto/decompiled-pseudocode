/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180148658
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801480EC (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18013329C (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180195A70 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 */

__int64 __fastcall CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
        CMagnifierRenderTarget *this,
        __int64 a2,
        struct _LUID a3,
        HMONITOR a4,
        struct IRenderTargetBitmap **a5)
{
  int v5; // eax
  CDisplaySet *v6; // rsi
  __int64 v7; // xmm0_8
  int v9; // r8d
  int CurrentDisplaySet; // eax
  unsigned int v14; // edi
  int DisplayIdFromMonitor; // eax
  int v16; // eax
  int v18; // [rsp+50h] [rbp-30h] BYREF
  CDisplaySet *v19; // [rsp+58h] [rbp-28h] BYREF
  int v20[2]; // [rsp+60h] [rbp-20h]
  int v21[2]; // [rsp+68h] [rbp-18h] BYREF
  int v22; // [rsp+70h] [rbp-10h]

  v5 = DisplayId::None;
  v6 = 0LL;
  v7 = *((_QWORD *)this + 39);
  v9 = *((_DWORD *)this + 80);
  v20[1] = 0;
  v19 = 0LL;
  v18 = DisplayId::None;
  *a5 = 0LL;
  *(_QWORD *)v21 = v7;
  v22 = v9;
  v20[0] = 2;
  if ( a4 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v19);
    v14 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, CurrentDisplaySet, 0x360u);
      v6 = v19;
      goto LABEL_8;
    }
    v6 = v19;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v19, a4, (struct DisplayId *)&v18);
    v14 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, DisplayIdFromMonitor, 0x361u);
      goto LABEL_8;
    }
    v5 = v18;
  }
  v16 = CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
          (int)&qword_18023E820,
          v20[0],
          0,
          (int)v21,
          (struct _GUID *)(*((_QWORD *)this + 2) + 324LL),
          a3,
          v5,
          a2,
          (__int64)a5);
  v14 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, v16, 0x370u);
LABEL_8:
  if ( v6 )
    CDisplaySet::Release(v6);
  return v14;
}
