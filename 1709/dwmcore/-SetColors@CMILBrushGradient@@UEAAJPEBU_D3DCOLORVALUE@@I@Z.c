/*
 * XREFs of ?SetColors@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x1801CEF60
 * Callers:
 *     ?SetColors@CMILBrushLinearGradient@@UEAAJPEAU_D3DCOLORVALUE@@I@Z @ 0x180147620 (-SetColors@CMILBrushLinearGradient@@UEAAJPEAU_D3DCOLORVALUE@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x1801CF1F4 (-SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z.c)
 */

__int64 __fastcall CMILBrushGradient::SetColors(
        CMILBrushGradient *this,
        const struct _D3DCOLORVALUE *a2,
        unsigned int a3)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  bool v6; // zf
  int v7; // eax

  if ( a2 && a3 >= 2 )
  {
    v4 = CGradientColorData::SetColors((CMILBrushGradient *)((char *)this + 152), a2, a3);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xB6u);
    v6 = (*((_DWORD *)this + 30))++ == -1;
    v7 = *((_DWORD *)this + 30);
    if ( v6 )
      v7 = 1;
    *((_DWORD *)this + 30) = v7;
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xB1u);
  }
  return v5;
}
