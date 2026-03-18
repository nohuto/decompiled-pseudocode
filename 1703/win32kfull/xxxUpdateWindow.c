/*
 * XREFs of xxxUpdateWindow @ 0x1C0049200
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0048FB4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall xxxUpdateWindow(struct tagWND *a1)
{
  xxxInternalUpdateWindow(a1, 1u);
  return 1LL;
}
