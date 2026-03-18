/*
 * XREFs of ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0158EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0152AC0 (-SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CRectangleClipMarshaler *this)
{
  *((_DWORD *)this + 4) &= *((_BYTE *)this + 129) != 0 ? -22529 : -63489;
  DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(this);
  return 1;
}
