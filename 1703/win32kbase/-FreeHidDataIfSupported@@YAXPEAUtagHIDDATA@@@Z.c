/*
 * XREFs of ?FreeHidDataIfSupported@@YAXPEAUtagHIDDATA@@@Z @ 0x1C00DE6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeHidDataIfSupported(struct tagHIDDATA *a1)
{
  if ( (int)IsFreeHidDataSupported() >= 0 )
    FreeHidData(a1);
}
