/*
 * XREFs of ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C00E597C
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00E5590 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02A7154 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C00E5C80 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall WIDENER::vAddLeft(WIDENER *this, struct EVECTORFX *a2)
{
  WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 992), (struct _POINTFIX *)((char *)this + 692), a2, 1);
}
