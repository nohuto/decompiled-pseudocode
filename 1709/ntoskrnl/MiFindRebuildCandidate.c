/*
 * XREFs of MiFindRebuildCandidate @ 0x140232BE4
 * Callers:
 *     MiRebuildLargePage @ 0x1402336B8 (MiRebuildLargePage.c)
 * Callees:
 *     MiPfnsWorthTrying @ 0x1400C5DF0 (MiPfnsWorthTrying.c)
 *     MiCollapseRunTopDown @ 0x140216A58 (MiCollapseRunTopDown.c)
 */

__int64 __fastcall MiFindRebuildCandidate(__int16 *a1, int a2, int a3, unsigned __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v7; // r12
  int v8; // r9d
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // r15
  _DWORD *v12; // r15
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-38h]
  __int64 v21; // [rsp+48h] [rbp-30h]
  unsigned __int64 v22; // [rsp+50h] [rbp-28h]
  unsigned __int64 v23; // [rsp+58h] [rbp-20h]
  char v24; // [rsp+60h] [rbp-18h]
  int v27; // [rsp+D0h] [rbp+58h]
  __int64 v28; // [rsp+D8h] [rbp+60h] BYREF

  v27 = a3;
  v7 = a6;
  v20 = 0LL;
  v8 = a2;
  v21 = a5;
  v9 = 58720256;
  v22 = a4;
  LODWORD(v10) = *a6;
  v11 = (unsigned int)*a6;
  v23 = a4;
  v12 = &a6[4 * v11];
  v24 = 0;
  if ( a4 != 16 )
    v9 = 41943040;
  LODWORD(a5) = v9;
  while ( (_DWORD)v10 )
  {
    v10 = (unsigned int)(v10 - 1);
    if ( *((unsigned __int8 *)v12 + 2 * v10 + 16) == v8 && *((unsigned __int8 *)v12 + 2 * v10 + 17) == a3 )
    {
      v18 = *(_QWORD *)&v7[4 * (unsigned int)v10 + 4];
      v19 = *(_QWORD *)&v7[4 * (unsigned int)v10 + 6] + v18;
      while ( (unsigned int)MiCollapseRunTopDown(&v18) )
      {
        v13 = v19;
        v14 = v23;
        LODWORD(a6) = 0;
        v15 = v19 - v23;
        v16 = MiPfnsWorthTrying(a1, 48 * (v19 - v23) - 0x58000000000LL, v23, a5, &a6, &v28);
        if ( v16 )
        {
          if ( v16 > v15 - v18 )
          {
            v21 = v13 - v16 - 1;
            break;
          }
          if ( v16 > v14 )
            v14 = v16;
        }
        else if ( (unsigned int)v28 >= a4 >> 2 )
        {
          return v15;
        }
        v19 = v13 - v14;
      }
      v8 = a2;
      a3 = v27;
    }
  }
  return -1LL;
}
