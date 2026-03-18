/*
 * XREFs of ?SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00092E0
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
  int v6; // edx
  int v7; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 16;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      if ( a3 > 0.0 || a3 == -1.0 )
      {
        if ( *((float *)this + 55) == a3 )
          return result;
        *((float *)this + 55) = a3;
        goto LABEL_7;
      }
      return 3221225485LL;
    }
    v7 = v6 - 14;
    if ( v7 )
    {
      if ( v7 == 2 && a3 >= 0.0 && a3 <= 1.0 )
      {
        *((_DWORD *)this + 4) &= ~0x4000u;
        *((float *)this + 77) = a3;
        goto LABEL_8;
      }
      return 3221225485LL;
    }
    if ( a3 != 0.0
      && (a3 < 0.0625 || a3 > 16.0)
      && (COERCE_FLOAT(LODWORD(a3) ^ _xmm) < 0.0625 || COERCE_FLOAT(LODWORD(a3) ^ _xmm) > 16.0) )
    {
      return 3221225485LL;
    }
    if ( *((float *)this + 76) != a3 )
    {
      *((_DWORD *)this + 4) &= ~0x10000u;
      *((float *)this + 76) = a3;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a3 < 0.0 )
      return 3221225485LL;
    if ( *((float *)this + 54) != a3 )
    {
      *((float *)this + 54) = a3;
LABEL_7:
      *((_DWORD *)this + 4) &= ~0x800u;
LABEL_8:
      *a4 = 1;
    }
  }
  return result;
}
