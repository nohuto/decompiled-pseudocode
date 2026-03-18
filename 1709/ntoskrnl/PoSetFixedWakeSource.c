/*
 * XREFs of PoSetFixedWakeSource @ 0x140431A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PoSetFixedWakeSource(int a1)
{
  PopFixedWakeSourceMask |= a1;
}
