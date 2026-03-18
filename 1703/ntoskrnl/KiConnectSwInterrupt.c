/*
 * XREFs of KiConnectSwInterrupt @ 0x140834498
 * Callers:
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiConnectSwInterrupt(ULONG_PTR a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
