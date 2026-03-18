/*
 * XREFs of ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C003BF88
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0032348 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0034518 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00346C8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C003A9F0 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00ACEF0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0282E5C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PFEOBJ::pGetLinkedFontList(PFEOBJ *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( v1 )
    return (struct _LIST_ENTRY *)(v1 + 16);
  else
    return &NullListHead;
}
