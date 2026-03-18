/*
 * XREFs of ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x1801F8A0C
 * Callers:
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800348A4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18014A2A8 (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 * Callees:
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801F89D8 (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 */

__int64 __fastcall CHolographicManager::GetInteropTextureVisualTree(RTL_SRWLOCK *this, int a2, struct CVisualTree **a3)
{
  struct CHolographicInteropTexture *InteropTextureByBindId; // rax
  volatile signed __int32 *v7; // rax
  unsigned int v8; // edi

  *a3 = 0LL;
  AcquireSRWLockShared(this + 10);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId((CHolographicManager *)this, a2);
  if ( InteropTextureByBindId )
  {
    v7 = (volatile signed __int32 *)*((_QWORD *)InteropTextureByBindId + 10);
    *a3 = (struct CVisualTree *)v7;
  }
  else
  {
    v7 = (volatile signed __int32 *)*a3;
  }
  if ( v7 )
    _InterlockedIncrement(v7 + 2);
  v8 = v7 == 0LL ? 0x80004005 : 0;
  ReleaseSRWLockShared(this + 10);
  return v8;
}
