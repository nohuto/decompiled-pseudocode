/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_281168bc4fef0a369225048757561f78___ @ 0x1801D1C70
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1801D70E4 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_281168bc4fef0a369225048757561f78_____lambda_281168bc4fef0a369225048757561f78___ @ 0x1801D12E8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_281168bc4fef0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_281168bc4fef0a369225048757561f78___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  struct Windows::Internal::IComPoolTask **v7; // rax
  struct Windows::Internal::IComPoolTask *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  void *v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[1] = (void *)-2LL;
  v7 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_281168bc4fef0a369225048757561f78_____lambda_281168bc4fef0a369225048757561f78___(
                                                    &a5,
                                                    a6);
  v8 = *v7;
  v12[0] = *v7;
  *v7 = 0LL;
  v9 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = Windows::Internal::ComTaskPool::RunTask(3u, 0, a3, 0x3E80u, v8, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v12);
  return v10;
}
