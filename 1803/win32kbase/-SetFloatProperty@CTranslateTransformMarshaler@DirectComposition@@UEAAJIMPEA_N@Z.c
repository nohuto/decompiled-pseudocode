/*
 * XREFs of ?SetFloatProperty@CTranslateTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0158B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransformMarshaler::SetFloatProperty(
        DirectComposition::CTranslateTransformMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  bool v5; // al

  v4 = 0;
  if ( !a2 )
  {
    if ( *((float *)this + 14) != a3 )
    {
      *((float *)this + 14) = a3;
      goto LABEL_9;
    }
LABEL_7:
    v5 = 0;
LABEL_10:
    *a4 = v5;
    return v4;
  }
  if ( a2 == 1 )
  {
    if ( *((float *)this + 15) != a3 )
    {
      *((float *)this + 15) = a3;
LABEL_9:
      v5 = 1;
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  return (unsigned int)-1073741811;
}
