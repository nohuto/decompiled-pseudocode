/*
 * XREFs of zzzInternalSetCursorPos @ 0x1C00BBC30
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     zzzResetSharedDesktops @ 0x1C00A1180 (zzzResetSharedDesktops.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00B9A10 (zzzEnableDwmPointerSupport.c)
 *     zzzSetCursorPosByType @ 0x1C00BBA6C (zzzSetCursorPosByType.c)
 *     xxxUserResetDisplayDevice @ 0x1C013B580 (xxxUserResetDisplayDevice.c)
 *     ?InternalSetCursorPos@@YAXHHK@Z @ 0x1C0195CF0 (-InternalSetCursorPos@@YAXHHK@Z.c)
 *     ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01AAD10 (-DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01AE4BC (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     zzzActiveCursorTracking @ 0x1C01BD448 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C0FF8 (xxxCallJournalPlaybackHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0018CD0 (IsCurrentDesktopComposed.c)
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     zzzSetFMouseMoved @ 0x1C003C3C0 (zzzSetFMouseMoved.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00BC228 (UpdateCursorImageForMonitorDpi.c)
 *     GreMovePointer @ 0x1C00BC9F0 (GreMovePointer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  unsigned __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v6 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v6 )
    v7 = *(_WORD *)(*(_QWORD *)(v6 + 40) + 128LL);
  else
    v7 = 0;
  v9 = __PAIR64__(a2, a1);
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
    LogicalToPhysicalDPIPoint(&v9, &v9, 0LL, 0LL);
  *(_QWORD *)gptCursorAsync = v9;
  CCursorClip::BoundPoint(gpCursorClip, v9, 0LL, *(_QWORD *)gptCursorAsync);
  *(_QWORD *)(gpsi + 5368LL) = *(_QWORD *)gptCursorAsync;
  GreMovePointer(*(HDEV *)(gpDispInfo + 32LL), *(_DWORD *)(gpsi + 5368LL), *(_DWORD *)(gpsi + 5372LL), 1);
  SendPositionChanged(&v9);
  if ( MonitorFromPoint(*(__int64 *)gptCursorAsync, 0x20u) )
    ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(__int64 *)gptCursorAsync, 0x20u);
  else
    ghCursorMonitor = 0LL;
  UpdateCursorImageForMonitorDpi(v7);
  return zzzSetFMouseMoved();
}
