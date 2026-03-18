/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020F6D8
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020F9DC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1C0210C18 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1, __int64 a2)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // rsi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  unsigned int v7; // eax
  int v8; // edx
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d

  v2 = (_DWORD *)((char *)a1 + 32);
  v3 = (_DWORD *)((char *)a1 + 32);
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    DpiForSystem = GetDpiForSystem((__int64)a1, a2);
    DpiDependentMetric = GetDpiDependentMetric(3LL, DpiForSystem);
    ++v2;
  }
  else
  {
    v7 = GetDpiForSystem((__int64)a1, a2);
    DpiDependentMetric = GetDpiDependentMetric(4LL, v7);
    v3 = v2 + 1;
  }
  v8 = DpiDependentMetric;
  v9 = *((_QWORD *)a1 + 12);
  v8 *= 2;
  v10 = *(_DWORD *)(v9 + 24);
  v11 = 8 * (*(_DWORD *)(v9 + 28) - v10);
  *v3 = v10 - v11;
  *v2 = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - v8;
  v3[2] = v11 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  v2[2] = v8 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
}
