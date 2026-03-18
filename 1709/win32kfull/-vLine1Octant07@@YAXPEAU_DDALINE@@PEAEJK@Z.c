/*
 * XREFs of ?vLine1Octant07@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02ACD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine1Octant07(struct _DDALINE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // esi
  int v7; // edi
  int v8; // r11d
  unsigned __int8 *v9; // rdx

  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a1 + 5);
  v7 = *((_DWORD *)a1 + 3);
  v8 = 128 >> (*((_BYTE *)a1 + 4) & 7);
  v9 = &a2[(unsigned __int64)*((unsigned int *)a1 + 1) >> 3];
  if ( a4 )
  {
    while ( 1 )
    {
      *v9 |= v8;
      if ( !--v7 )
        break;
      LOBYTE(v8) = (unsigned __int8)v8 >> 1;
      if ( !(_BYTE)v8 )
      {
        LOBYTE(v8) = 0x80;
        ++v9;
      }
      v4 += v6;
      if ( v4 >= 0 )
      {
        v4 -= v5;
        v9 += a3;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      *v9 &= ~(_BYTE)v8;
      if ( !--v7 )
        break;
      LOBYTE(v8) = (unsigned __int8)v8 >> 1;
      if ( !(_BYTE)v8 )
      {
        LOBYTE(v8) = 0x80;
        ++v9;
      }
      v4 += v6;
      if ( v4 >= 0 )
      {
        v4 -= v5;
        v9 += a3;
      }
    }
  }
}
