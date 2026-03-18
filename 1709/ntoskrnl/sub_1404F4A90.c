/*
 * XREFs of sub_1404F4A90 @ 0x1404F4A90
 * Callers:
 *     sub_1404F4A48 @ 0x1404F4A48 (sub_1404F4A48.c)
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

__int64 __fastcall sub_1404F4A90(__int64 *a1)
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

  v1 = (unsigned __int8 *)&unk_1407F3A9E;
  v2 = (unsigned __int8 *)&unk_1407F3A7E;
  v19 = *a1;
  v3 = 30LL;
  v5 = 16LL;
  v18 = qword_1407F32C8;
  v6 = BYTE3(v19) | ((BYTE2(v19) | ((BYTE1(v19) | ((unsigned __int8)v19 << 8)) << 8)) << 8);
  v17 = v6;
  v7 = HIBYTE(v19) | ((BYTE6(v19) | ((BYTE5(v19) | (BYTE4(v19) << 8)) << 8)) << 8);
  LODWORD(v19) = v7;
  do
  {
    v8 = v1[1];
    if ( v8 < 0x1Fu )
    {
      v16 = funcs_1404F4BF6[v8](v3 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v18, v6);
      v6 = v17;
      v7 = v16 ^ v19;
      LODWORD(v19) = v16 ^ v19;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_1404F4BF6[*v1](v3, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v18, v7);
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
