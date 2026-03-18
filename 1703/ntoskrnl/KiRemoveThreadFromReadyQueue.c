/*
 * XREFs of KiRemoveThreadFromReadyQueue @ 0x1401608C0
 * Callers:
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiFindReadyThread @ 0x14001ADF4 (KiFindReadyThread.c)
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRemoveThreadFromReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 result; // rax

  v3 = *(_QWORD **)a2;
  v4 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v4 != a2 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 22808) ^= 1 << a3;
  --*(_DWORD *)(a1 + 23480);
  result = *(unsigned int *)(a2 + 1800);
  *(_QWORD *)(a1 + 23552) -= result;
  return result;
}
