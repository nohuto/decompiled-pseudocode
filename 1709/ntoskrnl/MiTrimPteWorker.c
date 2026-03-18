/*
 * XREFs of MiTrimPteWorker @ 0x140011034
 * Callers:
 *     MiTrimPte @ 0x140010D30 (MiTrimPte.c)
 *     MiTrimWorkingSetEPTCallback @ 0x14021E730 (MiTrimWorkingSetEPTCallback.c)
 * Callees:
 *     MiTrimThisWsle @ 0x1400110FC (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     MiTrimWorkingSetBuildup @ 0x1400116EC (MiTrimWorkingSetBuildup.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiTrimPteWorker(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, __int64 a7)
{
  if ( !(unsigned int)MiTrimThisWsle(a1, a3, a4, a5, a6, a7) )
    return 0LL;
  MiInsertTbFlushEntry(a5 + 56, a3, 1LL, 0LL);
  if ( (*(_DWORD *)a5 & 0x10) != 0 )
    MI_WSLE_LOG_ACCESS(a1, a2);
  if ( ((++*(_QWORD *)(a5 + 16), *(_QWORD *)(a5 + 16) == *(_QWORD *)(a5 + 8))
     || *(_DWORD *)(a5 + 68) == *(_DWORD *)(a5 + 64))
    && (MiTrimWorkingSetBuildup(a1, a5), *(_QWORD *)(a5 + 16) == *(_QWORD *)(a5 + 8)) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
