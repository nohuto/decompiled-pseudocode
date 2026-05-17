/*
 * XREFs of sub_18001A7FC @ 0x18001A7FC
 * Callers:
 *     sub_18001A58C @ 0x18001A58C (sub_18001A58C.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 * Callees:
 *     sub_18001A44C @ 0x18001A44C (sub_18001A44C.c)
 */

_UNKNOWN **__fastcall sub_18001A7FC(__int64 a1)
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
    return (_UNKNOWN **)sub_18001A44C(a1, &v3, (__int64 **)&v4);
  }
  return result;
}
