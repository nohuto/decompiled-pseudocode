/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_56bf2cf466c511de0a79be2a3ec217ef___ @ 0x1802952B4
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x180294FEC (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV-$C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_56bf2cf466c511de0a79be2a3ec217ef___::CTaskWrapper__lambda_56bf2cf466c511de0a79be2a3ec217ef_____lambda_56bf2cf466c511de0a79be2a3ec217ef___ @ 0x180294EA4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_56bf2cf466c511de0a79be2a3ec217ef___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_56bf2cf466c511de0a79be2a3ec217ef___(
        unsigned int a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ebx
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_56bf2cf466c511de0a79be2a3ec217ef___::CTaskWrapper__lambda_56bf2cf466c511de0a79be2a3ec217ef_____lambda_56bf2cf466c511de0a79be2a3ec217ef___(
           v5,
           a2);
  v9 = v4;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunTask(
         a1,
         0,
         CurrentThreadId,
         0,
         (struct Windows::Internal::IComPoolTask *)v4,
         0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v9);
  return v7;
}
