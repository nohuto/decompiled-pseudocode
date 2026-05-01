/*
 * XREFs of ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1801188B4
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1801181D0 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004E770 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7aef9f6174acb3d73b407d8c046faaf1___ @ 0x180116AD0 (Windows--Internal--ComTaskPool--QueueTask__lambda_7aef9f6174acb3d73b407d8c046faaf1___.c)
 */

// Hidden C++ exception states: #wind=2
unsigned int __fastcall CImmersiveMode::_ScheduleLegacyModeNotification(RTL_SRWLOCK *a1, int a2, int a3)
{
  struct IObjectArray *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct IObjectArray *v10; // [rsp+28h] [rbp-18h] BYREF
  int v11; // [rsp+30h] [rbp-10h]
  int v12; // [rsp+34h] [rbp-Ch]
  int v13; // [rsp+38h] [rbp-8h]
  int v14; // [rsp+60h] [rbp+20h] BYREF
  struct IObjectArray *v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v15);
  if ( (int)AgileRegistrationList::GetCallbackArray(a1 + 32, &v15) >= 0 )
  {
    v6 = v15;
    if ( ((int (__fastcall *)(struct IObjectArray *, int *))v15->lpVtbl->GetCount)(v15, &v14) >= 0 )
    {
      if ( v14 )
      {
        v10 = v6;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v10);
        v11 = a2;
        v12 = a3;
        v13 = v14;
        Windows::Internal::ComTaskPool::QueueTask__lambda_7aef9f6174acb3d73b407d8c046faaf1___(
          v8,
          v7,
          (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr,
          &v10);
        Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v10);
      }
    }
  }
  return Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v15);
}
