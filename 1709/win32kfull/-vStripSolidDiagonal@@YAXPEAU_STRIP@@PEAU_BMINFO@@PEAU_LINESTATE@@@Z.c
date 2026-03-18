/*
 * XREFs of ?vStripSolidDiagonal@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02ABAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidDiagonal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rdi
  int *v4; // r10
  int v5; // ebp
  int v6; // r14d
  char *v7; // r15
  int v8; // esi
  int v9; // r9d
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rax

  v3 = (char *)a1 + 28;
  v4 = (int *)*((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a3 + 1);
  v6 = *(_DWORD *)a3;
  v7 = (char *)a1 + 4 * *(int *)a1 + 28;
  v8 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  v9 = *((_DWORD *)a1 + 6);
  do
  {
    v10 = *(_DWORD *)v3;
    while ( 1 )
    {
      *v4 = v5 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v9) ^ *v4 & (v6 | ~*(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v9));
      if ( !--v10 )
        break;
      v11 = v9 + 1;
      v12 = v11;
      v9 = *((_DWORD *)a2 + 7) & v11;
      v4 = (int *)((char *)v4 + 4 * (v12 >> *((_BYTE *)a2 + 24)) + v8);
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v13 = v8;
    }
    else
    {
      v14 = v9 + 1;
      v15 = v14;
      v9 = *((_DWORD *)a2 + 7) & v14;
      v13 = 4 * (v15 >> *((_BYTE *)a2 + 24));
    }
    v4 = (int *)((char *)v4 + v13);
    v3 += 4;
  }
  while ( v3 < v7 );
  *((_DWORD *)a1 + 6) = v9;
  *((_QWORD *)a1 + 2) = v4;
}
