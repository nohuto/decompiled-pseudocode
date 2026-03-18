/*
 * XREFs of MiJumpStack @ 0x14015C480
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x14012F0C0 (KeGenericCallDpc.c)
 */

void __fastcall MiJumpStack(__int64 a1)
{
  KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
