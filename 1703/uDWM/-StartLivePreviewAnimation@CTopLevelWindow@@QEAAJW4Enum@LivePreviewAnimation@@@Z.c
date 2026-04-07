/*
 * XREFs of ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180081228
 * Callers:
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18006ECA4 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x18007691C (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180076A3C (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18001692C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180024894 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180049DAC (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x18006E218 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180075108 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180080858 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
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
  if ( !(unsigned __int8)CTopLevelWindow::HasAnimation((CTopLevelWindow *)a1) )
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x118Cu);
    CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)a1);
  }
  return v3;
}
