/*
 * XREFs of ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0148770 (-SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CRectangleClipMarshaler *this)
{
  *((_DWORD *)this + 4) &= 0xFFFFE0FF;
  DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(this);
  return 1;
}
