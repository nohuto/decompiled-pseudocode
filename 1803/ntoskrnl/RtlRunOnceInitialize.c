/*
 * XREFs of RtlRunOnceInitialize @ 0x1406216C0
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x140293048 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 *     DbgkpInitializePhase0 @ 0x14089F2E0 (DbgkpInitializePhase0.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
