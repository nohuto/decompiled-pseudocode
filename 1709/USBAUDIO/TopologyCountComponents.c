/*
 * XREFs of TopologyCountComponents @ 0x1C0015C48
 * Callers:
 *     TopologyBuildFilterTopology @ 0x1C0017590 (TopologyBuildFilterTopology.c)
 * Callees:
 *     <none>
 */

void __fastcall TopologyCountComponents(_QWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int *a5)
{
  _QWORD *v6; // r10
  unsigned int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int i; // ecx
  int v12; // eax
  int v13; // ecx

  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  v6 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v6 + 5);
      if ( v7 <= 1 )
      {
        ++*a3;
        ++*a4;
        if ( v7 == 1 )
          *a4 += *((_DWORD *)v6 + 8);
        if ( *((_DWORD *)v6 + 17) == 257 )
        {
          v12 = 1 << v7;
          v13 = *a5;
          if ( (v12 & *a5) == 0 )
          {
            ++*a2;
            *a5 = v13 | v12;
          }
        }
        goto LABEL_22;
      }
      if ( v7 == 2 )
      {
        for ( i = *((_DWORD *)v6 + 17); i; i &= i - 1 )
        {
          ++*a4;
          ++*a3;
        }
        goto LABEL_22;
      }
      if ( v7 <= 4 )
        goto LABEL_13;
      if ( v7 != 5 )
        break;
      v9 = *((_DWORD *)v6 + 8);
      *a3 += v9 + 1;
      v10 = 2 * v9;
LABEL_12:
      *a4 += v10;
LABEL_22:
      v6 = (_QWORD *)*v6;
      if ( v6 == a1 )
        return;
    }
    if ( v7 != 7 )
    {
      if ( v7 == 8 )
      {
        v8 = *((_DWORD *)v6 + 16);
        for ( *a4 += *((_DWORD *)v6 + 8) - 1; v8; v8 &= v8 - 1 )
        {
          ++*a4;
          ++*a3;
        }
      }
      goto LABEL_22;
    }
LABEL_13:
    ++*a3;
    v10 = *((_DWORD *)v6 + 8);
    goto LABEL_12;
  }
}
