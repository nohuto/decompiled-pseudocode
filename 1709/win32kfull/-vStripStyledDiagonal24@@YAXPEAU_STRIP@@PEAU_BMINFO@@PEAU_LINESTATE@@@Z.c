/*
 * XREFs of ?vStripStyledDiagonal24@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02ABED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledDiagonal24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // rbx
  int v4; // r14d
  int v5; // r15d
  int v6; // r10d
  int v7; // r9d
  char *v8; // rbp
  int v9; // esi
  __int64 v10; // rdx
  int v11; // edi

  v3 = (int *)((char *)a1 + 28);
  v4 = *((_DWORD *)a3 + 1);
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 22);
  v7 = *((_DWORD *)a3 + 12);
  v8 = (char *)a1 + 4 * *(int *)a1 + 28;
  v9 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v9 = 4 * *((_DWORD *)a1 + 2);
  v10 = *((_QWORD *)a1 + 2);
  do
  {
    v11 = *v3;
    while ( 1 )
    {
      if ( !v6 )
      {
        *(_WORD *)v10 = v4 ^ v5 & *(_WORD *)v10;
        *(_BYTE *)(v10 + 2) = BYTE2(v4) ^ *(_BYTE *)(v10 + 2) & BYTE2(v5);
      }
      v10 += 3LL;
      if ( !--v11 )
        break;
      v7 -= *((_DWORD *)a3 + 4);
      v10 += v9;
      if ( v7 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v7 += **((_DWORD **)a3 + 5);
        v6 = v6 == 0;
      }
    }
    v7 -= *((_DWORD *)a3 + 2);
    if ( v7 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v7 += **((_DWORD **)a3 + 5);
      v6 = v6 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
      v10 += v9 - 3;
    ++v3;
  }
  while ( v3 < (int *)v8 );
  *((_QWORD *)a1 + 2) = v10;
  *((_DWORD *)a3 + 22) = v6;
  *((_DWORD *)a3 + 12) = v7;
}
