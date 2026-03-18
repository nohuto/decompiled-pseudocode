/*
 * XREFs of RtlRunOnceInitialize @ 0x1405C6200
 * Callers:
 *     DbgkpInitializePhase0 @ 0x14083EE54 (DbgkpInitializePhase0.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
