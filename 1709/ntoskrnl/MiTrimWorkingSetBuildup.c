/*
 * XREFs of MiTrimWorkingSetBuildup @ 0x1400116EC
 * Callers:
 *     MiTrimWorkingSetTail @ 0x140010B30 (MiTrimWorkingSetTail.c)
 *     MiTrimPteWorker @ 0x140011034 (MiTrimPteWorker.c)
 * Callees:
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 */

void __fastcall MiTrimWorkingSetBuildup(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_DWORD *)(a2 + 68) )
  {
    v3 = MiFreeWsleList(a1, a2 + 56, (*(_DWORD *)a2 >> 8) & 1);
    *(_DWORD *)(a2 + 68) = 0;
    *(_QWORD *)(a2 + 16) -= v3;
  }
}
