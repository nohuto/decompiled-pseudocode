/*
 * XREFs of PpmPerfGetCurrentState @ 0x140031BD8
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x1402331F0 (PoGetPerfStateAndParkingInfo.c)
 *     PpmTracePerfIdleRundown @ 0x140233760 (PpmTracePerfIdleRundown.c)
 *     PopProcessorInformation @ 0x14044D5F4 (PopProcessorInformation.c)
 *     PpmWmiGetAllData @ 0x1406CF948 (PpmWmiGetAllData.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140167AD8 (PpmPerfGetCurrentFrequency.c)
 */

void __fastcall PpmPerfGetCurrentState(
        __int64 a1,
        unsigned __int64 a2,
        _DWORD *a3,
        unsigned __int64 a4,
        _DWORD *a5,
        int *a6)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  _DWORD *v8; // r10
  int v9; // eax

  v6 = *(_DWORD **)(a1 + 24304);
  v7 = (_DWORD *)a4;
  v8 = *(_DWORD **)(a1 + 24312);
  if ( v6 && v8 )
  {
    a4 = (unsigned int)v6[94];
    if ( v8[24] < (unsigned int)a4 )
      a4 = (unsigned int)v8[24];
    if ( a2 )
      *(_DWORD *)a2 = v8[25];
    if ( a3 )
    {
      a2 = v6[94] * v6[79] / 0x64u;
      *a3 = a2;
    }
    if ( a5 )
      *a5 = ((unsigned int)a4 < v6[81]) + 1;
    if ( a6 )
    {
      v9 = v8[8];
      *a6 = v9;
      if ( v8[7] < 0x64u )
        *a6 = v9 | 4;
    }
  }
  else
  {
    if ( a2 )
      *(_DWORD *)a2 = *(_DWORD *)(a1 + 68);
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 68);
    if ( a5 )
      *a5 = 0;
    if ( a6 )
      *a6 = 0;
  }
  if ( v7 )
  {
    LOBYTE(a2) = 1;
    *v7 = PpmPerfGetCurrentFrequency(a1, a2, a3, a4);
  }
}
