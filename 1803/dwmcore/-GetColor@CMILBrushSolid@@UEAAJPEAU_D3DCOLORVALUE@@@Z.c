/*
 * XREFs of ?GetColor@CMILBrushSolid@@UEAAJPEAU_D3DCOLORVALUE@@@Z @ 0x18020F740
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMILBrushSolid::GetColor(CMILBrushSolid *this, struct _D3DCOLORVALUE *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *(struct _D3DCOLORVALUE *)&a2->r = *(struct _D3DCOLORVALUE *)((char *)this + 8);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x62u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x6Au);
  }
  return v2;
}
