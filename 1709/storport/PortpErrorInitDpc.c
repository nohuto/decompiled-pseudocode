/*
 * XREFs of PortpErrorInitDpc @ 0x1C0048488
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C006A6E0 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, DeferredContext);
}
