/*
 * XREFs of ExSetTimerResolution @ 0x140259D30
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400295DC (PoTraceSystemTimerResolutionKernel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpUpdateTimerResolution @ 0x14012CCDC (ExpUpdateTimerResolution.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  KIRQL v4; // al
  ULONG v5; // edi
  ULONG v6; // edx
  KIRQL v7; // bp
  int v8; // ecx
  KIRQL v10; // [rsp+38h] [rbp+10h] BYREF

  PoTraceSystemTimerResolutionKernel(SetResolution != 0 ? DesiredTime : 0, 1381258053);
  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v5 = KeTimeIncrement;
  v6 = 0;
  v10 = v4;
  v7 = v4;
  if ( SetResolution )
  {
    if ( ++ExpKernelResolutionCount == 1 || DesiredTime < ExpKernelRequestedTimerResolution )
    {
      v6 = DesiredTime;
      ExpKernelRequestedTimerResolution = DesiredTime;
      return ExpUpdateTimerResolution(SetResolution, v6, &v10);
    }
  }
  else
  {
    v8 = ExpKernelResolutionCount;
    if ( ExpKernelResolutionCount )
    {
      --ExpKernelResolutionCount;
      if ( v8 == 1 )
      {
        ExpKernelRequestedTimerResolution = 0;
        return ExpUpdateTimerResolution(SetResolution, v6, &v10);
      }
    }
  }
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  __writecr8(v7);
  return v5;
}
