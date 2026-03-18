/*
 * XREFs of ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800AA8F4
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800B8A40 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x1800BF168 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180196C84 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801A239C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800BAF74 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x1801C081C (-GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
        CComposition *this,
        HMONITOR a2,
        unsigned int a3,
        struct CVisualTree **a4)
{
  signed int InteropTextureVisualTree; // edi
  CMonitorTreeAssociation *v9; // rbx
  RTL_SRWLOCK *v11; // rbx

  InteropTextureVisualTree = -2147467259;
  if ( a3 )
  {
    if ( *((_QWORD *)this + 16) )
    {
      v11 = (RTL_SRWLOCK *)((char *)this + 552);
      AcquireSRWLockShared((PSRWLOCK)this + 69);
      InteropTextureVisualTree = CHolographicManager::GetInteropTextureVisualTree(
                                   *((CHolographicManager **)this + 16),
                                   a3,
                                   a4);
      ReleaseSRWLockShared(v11);
      if ( InteropTextureVisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, InteropTextureVisualTree, 0xEE7u);
    }
  }
  else
  {
    v9 = (CMonitorTreeAssociation *)*((_QWORD *)this + 3);
    *a4 = 0LL;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v9 + 6) + 552LL));
    InteropTextureVisualTree = CMonitorTreeAssociation::FindTreeNoLock(v9, a2, a4);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v9 + 6) + 552LL));
    if ( InteropTextureVisualTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, InteropTextureVisualTree, 0xEE0u);
  }
  return (unsigned int)InteropTextureVisualTree;
}
