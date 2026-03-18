/*
 * XREFs of ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     DestroyThreadsObjects @ 0x1C0040A10 (DestroyThreadsObjects.c)
 *     HMDestroyUnlockedObject @ 0x1C0041FC0 (HMDestroyUnlockedObject.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004208C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HandleInputDestDestruction @ 0x1C004BF10 (HandleInputDestDestruction.c)
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 *     InitUserScreen @ 0x1C00631F8 (InitUserScreen.c)
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00701C0 (-ResetSystemColors@@YAXXZ.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C0088738 (ApiSetEditionUpdateAsyncKeyState.c)
 *     ApiSetEditionPostEventMessage @ 0x1C0089DE8 (ApiSetEditionPostEventMessage.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C008A1DC (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     NtUserEnableTouchPad @ 0x1C00E0CE0 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00E4560 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C01222F4 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 * Callees:
 *     <none>
 */

void __fastcall UserAtomicCheck::RegisterStack(UserAtomicCheck *this)
{
  unsigned int v2; // eax
  _DWORD *i; // rcx
  unsigned __int64 v4; // rbx

  if ( gpAtomickCheckStacks )
  {
    *((_DWORD *)this + 1) = ++gdwAtomicCheckSerial;
    v2 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      for ( i = (_DWORD *)gpAtomickCheckStacks; *i; i += 16 )
      {
        if ( ++v2 >= gdwAtomicCheckLogSize )
          return;
      }
      v4 = (unsigned __int64)v2 << 6;
      *(_DWORD *)(v4 + gpAtomickCheckStacks) = *((_DWORD *)this + 1);
      *(_DWORD *)(v4 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v4 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v4 + gpAtomickCheckStacks + 16), 6u, 0x200u);
    }
  }
}
