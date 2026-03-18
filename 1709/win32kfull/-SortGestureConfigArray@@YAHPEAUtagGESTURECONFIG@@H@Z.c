/*
 * XREFs of ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1C011A084
 * Callers:
 *     SetGestureConfigSettings @ 0x1C0119F1C (SetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SortGestureConfigArray(struct tagGESTURECONFIG *a1, int a2)
{
  __int64 v2; // r10
  int i; // r8d
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  _DWORD *k; // rdx
  char *v10; // rsi
  int v11; // r13d
  int v12; // r14d
  __int64 v13; // rdi
  __int64 j; // xmm1_8
  __int64 v15; // rbp
  __int64 v16; // xmm0_8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+0h] [rbp-38h]

  v2 = a2;
  if ( a2 > 0 )
  {
    for ( i = 1; i < a2 / 9; i = 3 * i + 1 )
      ;
    while ( i > 0 )
    {
      v5 = i;
      v6 = i;
      if ( i < v2 )
      {
        v10 = (char *)a1 + 12 * i;
        do
        {
          v11 = *((_DWORD *)v10 + 2);
          v12 = v6 - i;
          v19 = *(_QWORD *)v10;
          v13 = v5 - i;
          for ( j = *(_QWORD *)v10; v13 >= 0; *((_DWORD *)a1 + v17 + 2) = *((_DWORD *)a1 + v15 + 2) )
          {
            v15 = 3 * v13;
            if ( *((_DWORD *)a1 + 3 * v13) <= (unsigned int)v19 )
              break;
            v16 = *(_QWORD *)((char *)a1 + 12 * v13);
            v17 = 3 * (i + v13);
            v12 -= i;
            v13 -= i;
            *(_QWORD *)((char *)a1 + 4 * v17) = v16;
          }
          if ( v6 != v12 + i )
          {
            v18 = 3 * (i + v13);
            *(_QWORD *)((char *)a1 + 4 * v18) = j;
            *((_DWORD *)a1 + v18 + 2) = v11;
          }
          ++v6;
          ++v5;
          v10 += 12;
        }
        while ( v5 < v2 );
      }
      i /= 3;
    }
    if ( *(_DWORD *)a1 || (_DWORD)v2 == 1 )
    {
      v7 = 1LL;
      if ( v2 <= 1 )
        return 1LL;
      for ( k = (_DWORD *)((char *)a1 + 12); *k != *(k - 3); k += 3 )
      {
        if ( ++v7 >= v2 )
          return 1LL;
      }
    }
  }
  return 0LL;
}
