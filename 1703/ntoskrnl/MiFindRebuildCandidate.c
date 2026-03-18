/*
 * XREFs of MiFindRebuildCandidate @ 0x140223E98
 * Callers:
 *     MiRebuildLargePage @ 0x140224674 (MiRebuildLargePage.c)
 * Callees:
 *     MiCollapseRunTopDown @ 0x1400B6A50 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1400B6AD0 (MiPfnsWorthTrying.c)
 */

__int64 __fastcall MiFindRebuildCandidate(
        __int16 *a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v7; // r12
  int v8; // r9d
  int v9; // eax
  __int64 v10; // r14
  unsigned int *v11; // r15
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+48h] [rbp-20h]
  unsigned __int64 v21; // [rsp+50h] [rbp-18h]
  unsigned __int64 v22; // [rsp+58h] [rbp-10h]
  int v25; // [rsp+C0h] [rbp+58h]
  __int64 v26; // [rsp+C8h] [rbp+60h] BYREF

  v25 = a3;
  v7 = a6;
  v19 = 0LL;
  v8 = a2;
  v20 = a5;
  v9 = 58720256;
  v21 = a4;
  v10 = *a6;
  v22 = a4;
  v11 = &a6[4 * v10 + 4];
  if ( a4 != 16 )
    v9 = 41943040;
  LODWORD(a5) = v9;
  while ( (_DWORD)v10 )
  {
    v10 = (unsigned int)(v10 - 1);
    if ( *((unsigned __int8 *)v11 + 2 * v10) == v8 && *((unsigned __int8 *)v11 + 2 * v10 + 1) == a3 )
    {
      v17 = *(_QWORD *)&v7[4 * (unsigned int)v10 + 4];
      v18 = *(_QWORD *)&v7[4 * (unsigned int)v10 + 6] + v17;
      while ( (unsigned int)MiCollapseRunTopDown(&v17) )
      {
        v12 = v18;
        v13 = v22;
        LODWORD(a6) = 0;
        v14 = v18 - v22;
        v15 = MiPfnsWorthTrying(a1, 48 * (v18 - v22) - 0x58000000000LL, v22, a5, &a6, &v26);
        if ( v15 )
        {
          if ( v15 > v14 - v17 )
          {
            v20 = v12 - v15 - 1;
            break;
          }
          if ( v15 > v13 )
            v13 = v15;
        }
        else if ( (unsigned int)v26 >= a4 >> 2 )
        {
          return v14;
        }
        v18 = v12 - v13;
      }
      v8 = a2;
      a3 = v25;
    }
  }
  return -1LL;
}
