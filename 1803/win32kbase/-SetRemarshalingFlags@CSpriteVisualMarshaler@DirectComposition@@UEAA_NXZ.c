/*
 * XREFs of ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0153A50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149B90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpriteVisualMarshaler *this)
{
  int v1; // eax
  char v2; // bl
  char v4; // al

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( *((_QWORD *)this + 35) )
  {
    v1 |= 0x20000000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 36) )
    *((_DWORD *)this + 4) = v1 | 0x40000000;
  v4 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0x60000000) != 0 || v4 )
    return 1;
  return v2;
}
