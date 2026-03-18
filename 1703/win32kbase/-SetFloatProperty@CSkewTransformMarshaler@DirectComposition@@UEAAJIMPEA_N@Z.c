/*
 * XREFs of ?SetFloatProperty@CSkewTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C014B740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSkewTransformMarshaler::SetFloatProperty(
        DirectComposition::CSkewTransformMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  int v6; // edx
  bool v7; // al

  v4 = 0;
  if ( !a2 )
  {
    if ( *((float *)this + 14) != a3 )
    {
      *((float *)this + 14) = a3;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 15) != a3 )
    {
      *((float *)this + 15) = a3;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 16) != a3 )
    {
      *((float *)this + 16) = a3;
      goto LABEL_15;
    }
LABEL_13:
    v7 = 0;
LABEL_16:
    *a4 = v7;
    return v4;
  }
  if ( v6 == 1 )
  {
    if ( *((float *)this + 17) != a3 )
    {
      *((float *)this + 17) = a3;
LABEL_15:
      v7 = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  return (unsigned int)-1073741811;
}
