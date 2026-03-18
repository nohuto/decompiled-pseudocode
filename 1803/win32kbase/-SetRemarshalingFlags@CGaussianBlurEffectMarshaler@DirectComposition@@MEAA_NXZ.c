/*
 * XREFs of ?SetRemarshalingFlags@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C015B5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGaussianBlurEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CGaussianBlurEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12) || *((float *)this + 22) != 3.0 || *((_DWORD *)this + 23) != 2 || *((_DWORD *)this + 24) )
    return 1;
  return result;
}
