/*
 * XREFs of StorpSetUnitAttributes @ 0x1C0033818
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall StorpSetUnitAttributes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 Unit; // rax
  unsigned int v8; // [rsp+40h] [rbp+18h]

  v4 = a3;
  if ( (unsigned int)a3 >= 8 )
    return 3238002694LL;
  v5 = **(_QWORD **)(a1 - 16);
  if ( !v5 )
    return 3238002694LL;
  if ( !a2 )
    return 3238002694LL;
  if ( *(_WORD *)a2 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v8) = *(_WORD *)(a2 + 8);
  BYTE2(v8) = *(_BYTE *)(a2 + 10);
  Unit = RaidAdapterFindUnit(v5, v8, a3, a4);
  if ( !Unit )
    return 3238002694LL;
  *(_DWORD *)(Unit + 1568) ^= (*(_DWORD *)(Unit + 1568) ^ (2 * v4)) & 0xE;
  return 0LL;
}
