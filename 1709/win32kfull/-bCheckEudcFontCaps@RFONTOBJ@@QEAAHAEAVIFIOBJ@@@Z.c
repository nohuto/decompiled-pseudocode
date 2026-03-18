/*
 * XREFs of ?bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z @ 0x1C000832C
 * Callers:
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C00344B8 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00346C8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bCheckEudcFontCaps(RFONTOBJ *this, struct IFIOBJ *a2)
{
  int v2; // r8d
  __int64 v4; // r9

  if ( (ulFontLinkControl & 0xF0) != 0 )
  {
    v4 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) )
    {
      if ( (ulFontLinkControl & 0x80u) != 0 )
        return 0LL;
    }
    else if ( (ulFontLinkControl & 0x40) != 0 && (*(_DWORD *)(v4 + 488) & 1) != 0
           || (ulFontLinkControl & 0x20) != 0 && (*(_DWORD *)(v4 + 488) & 4) != 0
           || (ulFontLinkControl & 0x10) != 0 && (*(_DWORD *)(v4 + 488) & 2) != 0 )
    {
      return 0LL;
    }
  }
  v2 = *(_DWORD *)(*(_QWORD *)a2 + 48LL);
  return (v2 & 0x10) != 0 || (v2 & 0x200000) != 0 && !(*(_DWORD *)(*(_QWORD *)this + 388LL) % 0x384u);
}
