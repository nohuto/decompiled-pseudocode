/*
 * XREFs of ?vLine16Octant25@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02ACC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine16Octant25(struct _DDALINE *a1, unsigned __int8 *a2, int a3, __int16 a4)
{
  int v4; // r11d
  int v5; // r10d
  int v6; // ebx
  int v7; // edi
  unsigned __int8 *v8; // rcx
  int i; // r11d

  v4 = *((_DWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 6);
  v6 = *((_DWORD *)a1 + 4);
  v7 = *((_DWORD *)a1 + 5);
  v8 = &a2[2 * *((int *)a1 + 1)];
  *(_WORD *)v8 = a4;
  for ( i = v4 - 1; i; --i )
  {
    v8 += a3;
    v5 += v7;
    if ( v5 >= 0 )
    {
      v5 -= v6;
      v8 -= 2;
    }
    *(_WORD *)v8 = a4;
  }
}
