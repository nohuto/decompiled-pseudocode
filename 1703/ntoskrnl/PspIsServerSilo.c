/*
 * XREFs of PspIsServerSilo @ 0x14011E800
 * Callers:
 *     PsGetEffectiveServerSilo @ 0x1400949B0 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x140238A38 (PspJobIsAppSilo.c)
 *     PsIsProcessInAppSilo @ 0x14045AE30 (PsIsProcessInAppSilo.c)
 *     PspGetNextSilo @ 0x14054B0C4 (PspGetNextSilo.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 *     PspTerminateProcessesJobCallback @ 0x14054D280 (PspTerminateProcessesJobCallback.c)
 *     PsTerminateServerSilo @ 0x1406DE560 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1406DEEDC (PspDeleteSilo.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1256) != 0LL;
}
