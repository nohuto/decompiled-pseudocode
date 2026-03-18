/*
 * XREFs of FindTimer @ 0x1C00D7980
 * Callers:
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B60C (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B6CC (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     SetMouseTrails @ 0x1C00470EC (SetMouseTrails.c)
 *     xxxSystemTimerProc @ 0x1C0083EC0 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0084438 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00844C0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00849D4 (zzzInternalDestroyCaret.c)
 *     TrackMouseEvent @ 0x1C0084C04 (TrackMouseEvent.c)
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     PostDeviceNotification @ 0x1C00C7F8C (PostDeviceNotification.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00CC2E0 (xxxCancelMouseMoveTracking.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     StopFade @ 0x1C013E090 (StopFade.c)
 *     HideAutorunCursor @ 0x1C01A1000 (HideAutorunCursor.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B3D44 (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B3DAC (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     SendPTPCancelInertia @ 0x1C01B42D0 (SendPTPCancelInertia.c)
 *     SendPTPEndInertia @ 0x1C01B4330 (SendPTPEndInertia.c)
 *     xxxCancelMouseUpTimer @ 0x1C01B4760 (xxxCancelMouseUpTimer.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01B9D70 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01C0190 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     DecrementCompositedCount @ 0x1C01C5180 (DecrementCompositedCount.c)
 *     _KillSystemTimer @ 0x1C01C7270 (_KillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D8BE0 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     HandleAsyncResizeComplete @ 0x1C01DCE50 (HandleAsyncResizeComplete.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01DFA40 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionKillAccessibilityTimer @ 0x1C01DFB90 (EditionKillAccessibilityTimer.c)
 *     ?ProcessInput@PalmRejection@@YAHPEAX@Z @ 0x1C01E006C (-ProcessInput@PalmRejection@@YAHPEAX@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0204C3C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0204FD4 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxEndScroll @ 0x1C0210910 (xxxEndScroll.c)
 *     UserKillTimer @ 0x1C0212D48 (UserKillTimer.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 *     MNAnimate @ 0x1C0216480 (MNAnimate.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0220BE8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00D7A70 (FreeTimer.c)
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
         || PsGetCurrentProcessWin32Process(v14) == *(_QWORD *)(v11[3] + 400LL)
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
