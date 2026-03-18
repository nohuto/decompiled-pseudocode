/*
 * XREFs of ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88
 * Callers:
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00DC70C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00DE7C8 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?AddActiveHMDPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z @ 0x1C00DEA08 (-AddActiveHMDPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z.c)
 *     DxgkGetPathsModality @ 0x1C00DF950 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00E5360 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00F9E08 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C01002FC (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F718C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00DC618 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DEFF8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00E0A6C (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveActive(CCD_TOPOLOGY *this, bool a2, char a3, bool a4, unsigned __int16 *a5)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  CCD_BTL *v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rax
  char v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0;
  if ( a3
    || (v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v15, 0), v10 = v8, v8 >= 0) )
  {
    CCD_BTL::Global();
    LODWORD(v10) = CCD_BTL::RetrieveActiveTopology(v11, a2, a4, this, a5);
    if ( (int)v10 >= 0 )
    {
      LODWORD(v10) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v10 >= 0 )
        LODWORD(v10) = CCD_TOPOLOGY::FillPathsTargetFlags(this);
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v14 + 24) = v10;
    WdLogEvent5_WdError(v14);
  }
  if ( v15 )
    DxgkReleaseSessionModeChangeLock(v12);
  return (unsigned int)v10;
}
