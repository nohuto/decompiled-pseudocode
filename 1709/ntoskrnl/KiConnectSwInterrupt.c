/*
 * XREFs of KiConnectSwInterrupt @ 0x14086B660
 * Callers:
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x140856048 (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(ULONG_PTR a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
