/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___ @ 0x180216574
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180216E80 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d4fab6c161d4dc93915730d1208882c___::CTaskWrapper__lambda_7d4fab6c161d4dc93915730d1208882c_____lambda_7d4fab6c161d4dc93915730d1208882c___ @ 0x180216224 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7d4fab6c161d4dc93915730d1208882c___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ebx
  void *v8; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v3 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d4fab6c161d4dc93915730d1208882c___::CTaskWrapper__lambda_7d4fab6c161d4dc93915730d1208882c_____lambda_7d4fab6c161d4dc93915730d1208882c___(
           v4,
           a2);
  v8 = v3;
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunTask(
         2u,
         0,
         CurrentThreadId,
         0,
         (struct Windows::Internal::IComPoolTask *)v3,
         0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v8);
  return v6;
}
