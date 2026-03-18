/*
 * XREFs of KeSetHeteroCpuPolicyThread @ 0x140202AF0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetHeteroPolicyThread @ 0x140150BC8 (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall KeSetHeteroCpuPolicyThread(__int64 a1, unsigned int a2, int a3)
{
  return KiSetHeteroPolicyThread(a1, a2, 0, a3);
}
