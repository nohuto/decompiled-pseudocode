/*
 * XREFs of sub_1800033F0 @ 0x1800033F0
 * Callers:
 *     sub_18005D9D8 @ 0x18005D9D8 (sub_18005D9D8.c)
 *     sub_180109064 @ 0x180109064 (sub_180109064.c)
 * Callees:
 *     sub_180003454 @ 0x180003454 (sub_180003454.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 */

__int64 sub_1800033F0()
{
  __int64 result; // rax
  void *v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  result = sub_18005DC24(320, -1, (int)&v3, 0, 0LL);
  v1 = (void *)result;
  if ( result )
  {
    v2 = sub_180003454(result, v3, 3LL);
    if ( !v2 )
      sub_18010D634(v1);
    return v2;
  }
  return result;
}
