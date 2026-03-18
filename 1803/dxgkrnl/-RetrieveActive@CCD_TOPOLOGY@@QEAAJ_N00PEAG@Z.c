/*
 * XREFs of ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00B3948
 * Callers:
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00B443C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5514 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00B64BC (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z @ 0x1C00B66F0 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z.c)
 *     DxgkGetPathsModality @ 0x1C00C4CF0 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00D78B0 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C010A2A0 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0224D50 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C0227A28 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B09A4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B0B74 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B2EB8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00B4348 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveActive(CCD_TOPOLOGY *this, char a2, char a3, bool a4, unsigned __int16 *a5)
{
  int v8; // eax
  __int64 v9; // rbx
  CCD_BTL *v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rax
  char v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0;
  if ( a3
    || (v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v14, 0), v9 = v8, v8 >= 0) )
  {
    CCD_BTL::Global((__int64)this);
    LODWORD(v9) = CCD_BTL::RetrieveActiveTopology(v10, a2, a4, this, a5);
    if ( (int)v9 >= 0 )
    {
      LODWORD(v9) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v9 >= 0 )
        LODWORD(v9) = CCD_TOPOLOGY::FillPathsTargetFlags(this);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = v9;
    WdLogEvent5_WdError(v13);
  }
  if ( v14 )
    DxgkReleaseSessionModeChangeLock(v11);
  return (unsigned int)v9;
}
