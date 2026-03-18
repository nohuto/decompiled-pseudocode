/*
 * XREFs of KiRemoveThreadFromSharedReadyQueue @ 0x1400A7600
 * Callers:
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A7488 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiFindReadyThread @ 0x1400A74E0 (KiFindReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400C2454 (KiSetThreadSchedulingGroup.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRemoveThreadFromSharedReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    *(_BYTE *)(*(_QWORD *)(a2 + 1512) + 26LL) = 0;
  v3 = *(_QWORD **)(a2 + 216);
  v4 = *(_QWORD **)(a2 + 224);
  if ( v3[1] != a2 + 216 || *v4 != a2 + 216 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 8) ^= 1 << a3;
  --*(_DWORD *)(a1 + 608);
  result = *(unsigned int *)(a2 + 2024);
  *(_QWORD *)(a1 + 616) -= result;
  return result;
}
