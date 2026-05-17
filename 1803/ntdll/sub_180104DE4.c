/*
 * XREFs of sub_180104DE4 @ 0x180104DE4
 * Callers:
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 *     sub_1800ED18C @ 0x1800ED18C (sub_1800ED18C.c)
 * Callees:
 *     sub_180104E98 @ 0x180104E98 (sub_180104E98.c)
 */

__int64 __fastcall sub_180104DE4(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 224);
  v4 = 129LL;
  do
  {
    result = *v3;
    if ( (*v3 & 1) == 0 )
      result = sub_180104E98(*v3, a2);
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
