/*
 * XREFs of PortpErrorInitDpc @ 0x1C0049028
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C00695E4 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, DeferredContext);
}
