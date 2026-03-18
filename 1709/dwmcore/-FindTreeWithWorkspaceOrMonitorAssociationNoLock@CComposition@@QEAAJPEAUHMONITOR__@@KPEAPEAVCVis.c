/*
 * XREFs of ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x180127FDC
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180009FF8 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A33EC (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800BAF74 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x1801C081C (-GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(
        CComposition *this,
        HMONITOR a2,
        unsigned int a3,
        struct CVisualTree **a4)
{
  unsigned int v4; // ebx
  signed int TreeNoLock; // eax
  CHolographicManager *v6; // rcx
  signed int InteropTextureVisualTree; // eax

  v4 = -2147467259;
  if ( a3 )
  {
    v6 = (CHolographicManager *)*((_QWORD *)this + 16);
    if ( v6 )
    {
      InteropTextureVisualTree = CHolographicManager::GetInteropTextureVisualTree(v6, a3, a4);
      v4 = InteropTextureVisualTree;
      if ( InteropTextureVisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, InteropTextureVisualTree, 0xEFDu);
    }
  }
  else
  {
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(*((CMonitorTreeAssociation **)this + 3), a2, a4);
    v4 = TreeNoLock;
    if ( TreeNoLock < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TreeNoLock, 0xEF9u);
  }
  return v4;
}
