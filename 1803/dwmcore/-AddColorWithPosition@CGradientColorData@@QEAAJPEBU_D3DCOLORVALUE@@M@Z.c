/*
 * XREFs of ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18020F8E0
 * Callers:
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801B2F0C (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BCE4C (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@U_D3DCOLORVALUE@@$0A@@@QEAAJPEFBU_D3DCOLORVALUE@@I@Z @ 0x18020F954 (-AddMultipleAndSet@-$DynArray@U_D3DCOLORVALUE@@$0A@@@QEAAJPEFBU_D3DCOLORVALUE@@I@Z.c)
 */

__int64 __fastcall CGradientColorData::AddColorWithPosition(
        CGradientColorData *this,
        const struct _D3DCOLORVALUE *a2,
        float a3)
{
  int v4; // ebx
  unsigned int v5; // eax
  float v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v4 = DynArray<_D3DCOLORVALUE,0>::AddMultipleAndSet(this, a2, 1LL);
  if ( v4 < 0 )
  {
    v5 = 119;
    goto LABEL_5;
  }
  v4 = DynArray<float,0>::AddMultipleAndSet((__int64)this + 32, &v7, 1u);
  if ( v4 < 0 )
  {
    v5 = 120;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v5);
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 14) = 0;
  }
  return (unsigned int)v4;
}
