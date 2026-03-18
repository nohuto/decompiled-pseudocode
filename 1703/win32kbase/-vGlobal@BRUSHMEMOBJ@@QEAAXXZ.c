/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0059630
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01D8214 (bInitBrush.c)
 * Callees:
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(__int64 **this)
{
  __int64 v2; // rdx

  *((_DWORD *)*this + 12) |= 0x40200u;
  HmgSetOwner(**this, 0, 16);
  LOBYTE(v2) = 16;
  HmgMarkUndeletable(**this, v2);
}
