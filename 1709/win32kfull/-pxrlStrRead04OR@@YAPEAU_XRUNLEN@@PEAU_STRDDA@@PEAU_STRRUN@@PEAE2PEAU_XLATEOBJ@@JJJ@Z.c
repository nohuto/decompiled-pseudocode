/*
 * XREFs of ?pxrlStrRead04OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C029A990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r10d
  int v8; // ebp
  char v9; // r9
  unsigned __int8 *v11; // rbx
  int v12; // r8d
  __int64 v13; // rdx
  unsigned int *v14; // r15
  __int64 v15; // rdi
  int v16; // r14d
  __int64 v17; // r8
  unsigned int v18; // esi
  _DWORD *v19; // rcx
  __int64 v20; // r8
  unsigned int *v21; // r13
  __int64 v22; // rdi
  int v23; // r14d
  ULONG v24; // esi
  __int64 v25; // rdx
  _DWORD *v26; // rcx

  v7 = a6;
  v8 = 0;
  v9 = a6 & 7;
  v11 = &a3[4 * ((__int64)a6 >> 3)];
  v12 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v12;
  if ( a5 )
  {
    if ( a6 < a7 )
    {
      v20 = 0LL;
      v21 = (unsigned int *)((char *)a1 + 32);
      v22 = a6 & 7;
LABEL_14:
      v23 = *(_DWORD *)v11;
      while ( 1 )
      {
        v24 = a5->pulXlate[(unsigned __int64)(v23 & (unsigned int)dword_1C02E6C08[v22]) >> LOBYTE(dword_1C02E6C28[v22])];
        v25 = *v21++;
        if ( (_DWORD)v25 )
        {
          v8 += v25;
          v26 = (_DWORD *)((char *)a2 + 4 * v20 + 16);
          v20 += v25;
          do
          {
            *v26++ |= v24;
            LODWORD(v25) = v25 - 1;
          }
          while ( (_DWORD)v25 );
        }
        else
        {
          *((_DWORD *)a2 + v20 + 4) |= v24;
        }
        ++v7;
        ++v9;
        ++v22;
        if ( v7 >= a7 )
          break;
        if ( (v9 & 8) != 0 )
        {
          v11 += 4;
          v9 = 0;
          v22 = 0LL;
          goto LABEL_14;
        }
      }
    }
  }
  else if ( a6 < a7 )
  {
    v13 = 0LL;
    v14 = (unsigned int *)((char *)a1 + 32);
    v15 = a6 & 7;
LABEL_4:
    v16 = *(_DWORD *)v11;
    while ( 1 )
    {
      v17 = *v14++;
      v18 = (v16 & (unsigned int)dword_1C02E6C08[v15]) >> dword_1C02E6C28[v15];
      if ( (_DWORD)v17 )
      {
        v8 += v17;
        v19 = (_DWORD *)((char *)a2 + 4 * v13 + 16);
        v13 += v17;
        do
        {
          *v19++ |= v18;
          LODWORD(v17) = v17 - 1;
        }
        while ( (_DWORD)v17 );
      }
      else
      {
        *((_DWORD *)a2 + v13 + 4) |= v18;
      }
      ++v7;
      ++v9;
      ++v15;
      if ( v7 >= a7 )
        break;
      if ( (v9 & 8) != 0 )
      {
        v11 += 4;
        v9 = 0;
        v15 = 0LL;
        goto LABEL_4;
      }
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v8 + 16);
}
