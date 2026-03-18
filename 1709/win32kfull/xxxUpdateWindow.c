/*
 * XREFs of xxxUpdateWindow @ 0x1C009F840
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009F5E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall xxxUpdateWindow(struct tagWND *a1)
{
  xxxInternalUpdateWindow(a1, 1u);
  return 1LL;
}
