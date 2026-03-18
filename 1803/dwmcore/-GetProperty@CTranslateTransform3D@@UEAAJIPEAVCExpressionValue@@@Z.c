/*
 * XREFs of ?GetProperty@CTranslateTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B6E30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTranslateTransform3D::GetProperty(CTranslateTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  double v5; // xmm0_8

  v3 = 0;
  if ( !a2 )
  {
    v5 = *((double *)this + 19);
    goto LABEL_8;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v5 = *((double *)this + 20);
    goto LABEL_8;
  }
  if ( v4 == 1 )
  {
    v5 = *((double *)this + 21);
LABEL_8:
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    *(float *)a3 = v5;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x3Fu);
  return v3;
}
