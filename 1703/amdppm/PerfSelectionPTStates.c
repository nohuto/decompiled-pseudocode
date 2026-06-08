/*
 * XREFs of PerfSelectionPTStates @ 0x1C00091C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionPTStates(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        char a7,
        _DWORD *a8,
        _QWORD *a9)
{
  __int64 v9; // r11
  unsigned int v12; // r10d
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 i; // rcx

  v9 = *(_QWORD *)(a1 + 24);
  if ( (a7 & 1) != 0 )
  {
    v12 = *(_DWORD *)(v9 + 56);
  }
  else
  {
    v12 = *(_DWORD *)(v9 + 60);
    if ( !v12 )
      v12 = 1;
  }
  v13 = *(_QWORD *)(v9 + 48);
  if ( (a7 & 2) != 0 )
  {
    v14 = 0;
    for ( i = *(_QWORD *)(v9 + 48); v14 < v12; ++v14 )
    {
      i = v13 + 32LL * v14;
      if ( *(unsigned __int8 *)(i + 24) <= a2 )
        break;
    }
    if ( v14 == v12 )
      v14 = v12 - 1;
  }
  else
  {
    v14 = v12;
    do
      i = v13 + 32LL * --v14;
    while ( *(unsigned __int8 *)(i + 24) < a2 && v14 );
  }
  while ( *(unsigned __int8 *)(i + 24) < a3 && v14 )
    i = v13 + 32LL * --v14;
  for ( ; *(unsigned __int8 *)(i + 24) > a4; i = v13 + 32LL * ++v14 )
  {
    if ( v14 == *(_DWORD *)(v9 + 56) - 1 )
      break;
  }
  if ( a9 )
    *a9 = v14;
  if ( a8 )
    *a8 = *(_DWORD *)(i + 16);
  return *(unsigned __int8 *)(i + 24);
}
