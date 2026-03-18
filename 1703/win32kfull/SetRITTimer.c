/*
 * XREFs of SetRITTimer @ 0x1C00B22B0
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C00F9FEC (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     ShowAutorunCursor @ 0x1C0195EEC (ShowAutorunCursor.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C019D750 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C019F640 (-xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01AA5B4 (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@.c)
 *     CachePTPInertiaInfo @ 0x1C01B0A40 (CachePTPInertiaInfo.c)
 *     xxxSendMouseDownAtPoint @ 0x1C01B1910 (xxxSendMouseDownAtPoint.c)
 *     EditionSetAccessibilityTimer @ 0x1C01D3880 (EditionSetAccessibilityTimer.c)
 *     ?ProcessInput@PalmRejection@@YAHPEAX@Z @ 0x1C01D3CC4 (-ProcessInput@PalmRejection@@YAHPEAX@Z.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C021F7D8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 */

__int64 __fastcall SetRITTimer(int a1, int a2, int a3, int a4)
{
  return InternalSetTimer(0, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
