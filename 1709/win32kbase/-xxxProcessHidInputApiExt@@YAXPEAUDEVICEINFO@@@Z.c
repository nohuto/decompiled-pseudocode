/*
 * XREFs of ?xxxProcessHidInputApiExt@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00DF3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall xxxProcessHidInputApiExt(struct DEVICEINFO *a1)
{
  if ( (int)IsxxxProcessHidInputSupported() >= 0 )
    xxxProcessHidInput(a1);
}
