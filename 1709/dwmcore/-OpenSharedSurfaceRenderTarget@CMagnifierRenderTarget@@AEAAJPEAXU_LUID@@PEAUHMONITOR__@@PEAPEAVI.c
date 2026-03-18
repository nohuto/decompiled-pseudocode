/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180138158
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x180137EB8 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18018EB98 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801A5AC0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 */

__int64 __fastcall CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
        CMagnifierRenderTarget *this,
        __int64 a2,
        struct _LUID a3,
        HMONITOR a4,
        struct IRenderTargetBitmap **a5)
{
  __int64 v5; // xmm0_8
  CDisplaySet *v6; // rsi
  int v7; // eax
  CDisplayManager *v9; // rcx
  signed int CurrentDisplaySet; // eax
  unsigned int v13; // edi
  signed int DisplayIdFromMonitor; // eax
  signed int v15; // eax
  int v17; // [rsp+50h] [rbp-30h] BYREF
  CDisplaySet *v18; // [rsp+58h] [rbp-28h] BYREF
  int v19[2]; // [rsp+60h] [rbp-20h]
  int v20[2]; // [rsp+68h] [rbp-18h] BYREF
  int v21; // [rsp+70h] [rbp-10h]

  v5 = *((_QWORD *)this + 39);
  v6 = 0LL;
  v7 = DisplayId::None;
  v9 = (CDisplayManager *)*((unsigned int *)this + 80);
  v19[1] = 0;
  v18 = 0LL;
  v17 = DisplayId::None;
  *a5 = 0LL;
  *(_QWORD *)v20 = v5;
  v21 = (int)v9;
  v19[0] = 2;
  if ( a4 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v9, &v18);
    v13 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, CurrentDisplaySet, 0x1EDu);
      v6 = v18;
      goto LABEL_8;
    }
    v6 = v18;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v18, a4, (struct DisplayId *)&v17);
    v13 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, DisplayIdFromMonitor, 0x1EEu);
      goto LABEL_8;
    }
    v7 = v17;
  }
  v15 = CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
          (int)&qword_18026EEF0,
          v19[0],
          0,
          (int)v20,
          a3,
          v7,
          a2,
          0,
          (__int64)a5);
  v13 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, v15, 0x1FDu);
LABEL_8:
  if ( v6 )
    CDisplaySet::Release(v6);
  return v13;
}
