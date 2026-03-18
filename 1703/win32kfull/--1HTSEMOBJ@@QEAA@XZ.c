/*
 * XREFs of ??1HTSEMOBJ@@QEAA@XZ @ 0x1C019592C
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ACB80 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall HTSEMOBJ::~HTSEMOBJ(HTSEMOBJ *this)
{
  HTSEMOBJ::vRelease(this);
}
