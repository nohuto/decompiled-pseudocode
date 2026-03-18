/*
 * XREFs of PsIsServerSilo @ 0x14008A910
 * Callers:
 *     PsGetEffectiveServerSilo @ 0x14008A8E0 (PsGetEffectiveServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     PspJobIsAppSilo @ 0x140283EF8 (PspJobIsAppSilo.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404E36C8 (IopAllocateFoExtensionsOnCreate.c)
 *     PspTerminateProcessesJobCallback @ 0x14052F000 (PspTerminateProcessesJobCallback.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1405305E0 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspGetNextSilo @ 0x140535274 (PspGetNextSilo.c)
 *     PsIsProcessInAppSilo @ 0x14057FCA0 (PsIsProcessInAppSilo.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     PsTerminateServerSilo @ 0x140778C00 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140778F94 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1407794DC (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x14077C020 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1256) != 0LL;
}
