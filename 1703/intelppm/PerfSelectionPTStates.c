/*
 * XREFs of PerfSelectionPTStates @ 0x1C0001250
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
  __int64 v10; // rbx
  unsigned int v13; // r10d
  __int64 v14; // r8
  unsigned int v15; // edx
  __int64 i; // rax

  v10 = *(_QWORD *)(a1 + 24);
  if ( (a7 & 1) != 0 )
  {
    v13 = *(_DWORD *)(v10 + 56);
  }
  else
  {
    v13 = *(_DWORD *)(v10 + 60);
    if ( !v13 )
      v13 = 1;
  }
  v14 = *(_QWORD *)(v10 + 48);
  if ( (a7 & 2) != 0 )
  {
    v15 = 0;
    for ( i = *(_QWORD *)(v10 + 48); v15 < v13; ++v15 )
    {
      i = v14 + 32LL * v15;
      if ( *(unsigned __int8 *)(i + 24) <= a2 )
        break;
    }
    if ( v15 == v13 )
      v15 = v13 - 1;
  }
  else
  {
    v15 = v13;
    do
      i = v14 + 32LL * --v15;
    while ( *(unsigned __int8 *)(i + 24) < a2 && v15 );
  }
  for ( ; *(unsigned __int8 *)(i + 24) < a3; i = v14 + 32LL * --v15 )
  {
    if ( !v15 )
      break;
  }
  for ( ; *(unsigned __int8 *)(i + 24) > a4; i = v14 + 32LL * ++v15 )
  {
    if ( v15 == *(_DWORD *)(v10 + 56) - 1 )
      break;
  }
  if ( a9 )
    *a9 = v15;
  if ( a8 )
    *a8 = *(_DWORD *)(i + 16);
  return *(unsigned __int8 *)(i + 24);
}
