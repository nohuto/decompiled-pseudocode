/*
 * XREFs of ?AddColorWithPosition@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x1801CEEE0
 * Callers:
 *     ?AddColorWithPosition@CMILBrushLinearGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x180146E50 (-AddColorWithPosition@CMILBrushLinearGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x1801CF04C (-AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 */

__int64 __fastcall CMILBrushGradient::AddColorWithPosition(
        CMILBrushGradient *this,
        const struct _D3DCOLORVALUE *a2,
        float a3)
{
  unsigned int v4; // ebx
  signed int v5; // eax
  bool v6; // zf
  int v7; // eax

  if ( a2 )
  {
    v5 = CGradientColorData::AddColorWithPosition((CMILBrushGradient *)((char *)this + 40), a2, a3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xD4u);
    v6 = (*((_DWORD *)this + 2))++ == -1;
    v7 = *((_DWORD *)this + 2);
    if ( v6 )
      v7 = 1;
    *((_DWORD *)this + 2) = v7;
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xD1u);
  }
  return v4;
}
