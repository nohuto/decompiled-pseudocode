/*
 * XREFs of MiJumpStack @ 0x1400229B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc(MiDoStackCopy, a1);
}
