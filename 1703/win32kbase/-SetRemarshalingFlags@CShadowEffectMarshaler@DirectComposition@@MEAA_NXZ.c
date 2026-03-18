/*
 * XREFs of ?SetRemarshalingFlags@CShadowEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014D570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CShadowEffectMarshaler *this)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12)
    || *((float *)this + 22) != 3.0
    || *((_DWORD *)this + 27)
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 1.0 )
  {
    return 1LL;
  }
  return result;
}
