/*
 * XREFs of ?SetRemarshalingFlags@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014D6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHueRotationEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CHueRotationEffectMarshaler *this)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12) || *((float *)this + 22) != 0.0 )
    return 1LL;
  return result;
}
