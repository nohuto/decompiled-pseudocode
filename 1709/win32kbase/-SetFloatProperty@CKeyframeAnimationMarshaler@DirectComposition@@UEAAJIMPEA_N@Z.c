/*
 * XREFs of ?SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0004940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetFloatProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 16;
  if ( v5 )
  {
    if ( v5 == 1 && (a3 > 0.0 || a3 == -1.0) )
    {
      if ( *((float *)this + 51) == a3 )
        return result;
      *((float *)this + 51) = a3;
      goto LABEL_7;
    }
    return 3221225485LL;
  }
  if ( a3 < 0.0 )
    return 3221225485LL;
  if ( *((float *)this + 50) != a3 )
  {
    *((float *)this + 50) = a3;
LABEL_7:
    *((_DWORD *)this + 4) &= ~0x800u;
    *a4 = 1;
  }
  return result;
}
