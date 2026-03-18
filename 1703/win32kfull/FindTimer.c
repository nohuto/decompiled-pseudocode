/*
 * XREFs of FindTimer @ 0x1C00B1F50
 * Callers:
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0005990 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00060F8 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00061B8 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     xxxSystemTimerProc @ 0x1C00174B0 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00AFCBC (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00AFDFC (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00B031C (zzzInternalDestroyCaret.c)
 *     TrackMouseEvent @ 0x1C00B1DC4 (TrackMouseEvent.c)
 *     SetMouseTrails @ 0x1C00B9CC4 (SetMouseTrails.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C89D8 (xxxCancelMouseMoveTracking.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     HideAutorunCursor @ 0x1C0195EB0 (HideAutorunCursor.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C019D750 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B095C (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B09C4 (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     SendPTPCancelInertia @ 0x1C01B0ED0 (SendPTPCancelInertia.c)
 *     SendPTPEndInertia @ 0x1C01B0F30 (SendPTPEndInertia.c)
 *     xxxCancelMouseUpTimer @ 0x1C01B1358 (xxxCancelMouseUpTimer.c)
 *     DecrementCompositedCount @ 0x1C01C1F14 (DecrementCompositedCount.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 *     _KillSystemTimer @ 0x1C01C4F70 (_KillSystemTimer.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D3670 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionKillAccessibilityTimer @ 0x1C01D37B0 (EditionKillAccessibilityTimer.c)
 *     ?ProcessInput@PalmRejection@@YAHPEAX@Z @ 0x1C01D3CC4 (-ProcessInput@PalmRejection@@YAHPEAX@Z.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F0EA0 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     HandleAsyncResizeComplete @ 0x1C01F5B1C (HandleAsyncResizeComplete.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0203244 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0203588 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxEndScroll @ 0x1C020F160 (xxxEndScroll.c)
 *     UserKillTimer @ 0x1C0211834 (UserKillTimer.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 *     MNAnimate @ 0x1C0215560 (MNAnimate.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C021F65C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C021F7D8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00B2040 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  __int64 v8; // rax
  _QWORD **v10; // rsi
  _QWORD *v11; // rbx
  unsigned int v12; // ebp
  _QWORD *i; // r14
  __int64 v14; // rcx

  v5 = 0LL;
  v8 = a2;
  v10 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(a1)) & 0x3F));
  v11 = 0LL;
  v12 = 0;
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v11 = i - 14;
    if ( *(i - 3) == a1 && v11[12] == v8 )
    {
      v14 = *((unsigned int *)v11 + 12);
      if ( ((a3 ^ *((_BYTE *)v11 + 48)) & 6) == 0
        && ((v14 & 0x40) != 0
         || PsGetCurrentProcessWin32Process(v14, a2) == *(_QWORD *)(v11[3] + 376LL)
         || !a1 && ((a3 ^ *((_BYTE *)v11 + 48)) & 4) == 0) )
      {
        if ( a4 )
        {
          FreeTimer((struct tagTIMER *)(i - 14));
          v11 = 0LL;
        }
        v12 = 1;
        break;
      }
      v8 = a2;
    }
  }
  if ( a5 )
  {
    if ( v12 == 1 )
      v5 = v11;
    *a5 = v5;
  }
  return v12;
}
