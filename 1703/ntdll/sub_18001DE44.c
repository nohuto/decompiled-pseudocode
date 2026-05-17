/*
 * XREFs of sub_18001DE44 @ 0x18001DE44
 * Callers:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     sub_1800D7D58 @ 0x1800D7D58 (sub_1800D7D58.c)
 */

__int64 __fastcall sub_18001DE44(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1;
  if ( !qword_18016B278 )
    sub_1800D7D58();
  v4 = qword_18016B278;
  v3 = qword_18016B268;
  result = ZwProtectVirtualMemory(-1LL, &v4, &v3, v2, &v2);
  if ( (int)result < 0 )
    __fastfail(5u);
  return result;
}
