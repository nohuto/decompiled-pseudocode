/*
 * XREFs of ?MonitorCoordComp@@YAHPEBX0@Z @ 0x1C01E7A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorCoordComp(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r11d
  int v5; // r10d
  int v6; // r8d
  int v7; // eax

  v2 = a1[2];
  v3 = a2[2];
  if ( *(_QWORD *)(v2 + 456) )
  {
    v4 = *(_DWORD *)(v2 + 456);
  }
  else
  {
    v4 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 28LL)
       + (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 36LL) - *(_DWORD *)(*(_QWORD *)(v2 + 40) + 28LL)) / 2;
    *(_QWORD *)(v2 + 456) = v4;
  }
  if ( *(_QWORD *)(v2 + 464) )
  {
    v5 = *(_DWORD *)(v2 + 464);
  }
  else
  {
    v5 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 32LL)
       + (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 40LL) - *(_DWORD *)(*(_QWORD *)(v2 + 40) + 32LL)) / 2;
    *(_QWORD *)(v2 + 464) = v5;
  }
  if ( *(_QWORD *)(v3 + 456) )
  {
    v6 = *(_DWORD *)(v3 + 456);
  }
  else
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 28LL)
       + (*(_DWORD *)(*(_QWORD *)(v3 + 40) + 36LL) - *(_DWORD *)(*(_QWORD *)(v3 + 40) + 28LL)) / 2;
    *(_QWORD *)(v3 + 456) = v6;
  }
  if ( *(_QWORD *)(v3 + 464) )
  {
    v7 = *(_DWORD *)(v3 + 464);
  }
  else
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 32LL)
       + (*(_DWORD *)(*(_QWORD *)(v3 + 40) + 40LL) - *(_DWORD *)(*(_QWORD *)(v3 + 40) + 32LL)) / 2;
    *(_QWORD *)(v3 + 464) = v7;
  }
  if ( v4 < v6 )
    return 0xFFFFFFFFLL;
  if ( v4 != v6 )
    return 1LL;
  if ( v5 < v7 )
    return 0xFFFFFFFFLL;
  return v5 != v7;
}
