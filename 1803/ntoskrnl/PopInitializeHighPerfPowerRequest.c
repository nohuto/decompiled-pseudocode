/*
 * XREFs of PopInitializeHighPerfPowerRequest @ 0x1408C7738
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x14007624C (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14007698C (PoCaptureReasonContext.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopCreateKernelPowerRequest @ 0x140525380 (PopCreateKernelPowerRequest.c)
 */

__int64 PopInitializeHighPerfPowerRequest()
{
  int *v0; // rdx
  __int64 v1; // r8
  int v2; // ecx
  int KernelPowerRequest; // ebx
  _QWORD v5[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  PpmHighPerfEndDpc = 275;
  *(_QWORD *)&PpmHighPerfEndTimer.Header.Lock = 8LL;
  qword_1403AABD8 = (__int64)PpmHighPerfRequestExpiration;
  v0 = PpmHighPerfDuration;
  PpmHighPerfRequestLock = 0LL;
  PpmHighPerfEndTimer.Header.WaitListHead.Blink = &PpmHighPerfEndTimer.Header.WaitListHead;
  v1 = 4LL;
  PpmHighPerfEndTimer.Header.WaitListHead.Flink = &PpmHighPerfEndTimer.Header.WaitListHead;
  qword_1403AABE0 = 0LL;
  qword_1403AABF8 = 0LL;
  qword_1403AABD0 = 0LL;
  PpmHighPerfEndTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PpmHighPerfEndTimer.Processor = 0LL;
  do
  {
    v2 = 300000;
    if ( (unsigned int)*v0 < 0x493E0 )
      v2 = *v0;
    *v0++ = v2;
    --v1;
  }
  while ( v1 );
  memset(v5, 0, 0x28uLL);
  v5[0] = 0x100000000LL;
  RtlInitUnicodeString((PUNICODE_STRING)&v5[1], L"Power Manager");
  KernelPowerRequest = PoCaptureReasonContext((unsigned __int64)v5, 0LL, 0LL, 1, 0LL, &P);
  if ( KernelPowerRequest >= 0 )
  {
    KernelPowerRequest = PopCreateKernelPowerRequest(&PpmHighPerfPowerRequest, (int *)P);
    if ( KernelPowerRequest < 0 )
      PoDestroyReasonContext(P);
  }
  return (unsigned int)KernelPowerRequest;
}
