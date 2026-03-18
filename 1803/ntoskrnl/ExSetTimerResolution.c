/*
 * XREFs of ExSetTimerResolution @ 0x1402B7840
 * Callers:
 *     <none>
 * Callees:
 *     ExpUpdateTimerResolution @ 0x140004CA4 (ExpUpdateTimerResolution.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140005A68 (PoTraceSystemTimerResolutionKernel.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
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
LABEL_9:
      ExpKernelRequestedTimerResolution = v6;
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
        goto LABEL_9;
    }
  }
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  __writecr8(v7);
  return v5;
}
