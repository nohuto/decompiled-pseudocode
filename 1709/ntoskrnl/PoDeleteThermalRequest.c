/*
 * XREFs of PoDeleteThermalRequest @ 0x1406F6AF0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400B0710 (PoDestroyReasonContext.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopDeactiveThermalRequest @ 0x1406F70BC (PopDeactiveThermalRequest.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
