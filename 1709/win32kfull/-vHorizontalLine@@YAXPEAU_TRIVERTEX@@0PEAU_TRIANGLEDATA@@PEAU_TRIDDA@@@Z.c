/*
 * XREFs of ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C0130E78
 * Callers:
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C0130A60 (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
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
  int v6; // eax
  LONG x; // r11d
  __int64 v8; // r11
  COLOR16 *v9; // r10
  __int64 v10; // rcx
  _QWORD *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  COLOR16 *p_Red; // rdx
  _QWORD *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax

  v4 = *((_DWORD *)a4 + 1);
  if ( v4 >= *((_DWORD *)a3 + 1) && v4 < *((_DWORD *)a3 + 3) )
  {
    v6 = v4 - *((_DWORD *)a3 + 28);
    x = a2->x;
    if ( a1->x > a2->x )
    {
      v13 = 5LL * v6;
      p_Red = &a2->Red;
      *((_DWORD *)a3 + 10 * v6 + 42) = x;
      v15 = (_QWORD *)((char *)a3 + 40 * v6 + 176);
      v16 = 4LL;
      do
      {
        v17 = *p_Red++;
        *v15++ = v17 << 48;
        --v16;
      }
      while ( v16 );
      *((_DWORD *)a3 + 2 * v13 + 43) = a1->x;
    }
    else
    {
      v8 = 5LL * v6;
      v9 = &a1->Red;
      *((_DWORD *)a3 + 10 * v6 + 42) = a1->x;
      v10 = 4LL;
      v11 = (_QWORD *)((char *)a3 + 40 * v6 + 176);
      do
      {
        v12 = *v9++;
        *v11++ = v12 << 48;
        --v10;
      }
      while ( v10 );
      *((_DWORD *)a3 + 2 * v8 + 43) = a2->x;
    }
  }
}
