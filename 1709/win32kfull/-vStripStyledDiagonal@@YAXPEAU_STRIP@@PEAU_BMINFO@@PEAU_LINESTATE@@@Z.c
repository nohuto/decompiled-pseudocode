/*
 * XREFs of ?vStripStyledDiagonal@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02AC020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledDiagonal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  int v4; // r10d
  int *v5; // r11
  int v6; // r13d
  int v7; // edi
  int v8; // r15d
  int v9; // r9d
  int v10; // esi
  int v11; // r10d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r10d
  __int64 v15; // rax
  int v16; // [rsp+38h] [rbp+8h]
  char *v17; // [rsp+48h] [rbp+18h]

  v3 = (char *)a1 + 28;
  v4 = *((_DWORD *)a1 + 6);
  v5 = (int *)*((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 22);
  v17 = (char *)a1 + 4 * *(int *)a1 + 28;
  v8 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  v16 = *(_DWORD *)a3;
  v9 = *((_DWORD *)a3 + 12);
  do
  {
    v10 = *(_DWORD *)v3;
    while ( 1 )
    {
      if ( !v7 )
        *v5 = v6 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v4) ^ *v5 & (v16 | ~*(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v4));
      if ( !--v10 )
        break;
      v9 -= *((_DWORD *)a3 + 4);
      if ( v9 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v9 += **((_DWORD **)a3 + 5);
        v7 = v7 == 0;
      }
      v11 = v4 + 1;
      v12 = v11;
      v4 = *((_DWORD *)a2 + 7) & v11;
      v5 = (int *)((char *)v5 + 4 * (v12 >> *((_BYTE *)a2 + 24)) + v8);
    }
    v9 -= *((_DWORD *)a3 + 2);
    if ( v9 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v9 += **((_DWORD **)a3 + 5);
      v7 = v7 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v13 = v8;
    }
    else
    {
      v14 = v4 + 1;
      v15 = v14;
      v4 = *((_DWORD *)a2 + 7) & v14;
      v13 = 4 * (v15 >> *((_BYTE *)a2 + 24));
    }
    v5 = (int *)((char *)v5 + v13);
    v3 += 4;
  }
  while ( v3 < v17 );
  *((_DWORD *)a1 + 6) = v4;
  *((_QWORD *)a1 + 2) = v5;
  *((_DWORD *)a3 + 22) = v7;
  *((_DWORD *)a3 + 12) = v9;
}
