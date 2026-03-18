/*
 * XREFs of ?vSolidFillRow1@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x1C0133E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v8; // r14
  unsigned __int8 *v9; // r9
  char v10; // bp
  int v11; // r8d
  int v12; // r12d
  int v13; // r15d
  __int64 v14; // r12
  __int64 v15; // r10
  __int64 v16; // rdi
  int v17; // edx
  __int64 v18; // r15
  int v19; // ebx
  unsigned int v20; // ecx
  unsigned __int8 *v21; // r10
  unsigned __int64 v22; // r8

  if ( a2 )
  {
    v8 = a2;
    v9 = &a4[a6 * a3];
    v10 = 5 - a7;
    while ( 1 )
    {
      v11 = 0;
      v12 = *((_DWORD *)a1 + 1);
      v13 = v12 - *(_DWORD *)a1;
      v14 = (unsigned int)(v12 >> v10);
      v15 = (*(_DWORD *)a1 << a7) & 0x1F;
      v16 = (unsigned int)(*(int *)a1 >> v10);
      v17 = aulMsk[v15];
      v18 = ((unsigned __int8)(*(_DWORD *)a1 << a7) + (unsigned __int8)(v13 << a7)) & 0x1F;
      v19 = ~aulMsk[v18];
      if ( (_DWORD)v16 == (_DWORD)v14 )
      {
        v17 &= v19;
        v11 = 1;
      }
      else if ( !(_DWORD)v15 )
      {
        goto LABEL_5;
      }
      *(_DWORD *)&v9[4 * v16] = a5 & v17 | *(_DWORD *)&v9[4 * v16] & ~v17;
      if ( !v11 )
        break;
LABEL_14:
      v9 += a6;
      a1 = (struct _ROW *)((char *)a1 + 8);
      if ( !--v8 )
        return;
    }
    v16 = (unsigned int)(v16 + 1);
LABEL_5:
    v20 = 4 * (v14 - v16);
    if ( v20 )
    {
      v21 = &v9[4 * v16];
      v22 = (unsigned __int64)v20 >> 2;
      if ( v22 )
      {
        if ( ((unsigned __int8)v21 & 4) == 0 )
          goto LABEL_10;
        *(_DWORD *)v21 = a5;
        if ( --v22 )
        {
          v21 += 4;
LABEL_10:
          memset64(v21, a5 | ((unsigned __int64)a5 << 32), v22 >> 1);
          if ( (v22 & 1) != 0 )
            *(_DWORD *)&v21[4 * v22 - 4] = a5;
        }
      }
    }
    if ( (_DWORD)v18 )
      *(_DWORD *)&v9[4 * v14] = a5 & v19 | *(_DWORD *)&v9[4 * v14] & ~v19;
    goto LABEL_14;
  }
}
