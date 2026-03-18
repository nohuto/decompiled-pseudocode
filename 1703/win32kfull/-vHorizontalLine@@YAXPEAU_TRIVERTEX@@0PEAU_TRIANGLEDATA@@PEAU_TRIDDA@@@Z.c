/*
 * XREFs of ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C012D89C
 * Callers:
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C012D47C (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vHorizontalLine(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIANGLEDATA *a3,
        struct _TRIDDA *a4)
{
  int v4; // eax
  int v6; // r9d
  __int64 v7; // r11
  _QWORD *v8; // r9
  COLOR16 *v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rax
  LONG x; // eax
  COLOR16 *p_Red; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v4 = *((_DWORD *)a4 + 1);
  v6 = v4 - *((_DWORD *)a3 + 28);
  if ( v4 >= *((_DWORD *)a3 + 1) && v4 < *((_DWORD *)a3 + 3) )
  {
    v7 = 5LL * v6;
    v8 = (_QWORD *)((char *)a3 + 40 * v6 + 176);
    if ( a1->x > a2->x )
    {
      *((_DWORD *)a3 + 2 * v7 + 42) = a2->x;
      p_Red = &a2->Red;
      v14 = 4LL;
      do
      {
        v15 = *p_Red++;
        *v8++ = v15 << 48;
        --v14;
      }
      while ( v14 );
      x = a1->x;
    }
    else
    {
      *((_DWORD *)a3 + 2 * v7 + 42) = a1->x;
      v9 = &a1->Red;
      v10 = 4LL;
      do
      {
        v11 = *v9++;
        *v8++ = v11 << 48;
        --v10;
      }
      while ( v10 );
      x = a2->x;
    }
    *((_DWORD *)a3 + 2 * v7 + 43) = x;
  }
}
