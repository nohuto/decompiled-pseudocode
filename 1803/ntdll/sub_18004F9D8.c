/*
 * XREFs of sub_18004F9D8 @ 0x18004F9D8
 * Callers:
 *     RtlGetFileMUIPath @ 0x18004EF20 (RtlGetFileMUIPath.c)
 *     sub_18004F96C @ 0x18004F96C (sub_18004F96C.c)
 *     sub_1800E82D0 @ 0x1800E82D0 (sub_1800E82D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004F9D8(unsigned int a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // ecx

  v2 = a2 * a1;
  result = 0LL;
  if ( is_mul_ok(a2, a1) )
  {
    v4 = 0;
  }
  else
  {
    v2 = -1LL;
    v4 = -1073741675;
  }
  if ( v4 >= 0 )
    return v2;
  return result;
}
