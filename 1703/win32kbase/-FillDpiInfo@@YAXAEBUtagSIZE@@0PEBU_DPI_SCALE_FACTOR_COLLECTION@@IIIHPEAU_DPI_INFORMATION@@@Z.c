/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00912F0
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C00913C0 (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00F3FEC (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
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
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-8h]
  struct _DPI_INFORMATION *v20; // [rsp+68h] [rbp+40h]

  FillPhysicalDpiOnly(a1, a2, a8);
  *((_DWORD *)a8 + 16) = 200;
  LODWORD(v20) = 20000 * *((_DWORD *)a8 + 10) / 0x6900u;
  v10 = 20000 * *((_DWORD *)a8 + 11);
  LODWORD(v11) = (940802361 * (unsigned __int64)v10) >> 32;
  v12 = v10 / 0x6900;
  HIDWORD(v20) = v12;
  *((_QWORD *)a8 + 7) = v20;
  if ( !a5 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v15);
  }
  v13 = 100 * a5 + 48;
  LODWORD(v11) = (2863311531u * (unsigned __int64)(unsigned int)v13) >> 32;
  v14 = (unsigned int)v13 / 0x60;
  *((_DWORD *)a8 + 3) = (unsigned int)v13 / 0x60;
  if ( !((unsigned int)v13 / 0x60) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v11);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !*((_DWORD *)a8 + 8) || !*((_DWORD *)a8 + 9) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13, v11);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a5 )
  {
    *((_DWORD *)a8 + 2) = v14;
    *((_DWORD *)a8 + 21) = 1234569;
  }
  else
  {
    v18 = WdLogNewEntry5_WdAssertion(v13, v11);
    WdLogEvent5_WdAssertion(v18);
    *((_DWORD *)a8 + 2) = DpiInternal::AdjustDesktopScaleFactorForOverride(
                            (DpiInternal *)*((unsigned int *)a8 + 3),
                            *((_QWORD *)a8 + 4),
                            (struct tagSIZE)a3,
                            (const struct _DPI_SCALE_FACTOR_COLLECTION *)*((unsigned int *)a8 + 21),
                            v19);
  }
}
