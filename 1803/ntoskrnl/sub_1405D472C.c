/*
 * XREFs of sub_1405D472C @ 0x1405D472C
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x1405D4308 (ExpHwidGetDeviceProperties.c)
 *     sub_1407CA23C @ 0x1407CA23C (sub_1407CA23C.c)
 * Callees:
 *     sub_1405D4774 @ 0x1405D4774 (sub_1405D4774.c)
 */

__int64 __fastcall sub_1405D472C(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  sub_1405D4774(a1, a2, a1);
  sub_1405D4774(v2 + 40, v3, v4);
  sub_1405D4774(v5 + 56, v6, v5);
  return sub_1405D4774(v7 + 72, v8, v7);
}
