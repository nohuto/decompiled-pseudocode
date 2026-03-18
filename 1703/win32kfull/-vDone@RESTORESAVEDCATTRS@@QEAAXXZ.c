/*
 * XREFs of ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0100250
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00FFCA8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C00FFFF0 (NtGdiStartPage.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013E78C (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C0256240 (NtGdiEndPage.c)
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0074A94 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::vDone(XDCOBJ **this)
{
  XDCOBJ *v2; // rcx

  v2 = *this;
  if ( v2 )
    XDCOBJ::vSaveAttributesAlways(v2);
  *this = 0LL;
}
