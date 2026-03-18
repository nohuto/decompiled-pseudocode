/*
 * XREFs of ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C00913C0
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00912F0 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C009143C (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0091510 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 */

void __fastcall FillPhysicalDpiOnly(const struct tagSIZE *a1, struct tagSIZE *this, struct tagSIZE *a3)
{
  bool v3; // zf
  struct tagSIZE v7; // rax

  v3 = a1->cx == 0;
  a3[3] = *a1;
  a3[4] = *this;
  if ( !v3 && a1->cy )
    a3[5] = DpiInternal::CalcDpi((DpiInternal *)this, a1, a3);
  v7 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, a3);
  if ( !v7.cx || !v7.cy )
    v7 = a3[5];
  a3[6] = v7;
}
