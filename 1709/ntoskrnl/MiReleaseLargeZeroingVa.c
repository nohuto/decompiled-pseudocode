/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x14022B7D8
 * Callers:
 *     MiDecrementHugeContext @ 0x14015578C (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14010FE88 (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x1401559FC (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 == 1 )
    MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 176LL));
  else
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_KPROCESS **)(a1 + 32), 3, a4);
}
