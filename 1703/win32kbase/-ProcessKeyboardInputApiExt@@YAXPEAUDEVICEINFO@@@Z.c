/*
 * XREFs of ?ProcessKeyboardInputApiExt@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00D9010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ProcessKeyboardInputApiExt(struct DEVICEINFO *a1)
{
  if ( (int)IsProcessKeyboardInputSupported() >= 0 )
    ProcessKeyboardInput(a1);
}
