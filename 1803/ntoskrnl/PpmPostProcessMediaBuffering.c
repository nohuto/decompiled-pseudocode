/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x14076EE98
 * Callers:
 *     PpmApplyProfile @ 0x14076EBC0 (PpmApplyProfile.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x140005890 (PoCopyDeepIdleMask.c)
 *     KeSubtractAffinityEx @ 0x1400361C0 (KeSubtractAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PpmCheckApplyResetNotification @ 0x14027E7D0 (PpmCheckApplyResetNotification.c)
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
