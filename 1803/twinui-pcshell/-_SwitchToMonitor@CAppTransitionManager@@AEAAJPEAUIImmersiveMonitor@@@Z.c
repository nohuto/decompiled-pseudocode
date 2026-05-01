/*
 * XREFs of ?_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802AD8F0
 * Callers:
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802ACDD0 (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800F7708 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 *     CAppTransitionTargetManager_CreateInstance @ 0x1802B05BC (CAppTransitionTargetManager_CreateInstance.c)
 */

__int64 __fastcall CAppTransitionManager::_SwitchToMonitor(IUnknown *punkSite, struct IImmersiveMonitor *a2)
{
  int Instance; // eax
  int v5; // ebx
  struct IUnknownVtbl *lpVtbl; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( punkSite[23].lpVtbl
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[23]),
        Instance = CAppTransitionTargetManager_CreateInstance(punkSite),
        v5 = Instance,
        Instance >= 0) )
  {
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x372,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)Instance);
  }
  if ( v5 >= 0 )
  {
    v9 = 0;
    lpVtbl = punkSite[22].lpVtbl;
    if ( !lpVtbl
      || (*((int (__fastcall **)(struct IUnknownVtbl *, struct IImmersiveMonitor *, int *))lpVtbl->QueryInterface + 12))(
           lpVtbl,
           a2,
           &v9) >= 0
      && !v9 )
    {
      Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=((__int64 *)&punkSite[22], (__int64)a2);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x188,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
}
