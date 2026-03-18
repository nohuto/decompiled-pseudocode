/*
 * XREFs of ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C010C9A8
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0144730 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C002BD54 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(XDCOBJ **this)
{
  XDCOBJ *v1; // rcx

  v1 = *this;
  if ( v1 )
    XDCOBJ::vSaveAttributesAlways(v1);
}
