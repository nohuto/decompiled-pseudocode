/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00578E4
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     ??_G_AUTO@?1??DrvSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IIPEAXEPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAU_MDEV@@PEAPEAU5@PEAKPEAW4_DXGK_DIAG_SDC_STAGE@@PEAE8PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00F3F70 (--_G_AUTO@-1--DrvSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0057940 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(AUTO_TGO *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &off_1C015AEB8;
  if ( !v1 && (int)((__int64 (*)(void))qword_1C018BA58)() < 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v5);
  }
  FreePathsModality(*((struct _D3DKMT_GETPATHSMODALITY **)this + 6));
  FreePathsModality(*((struct _D3DKMT_GETPATHSMODALITY **)this + 7));
  FreePathsModality(*((struct _D3DKMT_GETPATHSMODALITY **)this + 8));
  AUTO_TGO::~AUTO_TGO(this);
}
