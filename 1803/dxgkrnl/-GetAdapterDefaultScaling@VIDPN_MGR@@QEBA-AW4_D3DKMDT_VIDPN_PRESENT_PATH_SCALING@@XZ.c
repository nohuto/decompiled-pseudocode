/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00BA378
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlInternalTryPinningScaling @ 0x1C00C2CD0 (BmlInternalTryPinningScaling.c)
 *     BmlPinPathContentScaling @ 0x1C00C3080 (BmlPinPathContentScaling.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00D7FCC (_EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D8450 (DxgkGetAdapterDefaultScaling.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0212B5C (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::GetAdapterDefaultScaling(VIDPN_MGR *this)
{
  __int64 v2; // rcx
  int DriverVersion; // eax
  unsigned int v4; // ecx
  __int64 v6; // rax

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v6);
    v2 = *((_QWORD *)this + 1);
  }
  DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v2 + 16));
  v4 = 255;
  if ( DriverVersion >= 1105 )
    return 4;
  return v4;
}
