/*
 * XREFs of ?GetColor@CHwConstantMilColorFColorSource@@UEBAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800CCF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwConstantMilColorFColorSource::GetColor(struct _D3DCOLORVALUE *this, struct _D3DCOLORVALUE *a2)
{
  *(struct _D3DCOLORVALUE *)&a2->r = *(struct _D3DCOLORVALUE *)&this[2].r;
}
