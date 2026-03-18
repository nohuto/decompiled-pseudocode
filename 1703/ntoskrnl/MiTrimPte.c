/*
 * XREFs of MiTrimPte @ 0x1400FF080
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimWorkingSetBuildup @ 0x14002F650 (MiTrimWorkingSetBuildup.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiTrimThisWsle @ 0x1400FF1A0 (MiTrimThisWsle.c)
 *     MiComputeNextWalkPte @ 0x1400FF3B8 (MiComputeNextWalkPte.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rdi
  _BOOL8 v6; // rdx
  __int64 v7; // rbx

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a2 << 25 >> 16;
  v6 = v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL;
  **(_QWORD **)(v4 + 16) = MiComputeNextWalkPte(a2, v6);
  v7 = *(_QWORD *)(a1 + 136);
  if ( (unsigned int)MiTrimThisWsle(a1, v4, v5) == 1 )
  {
    MiInsertTbFlushEntry(v7 + 48, v5, 1LL, 0);
    if ( (*(_DWORD *)v7 & 0x10) != 0 )
      MI_WSLE_LOG_ACCESS(v4, a2);
    if ( *(_QWORD *)(v7 + 8) == ++*(_QWORD *)(v7 + 16) || *(_DWORD *)(v7 + 60) == *(_DWORD *)(v7 + 56) )
    {
      MiTrimWorkingSetBuildup(a1);
      if ( *(_QWORD *)(v7 + 8) == *(_QWORD *)(v7 + 16) )
        return 3LL;
    }
  }
  return ++*(_QWORD *)(v7 + 32) >= *(_QWORD *)(v7 + 40) ? 3 : 0;
}
