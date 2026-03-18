/*
 * XREFs of ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C011FE68
 * Callers:
 *     ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C011FCF0 (-vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 *     ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C02AAFEC (-vecInDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C02AB030 (-vecOutDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 * Callees:
 *     ?vDetermineDrawVertex@WIDEPENOBJ@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@@@Z @ 0x1C012071C (-vDetermineDrawVertex@WIDEPENOBJ@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@@@Z.c)
 */

void __fastcall WIDENER::vVecDrawCompute(WIDENER *this, struct LINEDATA *a2)
{
  int *v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  WIDEPENOBJ::vDetermineDrawVertex((WIDENER *)((char *)this + 824), (struct LINEDATA *)((char *)a2 + 48), a2);
  v3 = (int *)*((_QWORD *)a2 + 2);
  v4 = *v3;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    *((_DWORD *)a2 + 18) = -v4;
    v5 = -v3[1];
  }
  else
  {
    *((_DWORD *)a2 + 18) = v4;
    v5 = v3[1];
  }
  *((_DWORD *)a2 + 19) = v5;
  *(_DWORD *)a2 |= 8u;
  v6 = *((_DWORD *)a2 + 18);
  if ( v6 >= 0 )
    v7 = v6 + 4;
  else
    v7 = v6 + 3;
  *((_DWORD *)a2 + 18) = v7 & 0xFFFFFFF8;
  v8 = *((_DWORD *)a2 + 19);
  if ( v8 < 0 )
    v9 = v8 + 3;
  else
    v9 = v8 + 4;
  *((_DWORD *)a2 + 19) = v9 & 0xFFFFFFF8;
}
