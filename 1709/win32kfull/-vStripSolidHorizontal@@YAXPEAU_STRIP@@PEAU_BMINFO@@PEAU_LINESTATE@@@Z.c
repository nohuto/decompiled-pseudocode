/*
 * XREFs of ?vStripSolidHorizontal@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C012E770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidHorizontal(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rdi
  __int64 v4; // r11
  int v6; // esi
  int v8; // ebp
  int *v9; // r8
  char *v10; // r15
  int v11; // r9d
  int v12; // r10d
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r12
  int v16; // r9d
  unsigned int v17; // r9d
  int v18; // edx
  __int64 v19; // rcx

  v3 = (char *)a1 + 28;
  v4 = *((int *)a1 + 6);
  v6 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = (int *)*((_QWORD *)a1 + 2);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = 4 * *((_DWORD *)a1 + 2);
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 4 * v4);
  v13 = *((_DWORD *)a1 + 1);
  v14 = -4 * *((_DWORD *)a1 + 2);
  if ( (v13 & 8) == 0 )
    v14 = v11;
  v15 = v14;
  do
  {
    v16 = *(_DWORD *)v3 + v4;
    LODWORD(v4) = *((_DWORD *)a2 + 7) & v16;
    v17 = v16 >> *((_DWORD *)a2 + 6);
    v18 = ~*(_DWORD *)(*(_QWORD *)a2 + 4LL * (int)v4);
    if ( v17 )
    {
      *v9 = v8 & v12 ^ *v9 & (v6 | ~v12);
      ++v9;
      if ( v17 > 1 )
      {
        v19 = v17 - 1;
        do
        {
          *v9 = v8 ^ v6 & *v9;
          ++v9;
          --v19;
        }
        while ( v19 );
      }
      if ( v18 )
        *v9 = v8 & v18 ^ *v9 & (v6 | ~v18);
    }
    else
    {
      *v9 = v8 & v12 & v18 ^ *v9 & (v6 | ~(v12 & v18));
    }
    v9 = (int *)((char *)v9 + v15);
    v3 += 4;
    v12 = ~v18;
  }
  while ( v3 < v10 );
  *((_DWORD *)a1 + 6) = v4;
  *((_QWORD *)a1 + 2) = v9;
}
