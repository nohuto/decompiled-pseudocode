/*
 * XREFs of ?bValid@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0120274
 * Callers:
 *     ?bValid@WIDENER@@QEAAHXZ @ 0x1C011FEE0 (-bValid@WIDENER@@QEAAHXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C0120230 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C012086C (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02AAD20 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WIDEPATHOBJ::bValid(WIDEPATHOBJ *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 1) )
    return *((_DWORD *)this + 32) == 0;
  return result;
}
