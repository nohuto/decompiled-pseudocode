/*
 * XREFs of ?SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0147900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CTransform3DGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CTransform3DGroupMarshaler *this)
{
  if ( !*((_DWORD *)this + 16) )
    return 0;
  *((_DWORD *)this + 17) = 0;
  return 1;
}
