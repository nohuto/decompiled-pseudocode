/*
 * XREFs of ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800048C4
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180004660 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18018AA0C (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x18019348C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x180004AE0 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x1801A6120 (-GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z.c)
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
    if ( *((_QWORD *)this + 19) )
    {
      v11 = (RTL_SRWLOCK *)((char *)this + 584);
      AcquireSRWLockShared((PSRWLOCK)this + 73);
      InteropTextureVisualTree = CHolographicManager::GetInteropTextureVisualTree(
                                   *((CHolographicManager **)this + 19),
                                   a3,
                                   a4);
      ReleaseSRWLockShared(v11);
      if ( InteropTextureVisualTree < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, InteropTextureVisualTree, 0x104Du);
    }
  }
  else
  {
    v9 = (CMonitorTreeAssociation *)*((_QWORD *)this + 3);
    *a4 = 0LL;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v9 + 6) + 584LL));
    InteropTextureVisualTree = CMonitorTreeAssociation::FindTreeNoLock(v9, a2, a4);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v9 + 6) + 584LL));
    if ( InteropTextureVisualTree < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, InteropTextureVisualTree, 0x1046u);
  }
  return (unsigned int)InteropTextureVisualTree;
}
