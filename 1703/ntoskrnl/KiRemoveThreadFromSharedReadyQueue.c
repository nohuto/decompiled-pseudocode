/*
 * XREFs of KiRemoveThreadFromSharedReadyQueue @ 0x14001AEE8
 * Callers:
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiFindReadyThread @ 0x14001ADF4 (KiFindReadyThread.c)
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KiSetThreadSchedulingGroup @ 0x140120BE4 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRemoveThreadFromSharedReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 result; // rax

  v3 = *(_QWORD **)(a2 + 216);
  v4 = *(_QWORD **)(a2 + 224);
  if ( v3[1] != a2 + 216 || *v4 != a2 + 216 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 8) ^= 1 << a3;
  --*(_DWORD *)(a1 + 608);
  result = *(unsigned int *)(a2 + 2016);
  *(_QWORD *)(a1 + 616) -= result;
  return result;
}
