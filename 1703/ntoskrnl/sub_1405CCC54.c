/*
 * XREFs of sub_1405CCC54 @ 0x1405CCC54
 * Callers:
 *     sub_1405CCC0C @ 0x1405CCC0C (sub_1405CCC0C.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     sub_1404AD470 @ 0x1404AD470 (sub_1404AD470.c)
 *     sub_1404AD4E0 @ 0x1404AD4E0 (sub_1404AD4E0.c)
 *     sub_1404AD550 @ 0x1404AD550 (sub_1404AD550.c)
 *     sub_1404AD5D0 @ 0x1404AD5D0 (sub_1404AD5D0.c)
 *     sub_1404AD650 @ 0x1404AD650 (sub_1404AD650.c)
 *     sub_1404AD6F0 @ 0x1404AD6F0 (sub_1404AD6F0.c)
 *     sub_1404AD7A0 @ 0x1404AD7A0 (sub_1404AD7A0.c)
 *     sub_1404AD7D0 @ 0x1404AD7D0 (sub_1404AD7D0.c)
 *     sub_1404AD850 @ 0x1404AD850 (sub_1404AD850.c)
 *     sub_1404AD880 @ 0x1404AD880 (sub_1404AD880.c)
 *     sub_1404AD940 @ 0x1404AD940 (sub_1404AD940.c)
 *     sub_1404AD970 @ 0x1404AD970 (sub_1404AD970.c)
 *     sub_1404ADA30 @ 0x1404ADA30 (sub_1404ADA30.c)
 *     sub_1404ADAA0 @ 0x1404ADAA0 (sub_1404ADAA0.c)
 *     sub_1404ADB10 @ 0x1404ADB10 (sub_1404ADB10.c)
 *     sub_1404ADB40 @ 0x1404ADB40 (sub_1404ADB40.c)
 *     sub_1404ADBF0 @ 0x1404ADBF0 (sub_1404ADBF0.c)
 *     sub_1404ADCA0 @ 0x1404ADCA0 (sub_1404ADCA0.c)
 *     sub_1404ADD40 @ 0x1404ADD40 (sub_1404ADD40.c)
 *     sub_1404ADDE0 @ 0x1404ADDE0 (sub_1404ADDE0.c)
 *     sub_1404ADE80 @ 0x1404ADE80 (sub_1404ADE80.c)
 *     sub_1404ADEF0 @ 0x1404ADEF0 (sub_1404ADEF0.c)
 *     sub_1404ADFB0 @ 0x1404ADFB0 (sub_1404ADFB0.c)
 *     sub_1404AE050 @ 0x1404AE050 (sub_1404AE050.c)
 *     sub_1404AE100 @ 0x1404AE100 (sub_1404AE100.c)
 *     sub_140594A60 @ 0x140594A60 (sub_140594A60.c)
 *     sub_140594B10 @ 0x140594B10 (sub_140594B10.c)
 *     sub_140594BB0 @ 0x140594BB0 (sub_140594BB0.c)
 *     sub_1405957E0 @ 0x1405957E0 (sub_1405957E0.c)
 *     sub_14072ACD0 @ 0x14072ACD0 (sub_14072ACD0.c)
 */

__int64 __fastcall sub_1405CCC54(__int64 *a1)
{
  unsigned __int8 *v1; // rbx
  int v3; // r11d
  __int64 v4; // rdi
  int v5; // r10d
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int8 v8; // al
  int v9; // r11d
  int v10; // r10d
  int v11; // r11d
  int v12; // r10d
  __int64 result; // rax
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_1407AC972;
  v18 = *a1;
  v17 = qword_1407AC2D8;
  v3 = BYTE3(v18) | ((BYTE2(v18) | ((BYTE1(v18) | ((unsigned __int8)v18 << 8)) << 8)) << 8);
  LODWORD(v18) = v3;
  v4 = 0LL;
  v5 = ~(HIBYTE(v18) | ((BYTE6(v18) | ((BYTE5(v18) | (BYTE4(v18) << 8)) << 8)) << 8));
  v16 = v5;
  v6 = 0LL;
  v7 = 16LL;
  do
  {
    v8 = byte_1407AC9F0[v4];
    if ( v8 < 0x1Fu )
    {
      v14 = funcs_1404A9C7B[v8](v6, *(v1 - 2), *(v1 - 1), *v1, v1[1], (__int64)&v17, v5);
      v5 = v16;
      v3 = v14 ^ v18;
      LODWORD(v18) = v14 ^ v18;
    }
    if ( byte_1407AC9F0[v4 + 1] < 0x1Fu )
    {
      v15 = funcs_1404A9C7B[(unsigned __int8)byte_1407AC9F0[v4 + 1]](
              v6 + 1,
              v1[2],
              v1[3],
              v1[4],
              v1[5],
              (__int64)&v17,
              v3);
      v3 = v18;
      v5 = v15 ^ v16;
      v16 ^= v15;
    }
    v6 += 2LL;
    v4 += 2LL;
    v1 += 8;
    --v7;
  }
  while ( v7 );
  BYTE3(v18) = v3;
  v9 = __ROR4__(v3, 8);
  HIBYTE(v18) = v5;
  BYTE2(v18) = v9;
  v10 = __ROR4__(v5, 8);
  v11 = __ROR4__(v9, 8);
  BYTE6(v18) = v10;
  BYTE1(v18) = v11;
  v12 = __ROR4__(v10, 8);
  BYTE5(v18) = v12;
  BYTE4(v18) = __ROR4__(v12, 8);
  LOBYTE(v18) = __ROR4__(v11, 8);
  result = v18;
  *a1 = v18;
  return result;
}
