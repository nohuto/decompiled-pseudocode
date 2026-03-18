/*
 * XREFs of PoDeleteThermalRequest @ 0x14075E600
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14007624C (PoDestroyReasonContext.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PopDeactiveThermalRequest @ 0x14075E88C (PopDeactiveThermalRequest.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
