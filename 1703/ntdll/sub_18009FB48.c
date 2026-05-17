/*
 * XREFs of sub_18009FB48 @ 0x18009FB48
 * Callers:
 *     sub_18009C40C @ 0x18009C40C (sub_18009C40C.c)
 *     sub_18009CD80 @ 0x18009CD80 (sub_18009CD80.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_18009FB48()
{
  return qword_180159390 == (_security_cookie | 1);
}
