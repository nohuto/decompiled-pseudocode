/*
 * XREFs of ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C011FF2C
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C011FB48 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02AAAEC (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDENER::vAddLeft(WIDENER *this, struct EVECTORFX *a2)
{
  WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 992), (struct _POINTFIX *)((char *)this + 692), a2, 1);
}
