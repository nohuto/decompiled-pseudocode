/*
 * XREFs of RtlpWalkWowStack @ 0x140253A70
 * Callers:
 *     RtlpWalkFrameChain @ 0x1400D68B0 (RtlpWalkFrameChain.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall RtlpWalkWowStack(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v9; // r8d
  unsigned int v10; // r10d
  unsigned int v11; // edx
  unsigned int i; // ebx
  unsigned int v13; // eax
  char v15; // al
  unsigned int j; // edx
  BOOL v17; // eax
  unsigned int v18; // ebx
  unsigned __int64 v19; // r9
  char v21; // [rsp+20h] [rbp-18h]
  unsigned int v22; // [rsp+50h] [rbp+18h]

  v21 = 1;
  v9 = *(_DWORD *)(a3 + 8196);
  v22 = v9;
  if ( v9 <= a8 )
    return 0;
  if ( v9 != a8 )
  {
    if ( (a8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a8 + (unsigned __int64)(v9 - a8) < a8 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( a2 )
  {
    v13 = *a4;
    if ( a5 > *a4 )
    {
      if ( v13 >= a6 )
        *(_QWORD *)(a1 + 8LL * (v13 - a6)) = *a2;
      ++*a4;
    }
  }
  else
  {
    v10 = a8;
    v11 = *a4;
    for ( i = 0; i < 2 && v11 < a5 && v10 < v9 && v10 >= a8 && v9 - v10 >= 4; ++i )
    {
      if ( v11 >= a6 )
        *(_QWORD *)(a1 + 8LL * (v11 - a6)) = *(unsigned int *)v10;
      v10 += 4;
      ++v11;
    }
    *a4 = v11;
    if ( v11 >= a5 )
      return v21;
  }
  v15 = 1;
  for ( j = *a4; j < a5 && a7 < v9; ++j )
  {
    if ( v15 )
    {
      v17 = a7 < a8;
    }
    else
    {
      if ( a7 <= a8 )
        break;
      v17 = 0;
    }
    if ( v17 )
      break;
    if ( v9 - a7 < 8 )
      break;
    v18 = *(_DWORD *)a7;
    v19 = *(unsigned int *)(a7 + 4LL);
    if ( a8 <= (unsigned int)v19 && (unsigned int)v19 < v9 )
      break;
    if ( v19 > KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[18] || (unsigned int)v19 < 0x10000 )
      break;
    if ( j >= a6 )
      *(_QWORD *)(a1 + 8LL * (j - a6)) = *(unsigned int *)(a7 + 4LL);
    if ( a7 >= v18 || (v9 = v22, v18 >= v22) )
    {
      ++j;
      break;
    }
    a7 = v18;
    v15 = 0;
  }
  *a4 = j;
  return v21;
}
