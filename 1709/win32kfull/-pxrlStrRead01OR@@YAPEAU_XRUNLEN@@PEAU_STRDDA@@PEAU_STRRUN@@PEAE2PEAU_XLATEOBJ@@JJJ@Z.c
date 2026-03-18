/*
 * XREFs of ?pxrlStrRead01OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C029A6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r11d
  char v9; // r10
  unsigned __int8 *v10; // r15
  ULONG v11; // ebp
  int v12; // r14d
  ULONG *pulXlate; // rax
  int v14; // ecx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rsi
  unsigned int *v18; // rdi
  int v19; // r12d
  __int64 v20; // rcx
  _DWORD *v21; // r9
  _DWORD *v22; // r9

  v7 = a6;
  v9 = a6 & 0x1F;
  v10 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v11 = *pulXlate;
    v12 = pulXlate[1];
  }
  else
  {
    v11 = 0;
    v12 = 1;
  }
  v14 = *(_DWORD *)a1;
  v15 = 0;
  *((_DWORD *)a2 + 2) = v14;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v14;
  if ( a6 < a7 )
  {
    v16 = 0LL;
    v17 = a6 & 0x1F;
    v18 = (unsigned int *)((char *)a1 + 32);
LABEL_6:
    v19 = *(_DWORD *)v10;
    while ( 1 )
    {
      v20 = *v18++;
      if ( (dword_1C02E70D0[v17] & v19) != 0 )
      {
        if ( (_DWORD)v20 )
        {
          v15 += v20;
          v22 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v20;
          do
          {
            *v22++ |= v12;
            LODWORD(v20) = v20 - 1;
          }
          while ( (_DWORD)v20 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) |= v12;
        }
      }
      else if ( (_DWORD)v20 )
      {
        v15 += v20;
        v21 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
        v16 += v20;
        do
        {
          *v21++ |= v11;
          LODWORD(v20) = v20 - 1;
        }
        while ( (_DWORD)v20 );
      }
      else
      {
        *((_DWORD *)a2 + v16 + 4) |= v11;
      }
      ++v7;
      ++v9;
      ++v17;
      if ( v7 >= a7 )
        break;
      if ( (v9 & 0x20) != 0 )
      {
        v10 += 4;
        v9 = 0;
        v17 = 0LL;
        goto LABEL_6;
      }
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v15 + 16);
}
