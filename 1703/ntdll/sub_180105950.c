/*
 * XREFs of sub_180105950 @ 0x180105950
 * Callers:
 *     sub_180105B94 @ 0x180105B94 (sub_180105B94.c)
 *     sub_180105C14 @ 0x180105C14 (sub_180105C14.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_180105950(NTSTATUS **a1)
{
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, **a1);
}
