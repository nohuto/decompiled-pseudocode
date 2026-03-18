/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x140266E48
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x14017B574 (MiDeleteZeroThreadContext.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14017BB60 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x1400C0E24 (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x14018373C (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 176LL));
  else
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
