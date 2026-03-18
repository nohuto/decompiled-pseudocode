/*
 * XREFs of ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C00140EC (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     HandleInputDestDestruction @ 0x1C0016E5C (HandleInputDestDestruction.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C0018660 (ApiSetEditionUpdateAsyncKeyState.c)
 *     DestroyThreadsObjects @ 0x1C003ED90 (DestroyThreadsObjects.c)
 *     xxxResetDisplayDevice @ 0x1C00626E0 (xxxResetDisplayDevice.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C0062C60 (-ResetSystemColors@@YAXXZ.c)
 *     ApiSetEditionPostEventMessage @ 0x1C00905D8 (ApiSetEditionPostEventMessage.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C0091868 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 *     DestroyProcessInfo @ 0x1C009CD88 (DestroyProcessInfo.c)
 *     HMDestroyUnlockedObject @ 0x1C009E950 (HMDestroyUnlockedObject.c)
 *     NtDWMBindCursorToOutputConfig @ 0x1C00E5710 (NtDWMBindCursorToOutputConfig.c)
 *     NtDWMCommitInputSystemOutputConfig @ 0x1C00E5800 (NtDWMCommitInputSystemOutputConfig.c)
 *     NtDWMSetCursorOrientation @ 0x1C00E5920 (NtDWMSetCursorOrientation.c)
 *     NtDWMSetInputSystemOutputConfig @ 0x1C00E5A50 (NtDWMSetInputSystemOutputConfig.c)
 *     NtUserEnableTouchPad @ 0x1C00E74E0 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00EA4E0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C01218C4 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01307E8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C0130918 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C00177E0 (UserIsUserCritSecInExclusive.c)
 */

void __fastcall UserAtomicCheck::~UserAtomicCheck(UserAtomicCheck *this)
{
  unsigned int v2; // edx

  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      if ( !*(_BYTE *)this )
      {
        LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
        if ( gpAtomickCheckStacks )
        {
          v2 = 0;
          if ( gdwAtomicCheckLogSize )
          {
            while ( *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) != *((_DWORD *)this + 1) )
            {
              if ( ++v2 >= gdwAtomicCheckLogSize )
                return;
            }
            *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) = 0;
          }
        }
      }
    }
  }
}
