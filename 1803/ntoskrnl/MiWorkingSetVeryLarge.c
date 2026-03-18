/*
 * XREFs of MiWorkingSetVeryLarge @ 0x1402538D0
 * Callers:
 *     MiOrderTrimList @ 0x140259ADC (MiOrderTrimList.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x1400819A0 (MiGetStandbyRepurposed.c)
 */

char __fastcall MiWorkingSetVeryLarge(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // r9
  _QWORD *v4; // r10
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r10
  unsigned __int64 v9; // r11

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v1 <= v2 )
    return 0;
  v4 = *(_QWORD **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v5 = v4[858];
  v6 = v1 & 0x3F;
  if ( (v1 & 0x3F) == 0 && v4[880] < v5 / 0x14 && v1 >= v5 / 0x14 )
    return v6 + 1;
  if ( v1 - v2 < 3 * (v5 >> 2) )
    return 0;
  v7 = v4[846];
  if ( (unsigned int)MiGetStandbyRepurposed((__int64)v4, 1u) == *(_DWORD *)(v7 + 44) )
    return 0;
  if ( v6 )
    v9 = *(_QWORD *)(v8 + 7040);
  return v9 < 10LL * *(_QWORD *)(v7 + 2392);
}
