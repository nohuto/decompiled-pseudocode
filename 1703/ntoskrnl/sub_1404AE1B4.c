/*
 * XREFs of sub_1404AE1B4 @ 0x1404AE1B4
 * Callers:
 *     sub_1404AE384 @ 0x1404AE384 (sub_1404AE384.c)
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

__int64 __fastcall sub_1404AE1B4(__int64 *a1)
{
  unsigned __int8 *v1; // rdi
  unsigned __int8 *v2; // rbx
  __int64 v3; // rsi
  __int64 v5; // r14
  int v6; // r11d
  int v7; // r10d
  unsigned __int8 v8; // al
  int v9; // r10d
  int v10; // r11d
  int v11; // r10d
  int v12; // r11d
  int v13; // r10d
  __int64 result; // rax
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_1407ACA0E;
  v2 = (unsigned __int8 *)&unk_1407AC9EE;
  v19 = *a1;
  v3 = 30LL;
  v5 = 16LL;
  v18 = qword_1407AC2D8;
  v6 = BYTE3(v19) | ((BYTE2(v19) | ((BYTE1(v19) | ((unsigned __int8)v19 << 8)) << 8)) << 8);
  v17 = v6;
  v7 = HIBYTE(v19) | ((BYTE6(v19) | ((BYTE5(v19) | (BYTE4(v19) << 8)) << 8)) << 8);
  LODWORD(v19) = v7;
  do
  {
    v8 = v1[1];
    if ( v8 < 0x1Fu )
    {
      v16 = funcs_1404A9C7B[v8](v3 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v18, v6);
      v6 = v17;
      v7 = v16 ^ v19;
      LODWORD(v19) = v16 ^ v19;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_1404A9C7B[*v1](v3, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v18, v7);
      v7 = v19;
      v6 = v15 ^ v17;
      v17 ^= v15;
    }
    v3 -= 2LL;
    v1 -= 2;
    v2 -= 8;
    --v5;
  }
  while ( v5 );
  v9 = ~v7;
  BYTE3(v19) = v6;
  v10 = __ROR4__(v6, 8);
  HIBYTE(v19) = v9;
  v11 = __ROR4__(v9, 8);
  BYTE2(v19) = v10;
  v12 = __ROR4__(v10, 8);
  BYTE6(v19) = v11;
  v13 = __ROR4__(v11, 8);
  BYTE1(v19) = v12;
  BYTE5(v19) = v13;
  BYTE4(v19) = __ROR4__(v13, 8);
  LOBYTE(v19) = __ROR4__(v12, 8);
  result = v19;
  *a1 = v19;
  return result;
}
