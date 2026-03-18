/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x1406D5C4C
 * Callers:
 *     PpmApplyProfile @ 0x1406D59E4 (PpmApplyProfile.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x140044C00 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x14006D6E4 (PoCopyDeepIdleMask.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmCheckApplyResetNotification @ 0x1402331E0 (PpmCheckApplyResetNotification.c)
 */

__int64 PpmPostProcessMediaBuffering()
{
  __int64 result; // rax
  unsigned __int16 v1[88]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v2[176]; // [rsp+D0h] [rbp-C8h] BYREF

  result = PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    PoCopyDeepIdleMask(v1);
    result = KeSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, v1, v2);
    if ( (_DWORD)result )
      return PopExecuteOnTargetProcessors((__int64)v2, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
  return result;
}
