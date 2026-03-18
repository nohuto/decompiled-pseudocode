/*
 * XREFs of IsMouseInPointerActive @ 0x1C000453C
 * Callers:
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0004480 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01319AC (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMouseInPointerActive(__int64 a1)
{
  return !*(_QWORD *)(a1 + 584)
      && ((*(_DWORD *)(*(_QWORD *)(a1 + 400) + 776LL) & 4) != 0 || (*(_DWORD *)(a1 + 1184) & 0x2000000) != 0);
}
