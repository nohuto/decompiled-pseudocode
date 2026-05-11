/*
 * XREFs of TopologyCountComponents @ 0x1C001A0B4
 * Callers:
 *     TopologyBuildFilterTopology @ 0x1C001BA04 (TopologyBuildFilterTopology.c)
 * Callees:
 *     <none>
 */

void __fastcall TopologyCountComponents(_QWORD *a1, _DWORD *a2, _DWORD *a3, int *a4, int *a5)
{
  _QWORD *v7; // r10
  unsigned int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int i; // ecx
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // ecx

  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  v7 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)v7 + 5);
      if ( v8 <= 1 )
      {
        v13 = *a4;
        ++*a3;
        v14 = v13 + 1;
        *a4 = v14;
        if ( v8 == 1 )
          *a4 = *((_DWORD *)v7 + 8) + v14;
        if ( *((_DWORD *)v7 + 17) == 257 )
        {
          v15 = 1 << v8;
          v16 = *a5;
          if ( (v15 & *a5) == 0 )
          {
            ++*a2;
            *a5 = v16 | v15;
          }
        }
        goto LABEL_22;
      }
      if ( v8 == 2 )
      {
        for ( i = *((_DWORD *)v7 + 17); i; i &= i - 1 )
        {
          ++*a4;
          ++*a3;
        }
        goto LABEL_22;
      }
      if ( v8 <= 4 )
        goto LABEL_13;
      if ( v8 != 5 )
        break;
      v10 = *((_DWORD *)v7 + 8);
      *a3 += v10 + 1;
      v11 = 2 * v10;
LABEL_12:
      *a4 += v11;
LABEL_22:
      v7 = (_QWORD *)*v7;
      if ( v7 == a1 )
        return;
    }
    if ( v8 != 7 )
    {
      if ( v8 == 8 )
      {
        v9 = *((_DWORD *)v7 + 16);
        for ( *a4 += *((_DWORD *)v7 + 8) - 1; v9; v9 &= v9 - 1 )
        {
          ++*a4;
          ++*a3;
        }
      }
      goto LABEL_22;
    }
LABEL_13:
    ++*a3;
    v11 = *((_DWORD *)v7 + 8);
    goto LABEL_12;
  }
}
