/*
 * XREFs of KiReduceByEffectiveIdleSmtSet @ 0x140022A40
 * Callers:
 *     KiChooseTargetProcessor @ 0x1400E11B0 (KiChooseTargetProcessor.c)
 *     KiSelectIdleProcessor @ 0x14014EB38 (KiSelectIdleProcessor.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 */

char __fastcall KiReduceByEffectiveIdleSmtSet(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // ecx

  v3 = *(_QWORD *)(a1 + 25176) & ~*(_QWORD *)(a1 + 200);
  v4 = v3 & *a2;
  if ( !v4
    || (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v4) != v3
    || (*(_BYTE *)(a1 + 11884) & 1) != 0
    || *(_DWORD *)(a1 + 22808) )
  {
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 32) )
  {
    _disable();
    KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
    _enable();
  }
  v7 = *(_DWORD *)(v6 + 80);
  v8 = *(_DWORD *)(v6 + 84);
  if ( v7 < v8 && v8 - v7 >= KiShortExecutionCycles )
    return 0;
  *a2 &= v3;
  return 1;
}
