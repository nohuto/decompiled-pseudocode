/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_6c2381c8148a5bf607d7998e82322cb8___ @ 0x180295330
 * Callers:
 *     ?ContextMenuInvoked@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@I@Z @ 0x1802955D0 (-ContextMenuInvoked@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8_____lambda_6c2381c8148a5bf607d7998e82322cb8___ @ 0x180294F10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_6c2381c8148a5bf607d7998e82322cb8___(
        unsigned int a1,
        __int64 a2)
{
  void *v4; // rbx
  void *v5; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ebx
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = (void *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8_____lambda_6c2381c8148a5bf607d7998e82322cb8___(
                   (__int64)v5,
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
