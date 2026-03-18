/*
 * XREFs of ?pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0128FA0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C2120 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead32AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7)
{
  char *v7; // rdi
  int v8; // esi
  ULONG *v9; // rbx
  __int64 v10; // r10
  unsigned int *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  char *v15; // r9
  __int64 v16; // r15
  unsigned int *v17; // r13
  __int64 v18; // r12
  __int64 v19; // r14
  ULONG v20; // eax
  char *v21; // rcx

  v7 = (char *)a2 + 8;
  v8 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  v9 = (ULONG *)&a3[4 * a6];
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  if ( pxlo )
  {
    v16 = 0LL;
    if ( a6 != a7 )
    {
      v17 = (unsigned int *)((char *)a1 + 32);
      v18 = (unsigned int)(a7 - a6);
      do
      {
        v19 = *v17++;
        v20 = XLATEOBJ_iXlate(pxlo, *v9);
        if ( (_DWORD)v19 )
        {
          v8 += v19;
          v21 = &v7[4 * v16 + 8];
          v16 += v19;
          do
          {
            *(_DWORD *)v21 &= v20;
            v21 += 4;
            LODWORD(v19) = v19 - 1;
          }
          while ( (_DWORD)v19 );
        }
        else
        {
          *(_DWORD *)&v7[4 * v16 + 8] &= v20;
        }
        ++v9;
        --v18;
      }
      while ( v18 );
    }
  }
  else
  {
    v10 = 0LL;
    if ( a6 != a7 )
    {
      v11 = (unsigned int *)((char *)a1 + 32);
      v12 = (unsigned int)(a7 - a6);
      do
      {
        v13 = *v11++;
        if ( (_DWORD)v13 )
        {
          v8 += v13;
          v15 = &v7[4 * v10 + 8];
          v10 += v13;
          do
          {
            *(_DWORD *)v15 &= *v9;
            v15 += 4;
            LODWORD(v13) = v13 - 1;
          }
          while ( (_DWORD)v13 );
        }
        else
        {
          *(_DWORD *)&v7[4 * v10 + 8] &= *v9;
        }
        ++v9;
        --v12;
      }
      while ( v12 );
    }
  }
  return (struct _XRUNLEN *)&v7[4 * v8 + 8];
}
