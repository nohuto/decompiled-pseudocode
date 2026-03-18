/*
 * XREFs of ViFaultsInjectionNotification @ 0x1407B8244
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x1407B7B44 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 */

void __fastcall ViFaultsInjectionNotification(int a1)
{
  __int64 v2; // rbx
  USHORT v3; // ax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_14036A0EC;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 148LL);
  if ( ViFaultTraces )
  {
    v2 = ViFaultTraces + 72LL * (_InterlockedIncrement(&ViFaultTracesIndex) & (unsigned int)(ViFaultTracesLength - 1));
    *(_QWORD *)v2 = KeGetCurrentThread();
    v3 = RtlCaptureStackBackTrace(a1 + 1, 8u, (PVOID *)(v2 + 8), 0LL);
    if ( v3 < 8u )
      *(_QWORD *)(v2 + 8LL * v3 + 8) = 0LL;
  }
}
