/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0151E00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149E90 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowSceneMarshaler *this)
{
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= 0x280u;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 21) = 0;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x100u;
  return 1;
}
