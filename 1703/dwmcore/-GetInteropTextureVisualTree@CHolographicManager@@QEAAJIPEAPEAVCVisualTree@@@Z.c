/*
 * XREFs of ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x1801A6120
 * Callers:
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800048C4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18013F5F4 (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 * Callees:
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801A60EC (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 */

__int64 __fastcall CHolographicManager::GetInteropTextureVisualTree(RTL_SRWLOCK *this, int a2, struct CVisualTree **a3)
{
  unsigned int v6; // ebp
  struct CHolographicInteropTexture *InteropTextureByBindId; // rax

  *a3 = 0LL;
  v6 = -2147467259;
  AcquireSRWLockShared(this + 9);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId((CHolographicManager *)this, a2);
  if ( InteropTextureByBindId )
    *a3 = (struct CVisualTree *)*((_QWORD *)InteropTextureByBindId + 10);
  if ( *a3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)*a3 + 2);
    v6 = 0;
  }
  ReleaseSRWLockShared(this + 9);
  return v6;
}
