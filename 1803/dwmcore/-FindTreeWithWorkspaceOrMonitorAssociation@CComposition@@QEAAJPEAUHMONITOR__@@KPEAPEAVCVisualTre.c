/*
 * XREFs of ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800348A4
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001BFD8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180025648 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801CF274 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801DAF10 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x180034DBC (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x1801F8A0C (-GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
        CComposition *this,
        HMONITOR a2,
        unsigned int a3,
        struct CVisualTree **a4)
{
  int InteropTextureVisualTree; // edi
  CMonitorTreeAssociation *v9; // rbx
  RTL_SRWLOCK *v11; // rbx

  InteropTextureVisualTree = -2147467259;
  if ( a3 )
  {
    if ( *((_QWORD *)this + 16) )
    {
      v11 = (RTL_SRWLOCK *)((char *)this + 576);
      AcquireSRWLockShared((PSRWLOCK)this + 72);
      InteropTextureVisualTree = CHolographicManager::GetInteropTextureVisualTree(
                                   *((CHolographicManager **)this + 16),
                                   a3,
                                   a4);
      ReleaseSRWLockShared(v11);
      if ( InteropTextureVisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, InteropTextureVisualTree, 0xF34u);
    }
  }
  else
  {
    v9 = (CMonitorTreeAssociation *)*((_QWORD *)this + 3);
    *a4 = 0LL;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v9 + 6) + 576LL));
    InteropTextureVisualTree = CMonitorTreeAssociation::FindTreeNoLock(v9, a2, a4);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v9 + 6) + 576LL));
    if ( InteropTextureVisualTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, InteropTextureVisualTree, 0xF2Du);
  }
  return (unsigned int)InteropTextureVisualTree;
}
