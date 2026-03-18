/*
 * XREFs of ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C00413F8
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x1C009E430 (ulGetNearestIndexFromColorref.c)
 * Callees:
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0041060 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00416E0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentry(XEPALOBJ *this, struct tagPALETTEENTRY a2, int a3)
{
  if ( a3 )
    return XEPALOBJ::ulDispatchGFPEFunction(this, *(unsigned int *)(*(_QWORD *)this + 96LL), *(unsigned int *)&a2);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(this, a2);
}
