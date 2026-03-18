/*
 * XREFs of PoDeleteThermalRequest @ 0x1406C66C0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1406C69DC (PopDeactiveThermalRequest.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **a1)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(a1[3]);
  ExFreePoolWithTag(a1, 0x6C6F4350u);
}
