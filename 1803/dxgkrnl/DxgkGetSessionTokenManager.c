/*
 * XREFs of DxgkGetSessionTokenManager @ 0x1C000DF40
 * Callers:
 *     NtTokenManagerThread @ 0x1C000C070 (NtTokenManagerThread.c)
 *     NtUnBindCompositionSurface @ 0x1C000D5A0 (NtUnBindCompositionSurface.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DFA4 (-IsTokenManagerReady@@YAHXZ.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0049590 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C0049A60 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C0049CD0 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C0049DF0 (NtTokenManagerOpenSectionAndEvents.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C004C350 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     ?InsertCompletedToken@CCompositionSurface@@MEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C004C5E0 (-InsertCompletedToken@CCompositionSurface@@MEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C004CEBC (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FA0F4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkGetSessionTokenManager(_QWORD *a1)
{
  unsigned int v2; // edi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v5)(_QWORD); // rbx

  v2 = -1073741823;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2335);
    if ( v5 )
    {
      (**v5)(*((_QWORD *)SessionData + 2335));
      v2 = 0;
      *a1 = v5;
    }
  }
  return v2;
}
