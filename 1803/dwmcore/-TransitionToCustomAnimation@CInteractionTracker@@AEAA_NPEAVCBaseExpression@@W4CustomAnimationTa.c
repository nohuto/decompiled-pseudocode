/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180196D74
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180195F9C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x180193FB0 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801947C0 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801967C4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x180196C68 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801C9A80 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

char __fastcall CInteractionTracker::TransitionToCustomAnimation(__int64 a1, struct CResource *a2, int a3)
{
  char v3; // di
  __int64 v4; // rbp
  int v7; // ecx
  int v8; // ecx
  InteractionSourceManager *v9; // r10
  int v10; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  v4 = a3;
  if ( a2 )
  {
    v7 = *(_DWORD *)(a1 + 152);
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          *((_BYTE *)a2 + 208) &= ~1u;
          return v3;
        }
        CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, a3);
      }
      else
      {
        CInteractionTracker::DestroyInteractionAnimations((CInteractionTracker *)a1);
      }
    }
    if ( InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 352)) )
      InteractionSourceManager::ClearActiveManipulations(v9);
    if ( (unsigned int)v4 < 2 )
    {
      CComposition::GetWeakReferenceBase(
        *(CComposition **)(a1 + 16),
        a2,
        (struct CWeakReferenceBase **)(a1 + 8 * (v4 + 63)));
      v10 = CResource::RegisterNotifier((CResource *)a1, a2);
      if ( v10 < 0 )
        ModuleFailFastForHRESULT(v10, retaddr);
      CInteractionTracker::SetState(a1, 3u);
    }
    return 1;
  }
  return v3;
}
