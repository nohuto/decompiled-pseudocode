/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_303ac4679a068f1792b4af8a56f031e3___ @ 0x180004D54
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_2dd20bac4e5d2f5df658143d4108a795___ @ 0x18000F430 (CIAMGlobals--QueueViewManagementTask__lambda_2dd20bac4e5d2f5df658143d4108a795___.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3_____lambda_303ac4679a068f1792b4af8a56f031e3___ @ 0x180005014 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___--CTaskW.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_303ac4679a068f1792b4af8a56f031e3___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v6; // rbx
  void *v7; // rax
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[1] = -2LL;
  v6 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3_____lambda_303ac4679a068f1792b4af8a56f031e3___(
           v7,
           a4);
  v10[0] = v6;
  v8 = Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, a3);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v10);
  return v8;
}
