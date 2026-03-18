/*
 * XREFs of ?SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C014A2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 5 )
    return 3221225485LL;
  if ( *((float *)this + 27) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x400u;
    *((float *)this + 27) = a3;
    *a4 = 1;
  }
  return result;
}
