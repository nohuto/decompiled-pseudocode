/*
 * XREFs of PortpErrorInitDpc @ 0x1C0047A88
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C0066D8C (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(__int64 a1)
{
  KeInitializeDpc((PRKDPC)(a1 + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, (PVOID)a1);
}
