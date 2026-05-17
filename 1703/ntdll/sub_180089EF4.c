/*
 * XREFs of sub_180089EF4 @ 0x180089EF4
 * Callers:
 *     sub_180089B84 @ 0x180089B84 (sub_180089B84.c)
 *     sub_180089DC4 @ 0x180089DC4 (sub_180089DC4.c)
 *     sub_1800F64C8 @ 0x1800F64C8 (sub_1800F64C8.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

unsigned __int64 __fastcall sub_180089EF4(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int8 *v2; // r9
  __int16 *v3; // r10
  __int64 v4; // r11
  __int16 v5; // cx
  unsigned __int16 v6; // dx
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF

  v1 = 0LL;
  v8 = a1;
  v2 = (unsigned __int8 *)&v8;
  v3 = (__int16 *)&unk_18015C400;
  v4 = 8LL;
  do
  {
    v5 = *v3++;
    v6 = v5 * *v2++;
    v1 += v6 % 0x1EEFu;
    --v4;
  }
  while ( v4 );
  return v1 % 0x1EEF;
}
