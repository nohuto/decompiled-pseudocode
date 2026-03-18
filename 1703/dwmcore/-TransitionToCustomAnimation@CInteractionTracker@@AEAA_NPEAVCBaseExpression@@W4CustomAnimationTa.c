/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016E9A8
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016DBC4 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016C7BC (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E3E0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18016E91C (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 */

char __fastcall CInteractionTracker::TransitionToCustomAnimation(__int64 a1, struct CResource *a2, signed int a3)
{
  char v3; // bl
  __int64 v4; // rbp
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  v4 = a3;
  if ( a2 )
  {
    v7 = *(_DWORD *)(a1 + 140);
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
    v3 = 1;
    if ( (unsigned int)v4 < 2 )
    {
      CComposition::GetWeakReferenceBase(
        *(struct _RTL_GENERIC_TABLE **)(a1 + 16),
        a2,
        (struct CWeakReferenceBase **)(a1 + 8 * (v4 + 49)));
      v9 = CResource::RegisterNotifier((CResource *)a1, a2);
      if ( v9 < 0 )
      {
        ModuleFailFastForHRESULT(v9, retaddr);
        __debugbreak();
      }
      CInteractionTracker::SetState(a1, 3);
    }
  }
  return v3;
}
