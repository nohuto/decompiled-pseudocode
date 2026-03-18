/*
 * XREFs of ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00DF040
 * Callers:
 *     DxgkGetPathsModality @ 0x1C00DF950 (DxgkGetPathsModality.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00DC618 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DEFF8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00E0B7C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveAllPaths(CCD_TOPOLOGY *this, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  CCD_BTL *v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rax
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0;
  v4 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v11, 0);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v10 + 24) = v6;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    CCD_BTL::Global();
    LODWORD(v6) = CCD_BTL::RetrieveAllPaths(v7, this, a2);
    if ( (int)v6 >= 0 )
    {
      LODWORD(v6) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v6 >= 0 )
        LODWORD(v6) = CCD_TOPOLOGY::FillPathsTargetFlags(this);
    }
  }
  if ( v11 )
    DxgkReleaseSessionModeChangeLock(v8);
  return (unsigned int)v6;
}
