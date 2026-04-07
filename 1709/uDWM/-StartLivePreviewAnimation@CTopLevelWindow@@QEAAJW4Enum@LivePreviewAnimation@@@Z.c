/*
 * XREFs of ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800793A0
 * Callers:
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18006B4B4 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x18006BC18 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x18006BD38 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180019674 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180035F78 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x18003919C (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180069AB8 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x18006CFF8 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180078990 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::StartLivePreviewAnimation(__int64 a1, int a2)
{
  unsigned int v3; // edi
  struct CVisual *v4; // rcx
  int v5; // ecx
  double AnimationDuration; // xmm6_8
  CLivePreviewTimeline *v7; // rax
  CLivePreviewTimeline *v8; // rax

  v3 = 0;
  *(_DWORD *)(a1 + 248) = a2;
  if ( !CTopLevelWindow::HasAnimation((CTopLevelWindow *)a1) )
    CDesktopManager::RegisterForGlobalTimeChangeNotification(v4);
  ++*(_DWORD *)(a1 + 244);
  v5 = 3;
  AnimationDuration = 0.0;
  if ( *(_DWORD *)(a1 + 248) == 3 )
  {
    v5 = 2;
LABEL_7:
    AnimationDuration = CLivePreview::GetAnimationDuration(v5);
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a1 + 248) == 4 )
    goto LABEL_7;
LABEL_8:
  if ( *(_QWORD *)(a1 + 672)
    || ((v7 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 16LL))(
                                        WPF::g_pProcessHeap,
                                        96LL)) == 0LL
      ? (v8 = 0LL)
      : (v8 = CLivePreviewTimeline::CLivePreviewTimeline(v7)),
        (*(_QWORD *)(a1 + 672) = v8) != 0LL) )
  {
    CLivePreviewTimeline::RestartTimeline(*(_QWORD *)(a1 + 672), *(_DWORD *)(a1 + 248), AnimationDuration);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1184u);
    CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)a1);
  }
  return v3;
}
