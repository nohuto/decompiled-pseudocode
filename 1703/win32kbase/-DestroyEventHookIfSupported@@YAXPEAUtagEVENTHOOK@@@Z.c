/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C008A930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  if ( (int)IsDestroyEventHookSupported() >= 0 )
    DestroyEventHook(a1);
}
