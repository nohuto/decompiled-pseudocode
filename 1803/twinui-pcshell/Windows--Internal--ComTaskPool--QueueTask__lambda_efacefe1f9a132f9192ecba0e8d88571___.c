/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_efacefe1f9a132f9192ecba0e8d88571___ @ 0x180135EA8
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_f3e3e2fda0c649fac664c2d9a1540e88___ @ 0x180136304 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_f3e3e2fda0c649fac664c2d9a1540e88___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efacefe1f9a132f9192ecba0e8d88571_____lambda_efacefe1f9a132f9192ecba0e8d88571___ @ 0x180135AAC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_efacefe1f9a13.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_efacefe1f9a132f9192ecba0e8d88571___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  struct Windows::Internal::IComPoolTask **v5; // rax
  struct Windows::Internal::IComPoolTask *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  void *v11[4]; // [rsp+38h] [rbp-20h] BYREF

  v11[1] = (void *)-2LL;
  v5 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efacefe1f9a132f9192ecba0e8d88571_____lambda_efacefe1f9a132f9192ecba0e8d88571___(
                                                    &v10,
                                                    a4);
  v6 = *v5;
  v11[0] = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = Windows::Internal::ComTaskPool::RunTask(3u, 2u, a3, 0, v6, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v11);
  return v8;
}
