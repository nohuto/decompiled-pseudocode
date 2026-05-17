/*
 * XREFs of sub_180028724 @ 0x180028724
 * Callers:
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     sub_1800D0CF4 @ 0x1800D0CF4 (sub_1800D0CF4.c)
 */

__int64 __fastcall sub_180028724(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1;
  if ( !qword_18016F288 )
    sub_1800D0CF4();
  v4 = qword_18016F288;
  v3 = qword_18016F278;
  result = ZwProtectVirtualMemory(-1LL, &v4, &v3, v2, &v2);
  if ( (int)result < 0 )
    __fastfail(5u);
  return result;
}
