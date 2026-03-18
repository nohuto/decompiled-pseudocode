/*
 * XREFs of ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0069314
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0008850 (xxxCleanupThreadPointerInputInfo.c)
 *     NtUserGetIconInfo @ 0x1C00483C0 (NtUserGetIconInfo.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00619D0 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     NtUserSetThreadInputBlocked @ 0x1C0068C40 (NtUserSetThreadInputBlocked.c)
 *     NtUserBuildHwndList @ 0x1C0068D00 (NtUserBuildHwndList.c)
 *     NtUserKillTimer @ 0x1C0068FE0 (NtUserKillTimer.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     NtUserGetObjectInformation @ 0x1C00DFDB0 (NtUserGetObjectInformation.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall UserAtomicCheck::RegisterStack(UserAtomicCheck *this)
{
  unsigned int v1; // ecx
  unsigned __int64 v2; // rbx

  if ( gpAtomickCheckStacks )
  {
    *((_DWORD *)this + 1) = ++gdwAtomicCheckSerial;
    v1 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v1 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v1 >= gdwAtomicCheckLogSize )
          return;
      }
      v2 = (unsigned __int64)v1 << 6;
      *(_DWORD *)(v2 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v2 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v2 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v2 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
}
