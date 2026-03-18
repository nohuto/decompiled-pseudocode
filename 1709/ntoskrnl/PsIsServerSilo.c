/*
 * XREFs of PsIsServerSilo @ 0x1400D4250
 * Callers:
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x14024DB18 (PspJobIsAppSilo.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404922C4 (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     PspTerminateProcessesJobCallback @ 0x14050BBC0 (PspTerminateProcessesJobCallback.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14050BF40 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspGetNextSilo @ 0x140510998 (PspGetNextSilo.c)
 *     PsIsProcessInAppSilo @ 0x140596270 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x140714A10 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x14071534C (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x140718000 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1256) != 0LL;
}
