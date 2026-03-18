/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001E1D8
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01DFAFC (bInitBrush.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x1C0063790 (HmgMarkUndeletable.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(struct HOBJ__ ***this, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 16;
  *((_DWORD *)*this + 12) |= 0x40200u;
  HmgSetOwner(**this, 0LL, a3);
  HmgMarkUndeletable(**this);
}
