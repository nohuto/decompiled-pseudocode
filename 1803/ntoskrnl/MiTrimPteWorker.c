/*
 * XREFs of MiTrimPteWorker @ 0x14025A4D0
 * Callers:
 *     MiTrimWorkingSetEPTCallback @ 0x14025A5A0 (MiTrimWorkingSetEPTCallback.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiTrimWorkingSetBuildup @ 0x1400B5E78 (MiTrimWorkingSetBuildup.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     MiTrimThisWsle @ 0x14012ABC0 (MiTrimThisWsle.c)
 */

__int64 __fastcall MiTrimPteWorker(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _DWORD *a7)
{
  __int64 v10; // r8

  if ( !(unsigned int)MiTrimThisWsle(a1, a3, a4, (int *)a5, a6, a7) )
    return 0LL;
  MiInsertTbFlushEntry(a5 + 56, a3, 1LL, 0);
  if ( (*(_DWORD *)a5 & 0x10) != 0 )
    MI_WSLE_LOG_ACCESS(a1, a2, v10);
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
