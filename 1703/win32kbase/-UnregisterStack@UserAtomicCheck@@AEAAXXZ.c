/*
 * XREFs of ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     DestroyThreadsObjects @ 0x1C0040A10 (DestroyThreadsObjects.c)
 *     HMDestroyUnlockedObject @ 0x1C0041FC0 (HMDestroyUnlockedObject.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004206C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
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

void __fastcall UserAtomicCheck::UnregisterStack(UserAtomicCheck *this)
{
  unsigned int v1; // edx

  if ( gpAtomickCheckStacks )
  {
    v1 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v1 << 6) + gpAtomickCheckStacks) != *((_DWORD *)this + 1) )
      {
        if ( ++v1 >= gdwAtomicCheckLogSize )
          return;
      }
      *(_DWORD *)(((unsigned __int64)v1 << 6) + gpAtomickCheckStacks) = 0;
    }
  }
}
