/*
 * XREFs of sub_1800F38FC @ 0x1800F38FC
 * Callers:
 *     sub_1800F3814 @ 0x1800F3814 (sub_1800F3814.c)
 *     sub_1800F3EDC @ 0x1800F3EDC (sub_1800F3EDC.c)
 *     sub_1800F3FB0 @ 0x1800F3FB0 (sub_1800F3FB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall sub_1800F38FC(__int64 a1)
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
  v3 = (__int16 *)&unk_18015D800;
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
