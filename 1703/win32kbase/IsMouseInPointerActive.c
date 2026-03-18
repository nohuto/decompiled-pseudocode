/*
 * XREFs of IsMouseInPointerActive @ 0x1C00046B4
 * Callers:
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0004560 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0132304 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMouseInPointerActive(__int64 a1)
{
  return !*(_QWORD *)(a1 + 528)
      && ((*(_DWORD *)(*(_QWORD *)(a1 + 376) + 768LL) & 4) != 0 || (unsigned int)IsShellThreadMiPEnabled(a1));
}
