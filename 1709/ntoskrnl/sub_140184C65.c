/*
 * XREFs of sub_140184C65 @ 0x140184C65
 * Callers:
 *     sub_140184C6E @ 0x140184C6E (sub_140184C6E.c)
 * Callees:
 *     sub_140184C5C @ 0x140184C5C (sub_140184C5C.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_140184C65()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_140184C5C();
  return sub_140184C6E(v1, v0);
}
