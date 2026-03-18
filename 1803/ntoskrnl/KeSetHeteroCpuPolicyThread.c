/*
 * XREFs of KeSetHeteroCpuPolicyThread @ 0x140240150
 * Callers:
 *     <none>
 * Callees:
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall KeSetHeteroCpuPolicyThread(__int64 a1, __int64 a2, unsigned int a3)
{
  return KiSetHeteroPolicyThread(a1, a2, 0LL, a3);
}
