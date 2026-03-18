/*
 * XREFs of ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18013F5F4
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18004DA9C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801944C4 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x180004AE0 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x1801A6120 (-GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(
        CComposition *this,
        HMONITOR a2,
        unsigned int a3,
        struct CVisualTree **a4)
{
  unsigned int v4; // ebx
  int TreeNoLock; // eax
  CHolographicManager *v6; // rcx
  int InteropTextureVisualTree; // eax

  v4 = -2147467259;
  if ( a3 )
  {
    v6 = (CHolographicManager *)*((_QWORD *)this + 19);
    if ( v6 )
    {
      InteropTextureVisualTree = CHolographicManager::GetInteropTextureVisualTree(v6, a3, a4);
      v4 = InteropTextureVisualTree;
      if ( InteropTextureVisualTree < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, InteropTextureVisualTree, 0x1063u);
    }
  }
  else
  {
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(*((CMonitorTreeAssociation **)this + 3), a2, a4);
    v4 = TreeNoLock;
    if ( TreeNoLock < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeNoLock, 0x105Fu);
  }
  return v4;
}
