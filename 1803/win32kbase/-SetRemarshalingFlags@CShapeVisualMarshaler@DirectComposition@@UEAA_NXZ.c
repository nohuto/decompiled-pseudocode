/*
 * XREFs of ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01540D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149B90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CShapeVisualMarshaler *this)
{
  char result; // al

  result = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 35) )
  {
    *((_DWORD *)this + 4) |= 0x20000000u;
    result = 1;
  }
  if ( *((_DWORD *)this + 74) )
  {
    *((_DWORD *)this + 4) |= 0x40000000u;
    result = 1;
    *((_DWORD *)this + 75) = 0;
  }
  return result;
}
