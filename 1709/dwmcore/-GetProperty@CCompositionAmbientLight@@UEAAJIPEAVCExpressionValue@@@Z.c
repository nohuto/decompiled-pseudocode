/*
 * XREFs of ?GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18015A000
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionAmbientLight::GetProperty(
        CCompositionAmbientLight *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx

  v3 = 0;
  v4 = a2 - 2;
  if ( !v4 )
  {
    *((_DWORD *)a3 + 16) = 70;
    *(_OWORD *)a3 = *((_OWORD *)this + 10);
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    *(_DWORD *)a3 = *((_DWORD *)this + 44);
    *((_DWORD *)a3 + 16) = 18;
LABEL_6:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x54u);
  return v3;
}
