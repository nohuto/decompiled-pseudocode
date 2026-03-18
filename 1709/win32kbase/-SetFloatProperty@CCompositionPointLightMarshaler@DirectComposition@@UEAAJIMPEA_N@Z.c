/*
 * XREFs of ?SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C014A9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionPointLightMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 2;
  if ( !v5 )
  {
    if ( *((float *)this + 18) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 18) = a3;
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 19) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 19) = a3;
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 20) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x200u;
    *((float *)this + 20) = a3;
    goto LABEL_14;
  }
  if ( v7 != 4 )
    return 3221225485LL;
  if ( *((float *)this + 31) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x2000u;
    *((float *)this + 31) = a3;
LABEL_14:
    *a4 = 1;
  }
  return result;
}
