/*
 * XREFs of ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180035F78
 * Callers:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x18000AF44 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800211E0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800229E0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x18006AC58 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18006ACC8 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180079370 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800793A0 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007E538 (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CRippleEffect@@AEAAJXZ @ 0x18007EF90 (-RegisterGlobalTimer@CRippleEffect@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18008A048 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800910CC (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x180012E10 (-AddMultipleAndSet@-$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopManager::RegisterForGlobalTimeChangeNotification(struct CVisual *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  struct CVisual *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v1 = DynArray<CVisual *,0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 544, &v4, 1LL);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x600u);
  else
    _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
  return v2;
}
