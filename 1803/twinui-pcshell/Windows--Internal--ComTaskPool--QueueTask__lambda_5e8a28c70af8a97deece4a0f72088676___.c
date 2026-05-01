/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5e8a28c70af8a97deece4a0f72088676___ @ 0x1802942EC
 * Callers:
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1802944DC (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676___::CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676_____lambda_5e8a28c70af8a97deece4a0f72088676___ @ 0x1802940E4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5e8a28c70af8a97deece4a0f72088676___(
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
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676___::CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676_____lambda_5e8a28c70af8a97deece4a0f72088676___(
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
