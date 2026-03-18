/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00E4E80
 * Callers:
 *     DxgkGetAdapterDefaultScaling @ 0x1C00A8A40 (DxgkGetAdapterDefaultScaling.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00ABF30 (_EnforceDriverModelScalingPolicy.c)
 *     BmlPinPathContentScaling @ 0x1C00F2B0C (BmlPinPathContentScaling.c)
 *     BmlInternalTryPinningScaling @ 0x1C00F2BC4 (BmlInternalTryPinningScaling.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00F3258 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     DmmGetDefaultScaling @ 0x1C01D5298 (DmmGetDefaultScaling.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::GetAdapterDefaultScaling(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int DriverVersion; // eax
  unsigned int v6; // ecx
  __int64 v8; // rax

  if ( !*((_QWORD *)this + 1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL));
  v6 = 255;
  if ( DriverVersion >= 1105 )
    return 4;
  return v6;
}
