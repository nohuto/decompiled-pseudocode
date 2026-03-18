/*
 * XREFs of ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00D51DC
 * Callers:
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C005A020 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall XEPALOBJ::ulGetMatchFromPalentry(struct PALETTE **this, struct tagPALETTEENTRY a2)
{
  return XEPALOBJ::ulDispatchGFPEFunction(this, *((_DWORD *)*this + 25), *(_DWORD *)&a2);
}
