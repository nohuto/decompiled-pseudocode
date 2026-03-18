/*
 * XREFs of ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x1C0051738
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x1C0051310 (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C006BBD8 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvGetDisplayDriverDpiSetting(struct _devicemodeW *a1)
{
  WORD v1; // ax

  if ( gDrvDpiAdjusted )
    v1 = gdmLogPixels;
  else
    v1 = 96;
  a1->dmLogPixels = v1;
}
