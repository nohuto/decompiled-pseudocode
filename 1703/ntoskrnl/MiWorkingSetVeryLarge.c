/*
 * XREFs of MiWorkingSetVeryLarge @ 0x14020E2C8
 * Callers:
 *     MiOrderTrimList @ 0x1402152D4 (MiOrderTrimList.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x140083AB0 (MiGetStandbyRepurposed.c)
 */

_BOOL8 __fastcall MiWorkingSetVeryLarge(__int64 a1, int a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  _QWORD *v5; // r10
  int StandbyRepurposed; // eax

  v2 = *(_QWORD *)(a1 + 136);
  if ( a2 == 1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  else
    v3 = *(_QWORD *)(a1 + 112);
  if ( v2 <= v3 )
    return 0LL;
  v5 = *(_QWORD **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172));
  if ( v2 - v3 < 3LL * (v5[698] >> 2) )
    return 0LL;
  if ( a2 == 1
    && (StandbyRepurposed = MiGetStandbyRepurposed((__int64)v5, 1u), StandbyRepurposed == *(_DWORD *)(v5[693] + 44LL)) )
  {
    return 0LL;
  }
  else
  {
    return v5[720] < (unsigned __int64)(4LL * *(_QWORD *)(v5[693] + 2392LL));
  }
}
