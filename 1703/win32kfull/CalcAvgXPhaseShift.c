/*
 * XREFs of CalcAvgXPhaseShift @ 0x1C02CF0A8
 * Callers:
 *     PhaseShift @ 0x1C02CF9D4 (PhaseShift.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcAvgXPhaseShift(__int64 a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // r11d
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // r9
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx

  v6 = a6;
  v7 = a4;
  v8 = a3;
  if ( a5 == a6 )
    return a5;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_DWORD *)(v10 + 4 * v7);
  v12 = *(_DWORD *)(v10 + 4LL * a2);
  if ( v12 >= v11 )
  {
    v13 = *(_DWORD *)(v10 + 4 * v7);
    v14 = a6;
    v11 = v12;
    v6 = a5;
  }
  else
  {
    v13 = *(_DWORD *)(v10 + 4LL * a2);
    v14 = a5;
  }
  if ( v13 == v11 )
  {
    v15 = v6 + v14;
    v16 = 2;
  }
  else
  {
    v15 = v6 * (*(_DWORD *)(v10 + 4 * v8) - v13) + v14 * (v11 - *(_DWORD *)(v10 + 4 * v8));
    v16 = v11 - v13;
  }
  return (unsigned int)(v15 / v16);
}
