/*
 * XREFs of sub_1800584C8 @ 0x1800584C8
 * Callers:
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 *     sub_18005845C @ 0x18005845C (sub_18005845C.c)
 *     sub_1800EC2E0 @ 0x1800EC2E0 (sub_1800EC2E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800584C8(unsigned int a1, unsigned __int64 a2)
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
