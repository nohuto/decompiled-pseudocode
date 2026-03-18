/*
 * XREFs of ?SetFloatProperty@CRenderTargetTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C014CC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetFloatProperty(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 10 )
    return 3221225485LL;
  if ( a3 == *((float *)this + 30) )
    return result;
  if ( a3 <= 0.0 )
    return 3221225485LL;
  *((_DWORD *)this + 4) |= 0x100u;
  *((float *)this + 30) = a3;
  *a4 = 1;
  return result;
}
