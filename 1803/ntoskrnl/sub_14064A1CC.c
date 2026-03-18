/*
 * XREFs of sub_14064A1CC @ 0x14064A1CC
 * Callers:
 *     sub_14064A184 @ 0x14064A184 (sub_14064A184.c)
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

__int64 __fastcall sub_14064A1CC(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int8 *v2; // rbx
  int v4; // r10d
  int v5; // r11d
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int8 v9; // al
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

  v1 = *a1;
  v2 = (unsigned __int8 *)&unk_140861AA2;
  v18 = qword_1408612C8;
  v4 = ~(HIBYTE(v1) | ((BYTE6(v1) | ((BYTE5(v1) | (BYTE4(v1) << 8)) << 8)) << 8));
  v17 = v4;
  v5 = BYTE3(v1) | ((BYTE2(v1) | ((((unsigned __int8)v1 << 8) | BYTE1(v1)) << 8)) << 8);
  v6 = 0LL;
  LODWORD(v19) = v5;
  v7 = 0LL;
  v8 = 16LL;
  do
  {
    v9 = byte_140861B20[v6];
    if ( v9 < 0x1Fu )
    {
      v15 = funcs_1404B10CE[v9](v7, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v18, v4);
      v4 = v17;
      v5 = v15 ^ v19;
      LODWORD(v19) = v15 ^ v19;
    }
    if ( byte_140861B20[v6 + 1] < 0x1Fu )
    {
      v16 = funcs_1404B10CE[(unsigned __int8)byte_140861B20[v6 + 1]](
              v7 + 1,
              v2[2],
              v2[3],
              v2[4],
              v2[5],
              (__int64)&v18,
              v5);
      v5 = v19;
      v4 = v16 ^ v17;
      v17 ^= v16;
    }
    v7 += 2LL;
    v6 += 2LL;
    v2 += 8;
    --v8;
  }
  while ( v8 );
  BYTE3(v19) = v5;
  v10 = __ROR4__(v5, 8);
  HIBYTE(v19) = v4;
  BYTE2(v19) = v10;
  v11 = __ROR4__(v4, 8);
  v12 = __ROR4__(v10, 8);
  BYTE6(v19) = v11;
  BYTE1(v19) = v12;
  v13 = __ROR4__(v11, 8);
  BYTE5(v19) = v13;
  BYTE4(v19) = __ROR4__(v13, 8);
  LOBYTE(v19) = __ROR4__(v12, 8);
  result = v19;
  *a1 = v19;
  return result;
}
