/*
 * XREFs of PopInitializeHighPerfPowerRequest @ 0x140825090
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x140072528 (PoCaptureReasonContext.c)
 *     PopCreateKernelPowerRequest @ 0x1404C7330 (PopCreateKernelPowerRequest.c)
 */

__int64 PopInitializeHighPerfPowerRequest()
{
  int *v0; // rdx
  __int64 v1; // r8
  int v2; // ecx
  int KernelPowerRequest; // ebx
  int *v5; // [rsp+40h] [rbp+8h] BYREF

  v0 = PpmHighPerfDuration;
  v1 = 3LL;
  do
  {
    v2 = 300000;
    if ( (unsigned int)*v0 < 0x493E0 )
      v2 = *v0;
    *v0++ = v2;
    --v1;
  }
  while ( v1 );
  KernelPowerRequest = PoCaptureReasonContext(0LL, 0LL, 0LL, 1, 0LL, &v5);
  if ( KernelPowerRequest >= 0 )
  {
    KernelPowerRequest = PopCreateKernelPowerRequest(&PopTransitionHighPerfRequest, v5);
    if ( KernelPowerRequest < 0 )
      PoDestroyReasonContext(v5);
  }
  return (unsigned int)KernelPowerRequest;
}
