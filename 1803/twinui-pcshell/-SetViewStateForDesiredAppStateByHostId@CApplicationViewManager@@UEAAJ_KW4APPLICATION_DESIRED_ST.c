/*
 * XREFs of ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x18013C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x18013B348 (-GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z.c)
 *     ?SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18013C6D0 (-SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::SetViewStateForDesiredAppStateByHostId(__int64 a1, __int64 a2, int a3)
{
  int ApplicationViewsById; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IObjectArray *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v10);
  ApplicationViewsById = CApplicationViewManager::GetApplicationViewsById((RTL_SRWLOCK *)(a1 - 200), 0LL, a2, 1, &v10);
  v7 = ApplicationViewsById;
  if ( ApplicationViewsById >= 0 )
    v7 = CApplicationViewManager::SetAppStateForViews((RTL_SRWLOCK *)(a1 - 200), (__int64)v10, a3);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33E,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ApplicationViewsById);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v10);
  return v7;
}
