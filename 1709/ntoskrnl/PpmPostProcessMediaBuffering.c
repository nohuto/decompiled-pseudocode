/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x14070B9C0
 * Callers:
 *     PpmApplyProfile @ 0x14070B748 (PpmApplyProfile.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x14005CAE0 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400DE1E4 (PoCopyDeepIdleMask.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PpmCheckApplyResetNotification @ 0x1402486D0 (PpmCheckApplyResetNotification.c)
 */

__int64 PpmPostProcessMediaBuffering()
{
  __int64 result; // rax
  _DWORD v1[44]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v2[176]; // [rsp+D0h] [rbp-C8h] BYREF

  result = PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    PoCopyDeepIdleMask(v1);
    result = KeSubtractAffinityEx((char *)KeActiveProcessors, (char *)v1, v2);
    if ( (_DWORD)result )
      return PopExecuteOnTargetProcessors((__int64)v2, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
  return result;
}
