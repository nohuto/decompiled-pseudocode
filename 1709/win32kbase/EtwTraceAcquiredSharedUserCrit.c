/*
 * XREFs of EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0003F50 (NtUserGetPointerInfoList.c)
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0007400 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     NtUserGetAsyncKeyState @ 0x1C00101F0 (NtUserGetAsyncKeyState.c)
 *     UserReleaseDC @ 0x1C00573D0 (UserReleaseDC.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00574B8 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtUserMapVirtualKeyEx @ 0x1C0057750 (NtUserMapVirtualKeyEx.c)
 *     NtUserReleaseDC @ 0x1C0057880 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C0057990 (EnterSharedCrit.c)
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 *     UserEnterUserCritSecShared @ 0x1C005ADA0 (UserEnterUserCritSecShared.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B034 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     GreGetDCPoint @ 0x1C005B500 (GreGetDCPoint.c)
 *     DrvGetCurrentDpiInfo @ 0x1C005B6E8 (DrvGetCurrentDpiInfo.c)
 *     ReferenceDwmApiPort @ 0x1C0062B40 (ReferenceDwmApiPort.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0067A20 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00764C0 (NtGdiGetGammaRampCapability.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C008D950 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtMITCoreMsgKGetConnectionHandle @ 0x1C00E5F30 (NtMITCoreMsgKGetConnectionHandle.c)
 *     NtMITCoreMsgKSend @ 0x1C00E61F0 (NtMITCoreMsgKSend.c)
 *     NtUserGetPointerCursorId @ 0x1C00E7CE0 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerFrameArrivalTimes @ 0x1C00E7EC0 (NtUserGetPointerFrameArrivalTimes.c)
 *     NtUserGetPointerInputTransform @ 0x1C00E80B0 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerType @ 0x1C00E82C0 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C00E84C0 (NtUserGetRawPointerDeviceData.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C00ED470 (W32pLkmdDataCollectionCallback.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00F4400 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     NtHWCursorUpdatePointer @ 0x1C00F4B30 (NtHWCursorUpdatePointer.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C012A150 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0xqx @ 0x1C00E4B64 (McTemplateK0xqx.c)
 */

__int64 __fastcall EtwTraceAcquiredSharedUserCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v7; // r8d
  LONGLONG v8; // rdi
  __int64 QuadPart; // rsi
  int v10; // ecx

  result = PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  v5 = result;
  if ( result )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v8 = PerformanceCounter.QuadPart - *(_QWORD *)(v5 + 8);
    QuadPart = PerformanceCounter.QuadPart;
    if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x200000010000000LL) != 0 )
    {
      v10 = (unsigned __int8)byte_1C0188DA8;
      if ( (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
        && (qword_1C0188D90 & 0x200000010000000LL) != 0
        && (qword_1C0188D98 & 0x200000010000000LL) == qword_1C0188D98
        && ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v10) = byte_1C0188DA8 - 1;
        McTemplateK0xqx(v10, (unsigned int)&AcquiredSharedUserCritEvent, v7, v8, 0, gullUserCritAcquireToken);
      }
    }
    if ( v8 >= (__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
      && QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
        McTemplateK0xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v7,
          v8,
          1000000 * v8 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, QuadPart);
    }
    result = _InterlockedIncrement64(&gullUserCritAcquireToken);
    *(_QWORD *)(v5 + 16) = result;
  }
  return result;
}
