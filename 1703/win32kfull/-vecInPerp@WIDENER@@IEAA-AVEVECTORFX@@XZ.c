/*
 * XREFs of ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C011FF94
 * Callers:
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C011FABC (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C011FB48 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02AAAEC (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C011FCF0 (-vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

_QWORD *__fastcall WIDENER::vecInPerp(WIDENER *a1, _QWORD *a2)
{
  struct LINEDATA *v4; // rdx
  _QWORD *result; // rax

  v4 = (struct LINEDATA *)*((_QWORD *)a1 + 88);
  if ( (*(_DWORD *)v4 & 4) == 0 )
    WIDENER::vVecPerpCompute(a1, v4);
  result = a2;
  *a2 = *(_QWORD *)(*((_QWORD *)a1 + 88) + 64LL);
  return result;
}
