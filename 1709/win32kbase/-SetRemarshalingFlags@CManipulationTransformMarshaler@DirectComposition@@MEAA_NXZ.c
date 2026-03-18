/*
 * XREFs of ?SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014BBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CManipulationTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CManipulationTransformMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 4) &= 0xFFFFFE7F;
  if ( *((float *)this + 14) != 0.0 )
    return 1;
  if ( *((float *)this + 15) != 0.0 )
    return 1;
  if ( *((float *)this + 16) != 0.0 )
    return 1;
  if ( *((float *)this + 17) != 0.0 )
    return 1;
  if ( *((float *)this + 18) != 0.0 )
    return 1;
  if ( *((float *)this + 19) != 0.0 )
    return 1;
  if ( *((float *)this + 20) != 1.0 )
    return 1;
  if ( *((float *)this + 21) != 1.0 )
    return 1;
  if ( *((float *)this + 22) != 1.0 )
    return 1;
  if ( *((float *)this + 23) != 0.0 )
    return 1;
  if ( *((float *)this + 24) != 0.0 )
    return 1;
  if ( *((float *)this + 25) != 0.0 )
    return 1;
  result = 0;
  if ( *((_DWORD *)this + 26) )
    return 1;
  return result;
}
