/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015A628
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18015A3A8 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x1801C6768 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DE5E0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
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
  int CurrentDisplaySet; // eax
  unsigned int v13; // edi
  int DisplayIdFromMonitor; // eax
  int v15; // eax
  int v17; // [rsp+50h] [rbp-30h] BYREF
  CDisplaySet *v18; // [rsp+58h] [rbp-28h] BYREF
  int v19[2]; // [rsp+60h] [rbp-20h]
  int v20[2]; // [rsp+68h] [rbp-18h] BYREF
  int v21; // [rsp+70h] [rbp-10h]

  v5 = *((_QWORD *)this + 46);
  v6 = 0LL;
  v7 = DisplayId::None;
  v9 = (CDisplayManager *)*((unsigned int *)this + 94);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, CurrentDisplaySet, 0x1EFu);
      v6 = v18;
      goto LABEL_8;
    }
    v6 = v18;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v18, a4, (struct DisplayId *)&v17);
    v13 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, DisplayIdFromMonitor, 0x1F0u);
      goto LABEL_8;
    }
    v7 = v17;
  }
  v15 = CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
          (int)&qword_1802D6730,
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v15, 0x1FFu);
LABEL_8:
  if ( v6 )
    CDisplaySet::Release(v6);
  return v13;
}
