/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___ @ 0x1800A0E38
 * Callers:
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18023CC54 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___::CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa_____lambda_65c0f5c4ae095b6c4d2379132d65e3aa___ @ 0x1800A07AC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx
  void *v4; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ebx
  void *v8; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v3 = (void *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___::CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa_____lambda_65c0f5c4ae095b6c4d2379132d65e3aa___(
                   (__int64)v4,
                   a2);
  v8 = v3;
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunTask(
         0,
         0,
         CurrentThreadId,
         0,
         (struct Windows::Internal::IComPoolTask *)v3,
         0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v8);
  return v6;
}
