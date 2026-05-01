/*
 * XREFs of ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x18028C9E0
 * Callers:
 *     ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x18027EAE0 (-InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9_____lambda_b42749407685350f498990f0e2f6d0f9___ @ 0x18028C4AC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___--CTaskW.c)
 */

void __fastcall CMultitaskingViewControllerBase::InvokeSwitchItem(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2)
{
  IUnknown *v4; // rbx
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  DWORD CurrentThreadId; // eax
  IUnknown *v8; // [rsp+30h] [rbp-10h] BYREF
  CWinRTApplicationView *v9; // [rsp+38h] [rbp-8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  IUnknown *v11; // [rsp+68h] [rbp+28h] BYREF
  CWinRTApplicationView *v12; // [rsp+70h] [rbp+30h] BYREF
  void *v13; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  (**(void (__fastcall ***)(struct ISwitchItem *, GUID *, __int64 *))a2)(
    a2,
    &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
    &v10);
  (*(void (__fastcall **)(__int64, CWinRTApplicationView **))(*(_QWORD *)v10 + 24LL))(v10, &v12);
  v11 = (IUnknown *)*((_QWORD *)this + 4);
  v4 = v11;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
  CoAllowSetForegroundWindow(v4, 0LL);
  v8 = v4;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
  v9 = v12;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v9);
  v5 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9_____lambda_b42749407685350f498990f0e2f6d0f9___(
           v6,
           &v8);
  v13 = v5;
  CurrentThreadId = GetCurrentThreadId();
  Windows::Internal::ComTaskPool::RunTask(1u, 0, CurrentThreadId, 0, (struct Windows::Internal::IComPoolTask *)v5, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
