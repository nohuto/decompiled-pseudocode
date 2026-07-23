/*
 * XREFs of sub_1800F5B30 @ 0x1800F5B30
 * Callers:
 *     sub_1800960F0 @ 0x1800960F0 (sub_1800960F0.c)
 * Callees:
 *     sub_180001600 @ 0x180001600 (sub_180001600.c)
 *     sub_180001694 @ 0x180001694 (sub_180001694.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     sub_1800A9FB0 @ 0x1800A9FB0 (sub_1800A9FB0.c)
 *     sub_1800F5B0C @ 0x1800F5B0C (sub_1800F5B0C.c)
 *     sub_1800F5B90 @ 0x1800F5B90 (sub_1800F5B90.c)
 */

NTSTATUS __fastcall sub_1800F5B30(void *a1)
{
  NTSTATUS result; // eax

  if ( byte_18016B282 && sub_1800F5B0C(a1) )
    return sub_180001600((__int64)a1, 1u);
  if ( !sub_180030138() || !sub_180001694(a1) || (result = sub_1800F5B90(a1), result < 0) )
    sub_1800A9FB0(0xAu);
  return result;
}
