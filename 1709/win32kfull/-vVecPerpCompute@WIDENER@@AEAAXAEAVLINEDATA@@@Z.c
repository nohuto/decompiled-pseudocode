/*
 * XREFs of ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C00E5738
 * Callers:
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C00E59A8 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C00E59EC (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C00E58B8 (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

void __fastcall WIDENER::vVecPerpCompute(WIDENER *this, struct LINEDATA *a2)
{
  int *v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rcx
  int v6; // edi
  int v7; // esi
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // r9
  int v11; // edi
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbp
  unsigned int v18; // r9d
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax

  if ( (*(_DWORD *)a2 & 8) == 0 )
    WIDENER::vVecDrawCompute(this, a2);
  v3 = (int *)*((_QWORD *)a2 + 2);
  v4 = *((_QWORD *)a2 + 3);
  v5 = *((_QWORD *)a2 + 4);
  v6 = *v3;
  v7 = v3[1];
  if ( v4 > v5 )
  {
    v8 = v3[2] - v6;
    v9 = v3[3] - v7;
  }
  else
  {
    v8 = v6 - *(v3 - 2);
    v9 = v7 - *(v3 - 1);
  }
  v10 = v5 + v4;
  v11 = v6 - (v8 >> 1);
  v12 = v7 - (v9 >> 1);
  v13 = v4 * (int)abs32(v9);
  v14 = v4 * (int)abs32(v8);
  if ( v10 )
  {
    if ( v10 >= 0xFFFFFFFFLL )
    {
      LODWORD(v15) = 0;
      LODWORD(v17) = 0;
      v14 /= v10;
      v16 = v13 / v10;
      goto LABEL_11;
    }
    if ( v14 < 0 )
    {
      LODWORD(v15) = -v14 % (unsigned __int64)(unsigned int)v10;
      v14 = -(__int64)(-v14 / (unsigned __int64)(unsigned int)v10);
    }
    else
    {
      v15 = v14 % (unsigned __int64)(unsigned int)v10;
      v14 /= (unsigned __int64)(unsigned int)v10;
    }
    if ( v13 >= 0 )
    {
      v16 = v13 / (unsigned __int64)(unsigned int)v10;
      v17 = v13 % (unsigned __int64)(unsigned int)v10;
LABEL_11:
      LODWORD(v13) = v16;
      goto LABEL_12;
    }
    LODWORD(v17) = -v13 % (unsigned __int64)(unsigned int)v10;
    v13 = -(__int64)(-v13 / (unsigned __int64)(unsigned int)v10);
  }
  else
  {
    LODWORD(v15) = 0;
    LODWORD(v17) = 0;
  }
LABEL_12:
  v18 = (unsigned int)v10 >> 1;
  if ( (unsigned int)v15 >= v18 )
    LODWORD(v14) = v14 + 1;
  if ( (unsigned int)v17 >= v18 )
    LODWORD(v13) = v13 + 1;
  v19 = -(int)v14;
  if ( v8 >= 0 )
    v19 = v14;
  v20 = -(int)v13;
  if ( v9 >= 0 )
    v20 = v13;
  v21 = v12 + v20;
  v22 = v19 + v11;
  v23 = *(_DWORD *)a2;
  *((_DWORD *)a2 + 16) = v22;
  *((_DWORD *)a2 + 17) = v21;
  if ( (v23 & 1) != 0 )
  {
    *((_DWORD *)a2 + 16) = -v22;
    *((_DWORD *)a2 + 17) = -v21;
  }
  *(_DWORD *)a2 = v23 | 4;
  v24 = *((_DWORD *)a2 + 16);
  if ( v24 < 0 )
    v25 = v24 + 4;
  else
    v25 = v24 + 3;
  *((_DWORD *)a2 + 16) = v25 & 0xFFFFFFF8;
  v26 = *((_DWORD *)a2 + 17);
  if ( v26 < 0 )
    v27 = v26 + 3;
  else
    v27 = v26 + 4;
  *((_DWORD *)a2 + 17) = v27 & 0xFFFFFFF8;
}
