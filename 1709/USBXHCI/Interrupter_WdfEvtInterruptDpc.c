/*
 * XREFs of Interrupter_WdfEvtInterruptDpc @ 0x1C001EC30
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001DE94 (Interrupter_DeferredWorkProcessor.c)
 */

void __fastcall Interrupter_WdfEvtInterruptDpc(unsigned __int64 a1, __int64 a2)
{
  Interrupter_DeferredWorkProcessor(a1, a2, 0);
}
