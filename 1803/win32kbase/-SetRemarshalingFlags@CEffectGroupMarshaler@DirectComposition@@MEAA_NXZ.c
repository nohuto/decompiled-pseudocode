/*
 * XREFs of ?SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0151EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CEffectGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CEffectGroupMarshaler *this)
{
  bool result; // al

  if ( *((float *)this + 10) != 1.0 )
    return 1;
  result = 0;
  if ( *((_QWORD *)this + 6) )
    return 1;
  return result;
}
