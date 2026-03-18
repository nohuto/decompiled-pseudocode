/*
 * XREFs of ?ProcessMouseInputApiExt@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00D9040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ProcessMouseInputApiExt(struct DEVICEINFO *a1)
{
  if ( (int)IsProcessMouseInputSupported() >= 0 )
    ProcessMouseInput(a1);
}
