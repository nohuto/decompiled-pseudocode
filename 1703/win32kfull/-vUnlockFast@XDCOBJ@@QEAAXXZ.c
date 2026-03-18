/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00751AC
 * Callers:
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  XDCOBJ::RestoreAttributes(this);
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
