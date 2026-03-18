/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C002ECD4
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1C000CCB0 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C000D080 (NtUserGetDisplayConfigBufferSizes.c)
 *     W32CalloutDispatch @ 0x1C002D340 (W32CalloutDispatch.c)
 *     LeaveCrit @ 0x1C002EC70 (LeaveCrit.c)
 *     NtUserEnumDisplayDevices @ 0x1C0043630 (NtUserEnumDisplayDevices.c)
 *     NtUserEnumDisplaySettings @ 0x1C0061A90 (NtUserEnumDisplaySettings.c)
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C006E080 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     UserSessionSwitchEnterCrit @ 0x1C007E4D0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C008B750 (ChangeAcquireResourceType.c)
 *     UserDeleteW32Thread @ 0x1C00D8150 (UserDeleteW32Thread.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00E0EC0 (NtUserFunctionalizeDisplayConfig.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C012A310 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C012A880 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall EtwTraceReleaseUserCrit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v5; // r8d

  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
    && (qword_1C0186D80 & 0x200000010000000LL) != 0
    && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, 0x200000010000000LL, a3);
    if ( CurrentThreadWin32Thread )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v5,
          LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16));
    }
  }
}
