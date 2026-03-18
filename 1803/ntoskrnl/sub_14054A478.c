/*
 * XREFs of sub_14054A478 @ 0x14054A478
 * Callers:
 *     sub_14054A430 @ 0x14054A430 (sub_14054A430.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     sub_14054A670 @ 0x14054A670 (sub_14054A670.c)
 *     sub_14054A6E0 @ 0x14054A6E0 (sub_14054A6E0.c)
 *     sub_14054A750 @ 0x14054A750 (sub_14054A750.c)
 *     sub_14054A7C0 @ 0x14054A7C0 (sub_14054A7C0.c)
 *     sub_14054A830 @ 0x14054A830 (sub_14054A830.c)
 *     sub_14054A8D0 @ 0x14054A8D0 (sub_14054A8D0.c)
 *     sub_14054A980 @ 0x14054A980 (sub_14054A980.c)
 *     sub_14054A9B0 @ 0x14054A9B0 (sub_14054A9B0.c)
 *     sub_14054AA30 @ 0x14054AA30 (sub_14054AA30.c)
 *     sub_14054AA60 @ 0x14054AA60 (sub_14054AA60.c)
 *     sub_14054AB20 @ 0x14054AB20 (sub_14054AB20.c)
 *     sub_14054AB50 @ 0x14054AB50 (sub_14054AB50.c)
 *     sub_14054AC10 @ 0x14054AC10 (sub_14054AC10.c)
 *     sub_14054AC80 @ 0x14054AC80 (sub_14054AC80.c)
 *     sub_14054ACF0 @ 0x14054ACF0 (sub_14054ACF0.c)
 *     sub_14054AD20 @ 0x14054AD20 (sub_14054AD20.c)
 *     sub_14054ADD0 @ 0x14054ADD0 (sub_14054ADD0.c)
 *     sub_14054AE80 @ 0x14054AE80 (sub_14054AE80.c)
 *     sub_14054AF20 @ 0x14054AF20 (sub_14054AF20.c)
 *     sub_14054AFC0 @ 0x14054AFC0 (sub_14054AFC0.c)
 *     sub_14054B060 @ 0x14054B060 (sub_14054B060.c)
 *     sub_14054B0D0 @ 0x14054B0D0 (sub_14054B0D0.c)
 *     sub_14054B190 @ 0x14054B190 (sub_14054B190.c)
 *     sub_14054B230 @ 0x14054B230 (sub_14054B230.c)
 *     sub_14054B2E0 @ 0x14054B2E0 (sub_14054B2E0.c)
 *     sub_1405C29F0 @ 0x1405C29F0 (sub_1405C29F0.c)
 *     sub_1405C2AA0 @ 0x1405C2AA0 (sub_1405C2AA0.c)
 *     sub_1405C2E40 @ 0x1405C2E40 (sub_1405C2E40.c)
 *     sub_1405C2F50 @ 0x1405C2F50 (sub_1405C2F50.c)
 *     sub_1407D48D0 @ 0x1407D48D0 (sub_1407D48D0.c)
 */

__int64 __fastcall sub_14054A478(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int8 *v2; // rdi
  unsigned __int8 *v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // r14
  int v7; // r11d
  int v8; // r10d
  unsigned __int8 v9; // al
  int v10; // r10d
  int v11; // r11d
  int v12; // r10d
  int v13; // r11d
  int v14; // r10d
  __int64 result; // rax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]

  v1 = *a1;
  v2 = (unsigned __int8 *)&unk_140861B3E;
  v3 = (unsigned __int8 *)&unk_140861B1E;
  v19 = qword_1408612C8;
  v5 = 30LL;
  v6 = 16LL;
  v7 = BYTE3(v1) | ((BYTE2(v1) | ((((unsigned __int8)v1 << 8) | BYTE1(v1)) << 8)) << 8);
  v18 = v7;
  v8 = HIBYTE(v1) | ((BYTE6(v1) | ((BYTE5(v1) | (BYTE4(v1) << 8)) << 8)) << 8);
  LODWORD(v20) = v8;
  do
  {
    v9 = v2[1];
    if ( v9 < 0x1Fu )
    {
      v17 = funcs_1404B10CE[v9](v5 + 1, *(v3 - 2), *(v3 - 1), *v3, v3[1], (__int64)&v19, v7);
      v7 = v18;
      v8 = v17 ^ v20;
      LODWORD(v20) = v17 ^ v20;
    }
    if ( *v2 < 0x1Fu )
    {
      v16 = funcs_1404B10CE[*v2](v5, *(v3 - 6), *(v3 - 5), *(v3 - 4), *(v3 - 3), (__int64)&v19, v8);
      v8 = v20;
      v7 = v16 ^ v18;
      v18 ^= v16;
    }
    v5 -= 2LL;
    v2 -= 2;
    v3 -= 8;
    --v6;
  }
  while ( v6 );
  v10 = ~v8;
  BYTE3(v20) = v7;
  v11 = __ROR4__(v7, 8);
  HIBYTE(v20) = v10;
  v12 = __ROR4__(v10, 8);
  BYTE2(v20) = v11;
  v13 = __ROR4__(v11, 8);
  BYTE6(v20) = v12;
  v14 = __ROR4__(v12, 8);
  BYTE1(v20) = v13;
  BYTE5(v20) = v14;
  BYTE4(v20) = __ROR4__(v14, 8);
  LOBYTE(v20) = __ROR4__(v13, 8);
  result = v20;
  *a1 = v20;
  return result;
}
