/*
 * XREFs of ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x1801C081C
 * Callers:
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800AA8F4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x180127FDC (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 * Callees:
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801C07E8 (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 */

__int64 __fastcall CHolographicManager::GetInteropTextureVisualTree(RTL_SRWLOCK *this, int a2, struct CVisualTree **a3)
{
  unsigned int v6; // ebp
  struct CHolographicInteropTexture *InteropTextureByBindId; // rax

  *a3 = 0LL;
  v6 = -2147467259;
  AcquireSRWLockShared(this + 10);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId((CHolographicManager *)this, a2);
  if ( InteropTextureByBindId )
    *a3 = (struct CVisualTree *)*((_QWORD *)InteropTextureByBindId + 10);
  if ( *a3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)*a3 + 2);
    v6 = 0;
  }
  ReleaseSRWLockShared(this + 10);
  return v6;
}
