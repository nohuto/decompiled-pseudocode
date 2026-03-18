/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C003C194
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0007400 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     UserSessionSwitchEnterCrit @ 0x1C003BA60 (UserSessionSwitchEnterCrit.c)
 *     LeaveCrit @ 0x1C003C130 (LeaveCrit.c)
 *     NtUserEnumDisplayDevices @ 0x1C003C480 (NtUserEnumDisplayDevices.c)
 *     NtUserEnumDisplaySettings @ 0x1C005C380 (NtUserEnumDisplaySettings.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0064560 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x1C0064780 (NtUserQueryDisplayConfig.c)
 *     UserDeleteW32Thread @ 0x1C007DB50 (UserDeleteW32Thread.c)
 *     ChangeAcquireResourceType @ 0x1C00903C0 (ChangeAcquireResourceType.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00E7630 (NtUserFunctionalizeDisplayConfig.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C0129C50 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C012A150 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0xqx @ 0x1C00E4B64 (McTemplateK0xqx.c)
 */

void __fastcall EtwTraceReleaseUserCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v6; // r8d

  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
    && (qword_1C0188D90 & 0x200000010000000LL) != 0
    && (qword_1C0188D98 & 0x200000010000000LL) == qword_1C0188D98 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, 0x200000010000000LL, a3, a4);
    if ( CurrentThreadWin32Thread )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        McTemplateK0xqx(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v6,
          LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16));
    }
  }
}
