/*
 * XREFs of zzzInternalSetCursorPos @ 0x1C0051D98
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C00471BC (zzzEnableDwmPointerSupport.c)
 *     zzzSetCursorPos @ 0x1C0051414 (zzzSetCursorPos.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     zzzResetSharedDesktops @ 0x1C00E3D10 (zzzResetSharedDesktops.c)
 *     xxxUserResetDisplayDevice @ 0x1C0142100 (xxxUserResetDisplayDevice.c)
 *     ?InternalSetCursorPos@@YAXHHK@Z @ 0x1C01A0E70 (-InternalSetCursorPos@@YAXHHK@Z.c)
 *     ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01AE0C4 (-DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01B1800 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     zzzActiveCursorTracking @ 0x1C01C1368 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C47FC (xxxCallJournalPlaybackHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     UpdateCursorImageForMonitorDpi @ 0x1C0053368 (UpdateCursorImageForMonitorDpi.c)
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     IsCurrentDesktopComposed @ 0x1C00780E0 (IsCurrentDesktopComposed.c)
 *     GreMovePointer @ 0x1C008AF20 (GreMovePointer.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  __int64 v8; // rax
  unsigned __int16 v9; // di
  unsigned __int8 v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 result; // rax
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v8 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v8 )
    v9 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 64LL);
  else
    v9 = 0;
  v10 = a4 & 1;
  v15[0] = __PAIR64__(a2, a1);
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12, v11);
    LogicalToPhysicalDPIPoint(v15, v15, CurrentThreadDpiAwarenessContext, 0LL);
  }
  CCursorClip::BoundPoint(gpCursorClip, v15[0], 0LL, v15);
  if ( v10 || (result = *(_QWORD *)gptCursorAsync, __PAIR64__(gptCursorAsync[1], gptCursorAsync[0]) != v15[0]) )
  {
    *(_QWORD *)gptCursorAsync = v15[0];
    *(_QWORD *)(gpsi + 4944LL) = v15[0];
    GreMovePointer(*(HDEV *)(gpDispInfo + 32LL), *(_DWORD *)(gpsi + 4944LL), *(_DWORD *)(gpsi + 4948LL), 1);
    SendPositionChanged(v15);
    if ( MonitorFromPoint(*(_QWORD *)gptCursorAsync, 1LL, 18LL) )
      ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)gptCursorAsync, 1LL, 18LL);
    else
      ghCursorMonitor = 0LL;
    UpdateCursorImageForMonitorDpi(v9);
    return GenerateMouseMove(2 * (unsigned int)v10 + 1);
  }
  return result;
}
