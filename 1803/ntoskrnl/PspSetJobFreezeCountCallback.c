/*
 * XREFs of PspSetJobFreezeCountCallback @ 0x14008A860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetJobFreezeCountCallback(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  __int64 result; // rax
  int v10; // eax
  int v11; // eax

  if ( (**(_DWORD **)a2 & 1) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 856);
    if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
      v11 = v10 + 1;
    else
      v11 = v10 - 1;
    *(_DWORD *)(a1 + 856) = v11;
  }
  v3 = *(_QWORD *)a2;
  if ( (*(_DWORD *)v3 & 4) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 864);
    if ( *(_BYTE *)(v3 + 5) )
      v5 = v4 + 1;
    else
      v5 = v4 - 1;
    *(_DWORD *)(a1 + 864) = v5;
  }
  v6 = *(_DWORD *)(a1 + 856);
  v7 = *(_DWORD *)(a1 + 864) != 0 ? 2 : 0;
  v8 = v7 | 1;
  if ( !v6 )
    v8 = v7;
  result = 0LL;
  a2[2] = v8;
  return result;
}
