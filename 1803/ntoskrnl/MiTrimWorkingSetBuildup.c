/*
 * XREFs of MiTrimWorkingSetBuildup @ 0x1400B5E78
 * Callers:
 *     MiTrimWorkingSetTail @ 0x1400B5E10 (MiTrimWorkingSetTail.c)
 *     MiTrimPte @ 0x14012A7D0 (MiTrimPte.c)
 *     MiTrimPteWorker @ 0x14025A4D0 (MiTrimPteWorker.c)
 * Callees:
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 */

void __fastcall MiTrimWorkingSetBuildup(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = a2 + 56;
  if ( *(_DWORD *)(v3 + 12) )
    *(_QWORD *)(a2 + 16) -= MiFreeWsleList(a1, v3, (*(_DWORD *)a2 >> 8) & 1);
}
