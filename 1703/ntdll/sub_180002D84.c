/*
 * XREFs of sub_180002D84 @ 0x180002D84
 * Callers:
 *     sub_180002BD0 @ 0x180002BD0 (sub_180002BD0.c)
 * Callees:
 *     sub_180002DE4 @ 0x180002DE4 (sub_180002DE4.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 */

void *__fastcall sub_180002D84(int a1)
{
  void *result; // rax
  void *v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  result = (void *)sub_18005DC24(32, a1, (int)&v4, 0, 0LL);
  v2 = result;
  if ( result )
  {
    v3 = sub_180002DE4(result, v4, 1LL);
    if ( !v3 )
      sub_18010D634(v2);
    return (void *)v3;
  }
  return result;
}
