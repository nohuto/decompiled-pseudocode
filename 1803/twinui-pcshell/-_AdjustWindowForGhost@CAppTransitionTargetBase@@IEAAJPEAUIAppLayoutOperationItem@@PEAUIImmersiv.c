/*
 * XREFs of ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1802AF700
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802AEFC0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 *     ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802AF340 (-PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionTargetBase::_AdjustWindowForGhost(
        CAppTransitionTargetBase *this,
        struct IAppLayoutOperationItem *a2,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a3,
        bool *a4)
{
  int v7; // eax
  unsigned int v8; // esi
  struct IApplicationView *v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ApplicationViewHelpers *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  if ( a4 )
    *a4 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  v7 = (*(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, ApplicationViewHelpers **))(*(_QWORD *)a2 + 32LL))(
         a2,
         &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
         &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( *((_DWORD *)this + 10) != 4095 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CAppTransitionTargetBase *, struct IAppLayoutOperationItem *))(*(_QWORD *)this + 80LL))(
             this,
             a2) )
      {
        *((_QWORD *)this + 7) = ApplicationViewHelpers::GetWindowForView(
                                  (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v12,
                                  v9);
        *((_DWORD *)this + 11) = *((_DWORD *)this + 11) & 0xDBBFFFFF | 0x4400000;
        if ( a4 )
          *a4 = 1;
      }
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  return v8;
}
