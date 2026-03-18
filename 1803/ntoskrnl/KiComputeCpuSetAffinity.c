/*
 * XREFs of KiComputeCpuSetAffinity @ 0x140132B74
 * Callers:
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeCpuSetAffinity(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r10
  _QWORD *v3; // r8
  _QWORD *v4; // r11
  __int64 v5; // rbx
  int v6; // edi
  unsigned __int64 v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  int v13; // r10d
  unsigned __int64 v14; // r8

  v1 = *(_QWORD *)(a1 + 544);
  v2 = *(unsigned __int16 *)(a1 + 584);
  v3 = (_QWORD *)(v1 + 1952);
  v4 = (_QWORD *)(v1 + 1960);
  if ( (*(_DWORD *)(v1 + 1740) & 0x80u) != 0 )
  {
    v3 = (_QWORD *)*v3;
    v4 = (_QWORD *)*v4;
  }
  if ( (*(_DWORD *)(v1 + 768) & 0x8000000) != 0 && (v7 = v3[v2]) != 0 )
  {
    v5 = v3[v2];
    v6 = 0;
  }
  else
  {
    v5 = KiSystemAllowedCpuSets[v2];
    v6 = 1;
    v7 = v5 | v3[v2];
  }
  if ( !v7 )
    return 0LL;
  v8 = (_QWORD *)(a1 + 1992);
  if ( (*(_DWORD *)(a1 + 1744) & 0x20000) != 0 )
    v8 = (_QWORD *)*v8;
  v9 = v8[v2];
  if ( !v9 )
  {
    v9 = v4[v2];
    if ( !v9 )
    {
      if ( !KiRestrictedSystemCpuSetsActive && v6 )
        return 0LL;
      v9 = v5;
    }
  }
  v11 = v7 & v9;
  if ( v11 )
    v7 = v11;
  v12 = v7 & KiNonParkedCpuSets[v2];
  if ( !v12 )
    v12 = v7;
  result = 0LL;
  v13 = (_DWORD)v2 << 6;
  do
  {
    _BitScanForward64(&v14, v12);
    result |= *((_QWORD *)KiCpuSetAffinities + (unsigned int)(v13 + v14));
    v12 &= ~(1LL << v14);
  }
  while ( v12 );
  return result;
}
