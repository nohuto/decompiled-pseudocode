/*
 * XREFs of MiTrimWorkingSetBuildup @ 0x14002F650
 * Callers:
 *     MiTrimWorkingSetTail @ 0x14002F620 (MiTrimWorkingSetTail.c)
 *     MiTrimPte @ 0x1400FF080 (MiTrimPte.c)
 * Callees:
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 */

void __fastcall MiTrimWorkingSetBuildup(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 136);
  if ( *(_DWORD *)(v1 + 60) )
  {
    v2 = MiFreeWsleList(*(_QWORD *)(a1 + 8), v1 + 48, (*(_DWORD *)v1 >> 8) & 1);
    *(_DWORD *)(v1 + 60) = 0;
    *(_QWORD *)(v1 + 16) -= v2;
  }
}
