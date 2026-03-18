/*
 * XREFs of PspSetJobFreezeCountCallback @ 0x1400D4120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetJobFreezeCountCallback(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  __int64 result; // rax

  if ( (**(_DWORD **)a2 & 1) != 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
      ++*(_DWORD *)(a1 + 856);
    else
      --*(_DWORD *)(a1 + 856);
  }
  v3 = *(_QWORD *)a2;
  if ( (*(_DWORD *)v3 & 4) != 0 )
  {
    if ( *(_BYTE *)(v3 + 5) )
      ++*(_DWORD *)(a1 + 864);
    else
      --*(_DWORD *)(a1 + 864);
  }
  v4 = *(_DWORD *)(a1 + 856);
  v5 = *(_DWORD *)(a1 + 864) != 0 ? 2 : 0;
  v6 = v5 | 1;
  if ( !v4 )
    v6 = v5;
  result = 0LL;
  a2[2] = v6;
  return result;
}
