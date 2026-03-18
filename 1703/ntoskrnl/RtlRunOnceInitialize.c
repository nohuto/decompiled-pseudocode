/*
 * XREFs of RtlRunOnceInitialize @ 0x14059DDF0
 * Callers:
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 *     DbgkpInitializePhase0 @ 0x14082130C (DbgkpInitializePhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
