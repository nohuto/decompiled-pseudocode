/*
 * XREFs of sub_180108760 @ 0x180108760
 * Callers:
 *     sub_180108A18 @ 0x180108A18 (sub_180108A18.c)
 *     sub_180108A98 @ 0x180108A98 (sub_180108A98.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_180108760(NTSTATUS **a1)
{
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, **a1);
}
