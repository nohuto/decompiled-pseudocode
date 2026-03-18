/*
 * XREFs of sub_1405E16D0 @ 0x1405E16D0
 * Callers:
 *     sub_1405E1688 @ 0x1405E1688 (sub_1405E1688.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     sub_140537000 @ 0x140537000 (sub_140537000.c)
 *     sub_140537070 @ 0x140537070 (sub_140537070.c)
 *     sub_1405370E0 @ 0x1405370E0 (sub_1405370E0.c)
 *     sub_140537160 @ 0x140537160 (sub_140537160.c)
 *     sub_140537200 @ 0x140537200 (sub_140537200.c)
 *     sub_1405372B0 @ 0x1405372B0 (sub_1405372B0.c)
 *     sub_140537330 @ 0x140537330 (sub_140537330.c)
 *     sub_140537360 @ 0x140537360 (sub_140537360.c)
 *     sub_1405373E0 @ 0x1405373E0 (sub_1405373E0.c)
 *     sub_140537410 @ 0x140537410 (sub_140537410.c)
 *     sub_140537440 @ 0x140537440 (sub_140537440.c)
 *     sub_140537500 @ 0x140537500 (sub_140537500.c)
 *     sub_1405375C0 @ 0x1405375C0 (sub_1405375C0.c)
 *     sub_140537630 @ 0x140537630 (sub_140537630.c)
 *     sub_1405376A0 @ 0x1405376A0 (sub_1405376A0.c)
 *     sub_1405376D0 @ 0x1405376D0 (sub_1405376D0.c)
 *     sub_140537780 @ 0x140537780 (sub_140537780.c)
 *     sub_140537830 @ 0x140537830 (sub_140537830.c)
 *     sub_1405378D0 @ 0x1405378D0 (sub_1405378D0.c)
 *     sub_140537970 @ 0x140537970 (sub_140537970.c)
 *     sub_140537A10 @ 0x140537A10 (sub_140537A10.c)
 *     sub_140537A80 @ 0x140537A80 (sub_140537A80.c)
 *     sub_140537B40 @ 0x140537B40 (sub_140537B40.c)
 *     sub_140537BE0 @ 0x140537BE0 (sub_140537BE0.c)
 *     sub_1405976D0 @ 0x1405976D0 (sub_1405976D0.c)
 *     sub_1405D5CF0 @ 0x1405D5CF0 (sub_1405D5CF0.c)
 *     sub_1405D5DA0 @ 0x1405D5DA0 (sub_1405D5DA0.c)
 *     sub_1405D6A40 @ 0x1405D6A40 (sub_1405D6A40.c)
 *     sub_1405DBC80 @ 0x1405DBC80 (sub_1405DBC80.c)
 *     sub_14076D7B0 @ 0x14076D7B0 (sub_14076D7B0.c)
 */

__int64 __fastcall sub_1405E16D0(__int64 *a1)
{
  unsigned __int8 *v1; // rbx
  int v3; // r11d
  int v4; // r10d
  __int64 v5; // rdi
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

  v1 = (unsigned __int8 *)&unk_1407F3A02;
  v18 = *a1;
  v17 = qword_1407F32C8;
  v3 = BYTE3(v18) | ((BYTE2(v18) | ((BYTE1(v18) | ((unsigned __int8)v18 << 8)) << 8)) << 8);
  v4 = ~(HIBYTE(v18) | ((BYTE6(v18) | ((BYTE5(v18) | (BYTE4(v18) << 8)) << 8)) << 8));
  v5 = 0LL;
  LODWORD(v18) = v3;
  v16 = v4;
  v6 = 0LL;
  v7 = 16LL;
  do
  {
    v8 = byte_1407F3A80[v5];
    if ( v8 < 0x1Fu )
    {
      v14 = funcs_1404F4BF6[v8](v6, *(v1 - 2), *(v1 - 1), *v1, v1[1], (__int64)&v17, v4);
      v4 = v16;
      v3 = v14 ^ v18;
      LODWORD(v18) = v14 ^ v18;
    }
    if ( byte_1407F3A80[v5 + 1] < 0x1Fu )
    {
      v15 = funcs_1404F4BF6[(unsigned __int8)byte_1407F3A80[v5 + 1]](
              v6 + 1,
              v1[2],
              v1[3],
              v1[4],
              v1[5],
              (__int64)&v17,
              v3);
      v3 = v18;
      v4 = v15 ^ v16;
      v16 ^= v15;
    }
    v6 += 2LL;
    v5 += 2LL;
    v1 += 8;
    --v7;
  }
  while ( v7 );
  BYTE3(v18) = v3;
  v9 = __ROR4__(v3, 8);
  HIBYTE(v18) = v4;
  BYTE2(v18) = v9;
  v10 = __ROR4__(v4, 8);
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
