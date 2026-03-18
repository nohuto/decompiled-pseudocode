/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00D16D8
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00D1788 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C00D182C (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        const struct tagSIZE *a2,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        struct _DPI_INFORMATION *a8)
{
  int v9; // esi
  __int64 v10; // r9
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edx
  struct _DPI_INFORMATION *v16; // [rsp+20h] [rbp-8h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v17; // [rsp+68h] [rbp+40h]

  v9 = (int)a3;
  FillPhysicalDpiOnly(a1, a2, a8);
  *((_DWORD *)a8 + 16) = 200;
  LODWORD(v17) = 20000 * *((_DWORD *)a8 + 10) / 0x6900u;
  v11 = 20000 * *((_DWORD *)a8 + 11);
  LODWORD(v12) = (940802361 * (unsigned __int64)v11) >> 32;
  v13 = v11 / 0x6900;
  HIDWORD(v17) = v13;
  *((_QWORD *)a8 + 7) = v17;
  if ( !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12, 940802361LL, v10);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = (100 * a5 + 48) / 0x60;
  *((_DWORD *)a8 + 3) = v15;
  DpiInternal::FillOverridesAndAdjustedScaleFactor((DpiInternal *)a5, v15, v9, a8, v16);
}
