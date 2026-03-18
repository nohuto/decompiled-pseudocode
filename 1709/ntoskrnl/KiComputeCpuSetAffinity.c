/*
 * XREFs of KiComputeCpuSetAffinity @ 0x1400AB03C
 * Callers:
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeCpuSetAffinity(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _QWORD *v5; // r11
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  int v15; // r10d
  unsigned __int64 v16; // r8

  v2 = *(_QWORD *)(a1 + 544);
  v3 = (_QWORD *)(v2 + 1952);
  v4 = *(unsigned __int16 *)(a1 + 584);
  v5 = (_QWORD *)(v2 + 1960);
  if ( (*(_DWORD *)(v2 + 1740) & 0x80u) != 0 )
  {
    v3 = (_QWORD *)*v3;
    v5 = (_QWORD *)*v5;
  }
  if ( (*(_DWORD *)(v2 + 768) & 0x8000000) != 0 && (v9 = v3[v4]) != 0 )
  {
    v8 = v3[v4];
    v7 = 0;
  }
  else
  {
    v6 = v3[v4];
    v7 = 1;
    v8 = KiSystemAllowedCpuSets[v4];
    v9 = v8 | v6;
  }
  if ( !v9 )
    return 0LL;
  v10 = a1 + 1992;
  if ( (*(_DWORD *)(a1 + 1744) & 0x20000) != 0 )
    v10 = *(_QWORD *)(a1 + 1992);
  v11 = *(_QWORD *)(v10 + 8 * v4);
  if ( !v11 )
  {
    v11 = v5[v4];
    if ( !v11 )
    {
      if ( !KiRestrictedSystemCpuSetsActive && v7 )
        return 0LL;
      v11 = v8;
    }
  }
  v13 = v9 & v11;
  if ( !v13 )
    v13 = v9;
  v14 = v13 & KiNonParkedCpuSets[v4];
  if ( !v14 )
    v14 = v13;
  result = 0LL;
  v15 = (_DWORD)v4 << 6;
  do
  {
    _BitScanForward64(&v16, v14);
    result |= *((_QWORD *)KiCpuSetAffinities + (unsigned int)(v15 + v16));
    v14 &= ~(1LL << v16);
  }
  while ( v14 );
  return result;
}
