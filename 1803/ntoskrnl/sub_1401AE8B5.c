/*
 * XREFs of sub_1401AE8B5 @ 0x1401AE8B5
 * Callers:
 *     sub_1401AE8BE @ 0x1401AE8BE (sub_1401AE8BE.c)
 * Callees:
 *     sub_1401AE8AC @ 0x1401AE8AC (sub_1401AE8AC.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_1401AE8B5()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_1401AE8AC();
  return sub_1401AE8BE(v1, v0);
}
