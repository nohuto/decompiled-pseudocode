/*
 * XREFs of PnpReportTargetDeviceChangeAsyncWorker @ 0x1406BFDD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpSetCustomTargetEvent @ 0x14054AC54 (PnpSetCustomTargetEvent.c)
 */

void __fastcall PnpReportTargetDeviceChangeAsyncWorker(PVOID P)
{
  PnpSetCustomTargetEvent(
    *((_QWORD **)P + 4),
    0LL,
    0LL,
    *((_QWORD *)P + 5),
    *((_QWORD *)P + 6),
    *((unsigned __int16 **)P + 7));
  ObfDereferenceObject(*((PVOID *)P + 4));
  ExFreePoolWithTag(P, 0x38706E50u);
}
