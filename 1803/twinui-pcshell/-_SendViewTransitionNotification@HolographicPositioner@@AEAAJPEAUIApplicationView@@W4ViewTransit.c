/*
 * XREFs of ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1801B3734
 * Callers:
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B3868 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B3A10 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004E770 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4fd3127ed7710849848c55d6ef740a2d___ @ 0x18009EB1C (Windows--Internal--ComTaskPool--QueueTask__lambda_4fd3127ed7710849848c55d6ef740a2d___.c)
 *     _lambda_4fd3127ed7710849848c55d6ef740a2d_::__lambda_4fd3127ed7710849848c55d6ef740a2d_ @ 0x18009EE04 (_lambda_4fd3127ed7710849848c55d6ef740a2d_--__lambda_4fd3127ed7710849848c55d6ef740a2d_.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_SendViewTransitionNotification(
        __int64 a1,
        CWinRTApplicationView *a2,
        int a3)
{
  struct IObjectArray *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  CWinRTApplicationView *v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12[2]; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-8h]
  int v14; // [rsp+70h] [rbp+20h] BYREF
  struct IObjectArray *v15; // [rsp+88h] [rbp+38h] BYREF

  v11[1] = -2LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v15);
  if ( (int)AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 360), &v15) >= 0 )
  {
    v6 = v15;
    if ( ((int (__fastcall *)(struct IObjectArray *, int *))v15->lpVtbl->GetCount)(v15, &v14) >= 0 )
    {
      if ( v14 )
      {
        if ( a1 )
          v11[0] = a1 + 120;
        else
          v11[0] = 0LL;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v11);
        v10 = a2;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v10);
        v12[0] = (__int64)v6;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v12);
        v12[1] = (__int64)a2;
        v10 = 0LL;
        v13 = a3;
        Windows::Internal::ComTaskPool::QueueTask__lambda_4fd3127ed7710849848c55d6ef740a2d___(
          v8,
          v7,
          *(_DWORD *)(a1 + 400),
          (__int64)v12);
        lambda_4fd3127ed7710849848c55d6ef740a2d_::__lambda_4fd3127ed7710849848c55d6ef740a2d_((__int64)v12);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
      }
    }
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v15);
  return 0LL;
}
