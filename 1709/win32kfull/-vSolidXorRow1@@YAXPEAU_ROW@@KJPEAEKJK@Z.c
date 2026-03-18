/*
 * XREFs of ?vSolidXorRow1@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x1C02B08C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v8; // rsi
  unsigned __int8 *v9; // r9
  char v10; // di
  int v11; // r14d
  int v12; // r15d
  int v13; // ebp
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rbp
  int v19; // r10d
  int v20; // ecx
  unsigned __int8 *v21; // rdx

  if ( a2 )
  {
    v8 = a2;
    v9 = &a4[a6 * a3];
    v10 = 5 - a7;
    do
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
        goto LABEL_8;
      }
      *(_DWORD *)&v9[4 * v16] ^= a5 & v17;
      if ( !v11 )
      {
        v16 = (unsigned int)(v16 + 1);
LABEL_8:
        v20 = v14 - v16;
        if ( (_DWORD)v14 != (_DWORD)v16 )
        {
          v21 = &v9[4 * v16];
          do
          {
            *(_DWORD *)v21 ^= a5;
            v21 += 4;
            --v20;
          }
          while ( v20 );
        }
        if ( (_DWORD)v18 )
          *(_DWORD *)&v9[4 * v14] ^= a5 & v19;
      }
      v9 += a6;
      a1 = (struct _ROW *)((char *)a1 + 8);
      --v8;
    }
    while ( v8 );
  }
}
