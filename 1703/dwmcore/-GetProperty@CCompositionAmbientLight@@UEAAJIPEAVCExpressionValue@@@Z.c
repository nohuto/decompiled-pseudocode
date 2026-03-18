/*
 * XREFs of ?GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180173240
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionAmbientLight::GetProperty(
        CCompositionAmbientLight *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  __int128 v4; // xmm0

  v3 = 0;
  if ( a2 == 1 )
  {
    *((_DWORD *)a3 + 16) = 70;
    v4 = *((_OWORD *)this + 7);
    *((_BYTE *)a3 + 68) = 1;
    *(_OWORD *)a3 = v4;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x4Cu);
  }
  return v3;
}
