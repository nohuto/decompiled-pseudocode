/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___ @ 0x180294460
 * Callers:
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x1802946E8 (AsyncFrameEvents--_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1___::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1_____lambda_ef7de59b871356849767509ee3a2e4d1___ @ 0x180294210 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1___::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1_____lambda_ef7de59b871356849767509ee3a2e4d1___(
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
