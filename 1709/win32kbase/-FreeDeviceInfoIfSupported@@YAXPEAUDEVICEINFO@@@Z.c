/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00E4C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  if ( (int)IsFreeDeviceInfoSupported() >= 0 )
    FreeDeviceInfo(a1);
}
