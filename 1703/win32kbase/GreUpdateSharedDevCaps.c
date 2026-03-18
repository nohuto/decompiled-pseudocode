/*
 * XREFs of GreUpdateSharedDevCaps @ 0x1C008257C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0082638 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall GreUpdateSharedDevCaps(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  vGetDeviceCaps((struct PDEVOBJ *)&v2, gpGdiDevCaps);
  return 1LL;
}
