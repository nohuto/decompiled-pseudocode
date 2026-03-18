/*
 * XREFs of ?FreeHookIfSupported@@YAXPEAUtagHOOK@@@Z @ 0x1C0099BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  if ( (int)IsFreeHookSupported() >= 0 )
    FreeHook(a1);
}
