/*
 * XREFs of ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01495B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01427A0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpriteVisualMarshaler *this)
{
  char v1; // di
  char v3; // al

  v1 = 0;
  if ( *((_QWORD *)this + 30) )
    *((_DWORD *)this + 4) |= 0x8000000u;
  if ( *((_QWORD *)this + 31) )
    *((_DWORD *)this + 4) |= 0x10000000u;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0x18000000) != 0 || v3 )
    return 1;
  return v1;
}
