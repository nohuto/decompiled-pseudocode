/*
 * XREFs of ?vStripSolidHorizontal@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C0127F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidHorizontal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rdi
  __int64 v6; // r11
  int v7; // esi
  int v8; // ebp
  int *v9; // rdx
  char *v10; // r15
  int v11; // r10d
  __int64 v12; // r12
  int v13; // r8d
  int v14; // r10d
  unsigned int v15; // r10d
  int v16; // r9d
  __int64 v17; // rcx

  v3 = (char *)a1 + 28;
  v6 = *((int *)a1 + 6);
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = (int *)*((_QWORD *)a1 + 2);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v11 = 4 * *((_DWORD *)a1 + 2);
  v12 = v11;
  v13 = *(_DWORD *)(*(_QWORD *)a2 + 4 * v6);
  do
  {
    v14 = *(_DWORD *)v3 + v6;
    LODWORD(v6) = *((_DWORD *)a2 + 7) & v14;
    v15 = v14 >> *((_DWORD *)a2 + 6);
    v16 = ~*(_DWORD *)(*(_QWORD *)a2 + 4LL * (int)v6);
    if ( v15 )
    {
      *v9 = v8 & v13 ^ *v9 & (v7 | ~v13);
      ++v9;
      if ( v15 > 1 )
      {
        v17 = v15 - 1;
        do
        {
          *v9 = v8 ^ v7 & *v9;
          ++v9;
          --v17;
        }
        while ( v17 );
      }
      if ( v16 )
        *v9 = v8 & v16 ^ *v9 & (v7 | ~v16);
    }
    else
    {
      *v9 = v8 & v13 & v16 ^ *v9 & (v7 | ~(v13 & v16));
    }
    v9 = (int *)((char *)v9 + v12);
    v3 += 4;
    v13 = ~v16;
  }
  while ( v3 < v10 );
  *((_DWORD *)a1 + 6) = v6;
  *((_QWORD *)a1 + 2) = v9;
}
