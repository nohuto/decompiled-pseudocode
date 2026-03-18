/*
 * XREFs of ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C00D182C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00D16D8 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00CBC04 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00CBC80 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 */

void __fastcall FillPhysicalDpiOnly(const struct tagSIZE *a1, struct tagSIZE *this, struct tagSIZE *a3)
{
  struct tagSIZE v3; // rax
  struct tagSIZE v5; // r8
  struct tagSIZE v8; // rax

  v3 = *this;
  v5 = *a1;
  a3[3] = *a1;
  a3[4] = v3;
  if ( v5.cx )
  {
    v5 = (struct tagSIZE)HIDWORD(*(unsigned __int64 *)&v5);
    if ( v5.cx )
      a3[5] = DpiInternal::CalcDpi((DpiInternal *)this, a1, *(const struct tagSIZE **)&v5);
  }
  v8 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, *(const struct tagSIZE **)&v5);
  if ( !v8.cx || !v8.cy )
    v8 = a3[5];
  a3[6] = v8;
}
