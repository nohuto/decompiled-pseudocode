/*
 * XREFs of sub_1800717A0 @ 0x1800717A0
 * Callers:
 *     sub_18002DF14 @ 0x18002DF14 (sub_18002DF14.c)
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 * Callees:
 *     sub_1800717CC @ 0x1800717CC (sub_1800717CC.c)
 */

_UNKNOWN **__fastcall sub_1800717A0(__int64 a1)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  int v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = &retaddr;
  if ( *(int *)(a1 + 56) < 6 )
  {
    v3 = 0;
    v4 = 1LL;
    return (_UNKNOWN **)sub_1800717CC(a1, &v3, &v4);
  }
  return result;
}
