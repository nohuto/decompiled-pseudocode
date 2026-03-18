/*
 * XREFs of ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0012C00 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     HMDestroyUnlockedObject @ 0x1C0034DD0 (HMDestroyUnlockedObject.c)
 *     DestroyThreadsObjects @ 0x1C0035630 (DestroyThreadsObjects.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0039CCC (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     DestroyProcessInfo @ 0x1C003B604 (DestroyProcessInfo.c)
 *     xxxResetDisplayDevice @ 0x1C005C620 (xxxResetDisplayDevice.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C005C874 (-ResetSystemColors@@YAXXZ.c)
 *     HandleInputDestDestruction @ 0x1C0061C74 (HandleInputDestDestruction.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C0068EAC (ApiSetEditionUpdateAsyncKeyState.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C006A534 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ApiSetEditionPostEventMessage @ 0x1C006A6E0 (ApiSetEditionPostEventMessage.c)
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 *     InitUserScreen @ 0x1C00A67B0 (InitUserScreen.c)
 *     NtDWMBindCursorToOutputConfig @ 0x1C00B3090 (NtDWMBindCursorToOutputConfig.c)
 *     NtDWMCommitInputSystemOutputConfig @ 0x1C00B3180 (NtDWMCommitInputSystemOutputConfig.c)
 *     NtDWMSetCursorOrientation @ 0x1C00B3330 (NtDWMSetCursorOrientation.c)
 *     NtDWMSetInputSystemOutputConfig @ 0x1C00B34F0 (NtDWMSetInputSystemOutputConfig.c)
 *     NtUserEnableTouchPad @ 0x1C00B5B60 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00B9B20 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0116A78 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C0133BBC (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C0133D60 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C00357E0 (UserIsUserCritSecInExclusive.c)
 */

UserAtomicCheck *__fastcall UserAtomicCheck::UserAtomicCheck(UserAtomicCheck *this)
{
  unsigned int v3; // eax
  _DWORD *i; // rcx
  unsigned __int64 v5; // rbx

  *(_BYTE *)this = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
      if ( gpAtomickCheckStacks )
      {
        *((_DWORD *)this + 1) = ++gdwAtomicCheckSerial;
        v3 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          for ( i = (_DWORD *)gpAtomickCheckStacks; *i; i += 16 )
          {
            if ( ++v3 >= gdwAtomicCheckLogSize )
              return this;
          }
          v5 = (unsigned __int64)v3 << 6;
          *(_DWORD *)(v5 + gpAtomickCheckStacks) = *((_DWORD *)this + 1);
          *(_DWORD *)(v5 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(v5 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                      * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v5 + gpAtomickCheckStacks + 16), 6u, 0x200u);
        }
      }
    }
  }
  return this;
}
