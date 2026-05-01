/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___ @ 0x1800916F8
 * Callers:
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180052D20 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e_____lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___ @ 0x180091760 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0013fddd9b766.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___()
{
  struct Windows::Internal::IComPoolTask **v0; // rax
  struct Windows::Internal::IComPoolTask *v1; // rbx
  __int64 v2; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF
  struct Windows::Internal::IComPoolTask *v7; // [rsp+68h] [rbp+20h] BYREF

  v0 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e_____lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___(&v6);
  v1 = *v0;
  v7 = *v0;
  *v0 = 0LL;
  v2 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunTask(3u, 0, CurrentThreadId, 0, v1, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)&v7);
  return v4;
}
