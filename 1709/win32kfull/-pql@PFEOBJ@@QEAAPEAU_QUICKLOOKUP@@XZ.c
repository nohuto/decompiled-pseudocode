/*
 * XREFs of ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C003BEFC
 * Callers:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0034518 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00F56B8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 * Callees:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00F56B8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

struct _QUICKLOOKUP *__fastcall PFEOBJ::pql(struct PFE **this)
{
  HSEMAPHORE v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)*this + 3) & 0x200) != 0 )
  {
    v3 = ghsemEUDC1;
    GreAcquireSemaphore(ghsemEUDC1);
    *((_DWORD *)*this + 3) &= ~0x200u;
    bComputeQuickLookup(0LL, *this, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v3);
  }
  return (struct PFE *)((char *)*this + 112);
}
