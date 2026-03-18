/*
 * XREFs of ?SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014AF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CManipulationTransformMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 4) &= 0xFFFFFE7F;
  if ( *((float *)this + 14) != 0.0 )
    return 1LL;
  if ( *((float *)this + 15) != 0.0 )
    return 1LL;
  if ( *((float *)this + 16) != 0.0 )
    return 1LL;
  if ( *((float *)this + 17) != 0.0 )
    return 1LL;
  if ( *((float *)this + 18) != 0.0 )
    return 1LL;
  if ( *((float *)this + 19) != 0.0 )
    return 1LL;
  if ( *((float *)this + 20) != 1.0 )
    return 1LL;
  if ( *((float *)this + 21) != 1.0 )
    return 1LL;
  if ( *((float *)this + 22) != 1.0 )
    return 1LL;
  if ( *((float *)this + 23) != 0.0 )
    return 1LL;
  if ( *((float *)this + 24) != 0.0 )
    return 1LL;
  if ( *((float *)this + 25) != 0.0 )
    return 1LL;
  result = 0LL;
  if ( *((_DWORD *)this + 26) )
    return 1LL;
  return result;
}
