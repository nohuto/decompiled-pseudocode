/*
 * XREFs of ?SetRemarshalingFlags@CSaturationEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014D800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSaturationEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CSaturationEffectMarshaler *this)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12) || *((float *)this + 22) != 0.5 )
    return 1LL;
  return result;
}
