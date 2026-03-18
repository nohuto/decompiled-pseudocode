/*
 * XREFs of KiComputeCpuSetAffinity @ 0x140110714
 * Callers:
 *     KiComputeThreadAffinity @ 0x140110554 (KiComputeThreadAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeCpuSetAffinity(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r10
  int v4; // ecx
  _QWORD *v5; // r8
  _QWORD *v6; // r11
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // r9
  int v15; // r10d
  unsigned __int64 v16; // r8

  v1 = *(_QWORD *)(a1 + 544);
  v3 = *(unsigned __int16 *)(a1 + 584);
  v4 = *(_DWORD *)(v1 + 1740);
  v5 = (_QWORD *)(v1 + 1928);
  v6 = (_QWORD *)(v1 + 1936);
  if ( (v4 & 0x200) != 0 )
  {
    v5 = (_QWORD *)*v5;
    v6 = (_QWORD *)*v6;
  }
  v7 = KiSystemAllowedCpuSets[v3];
  if ( (v4 & 0x10000000) != 0 && (v10 = v5[v3]) != 0 )
  {
    v7 = v5[v3];
    v9 = 0;
  }
  else
  {
    v8 = v5[v3];
    v9 = 1;
    v10 = v7 | v8;
  }
  if ( !v10 )
    return 0LL;
  v11 = a1 + 1984;
  if ( (*(_DWORD *)(a1 + 1736) & 0x20000) != 0 )
    v11 = *(_QWORD *)(a1 + 1984);
  v12 = *(_QWORD *)(v11 + 8 * v3);
  if ( !v12 )
  {
    v12 = v6[v3];
    if ( !v12 )
    {
      if ( !KiRestrictedSystemCpuSetsActive && v9 )
        return 0LL;
      v12 = v7;
    }
  }
  if ( (v12 & v10) == 0 )
    v12 = v10;
  v14 = v12 & KiNonParkedCpuSets[v3];
  if ( !v14 )
    v14 = v12;
  result = 0LL;
  if ( v14 )
  {
    v15 = (_DWORD)v3 << 6;
    do
    {
      _BitScanForward64(&v16, v14);
      result |= *((_QWORD *)KiCpuSetAffinities + (unsigned int)(v15 + v16));
      v14 &= ~(1LL << v16);
    }
    while ( v14 );
  }
  return result;
}
