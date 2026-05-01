/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_90df9b04abdace81241a7a17f06e4af1___ @ 0x1802575AC
 * Callers:
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180259514 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_90df9b04abdace81241a7a17f06e4af1_____lambda_90df9b04abdace81241a7a17f06e4af1___ @ 0x180257200 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_90df9b04abdac.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_90df9b04abdace81241a7a17f06e4af1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  struct Windows::Internal::IComPoolTask **v4; // rax
  struct Windows::Internal::IComPoolTask *v5; // rbx
  __int64 v6; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // ebx
  void *v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v10[1] = (void *)-2LL;
  v4 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_90df9b04abdace81241a7a17f06e4af1_____lambda_90df9b04abdace81241a7a17f06e4af1___(
                                                    &v11,
                                                    a4);
  v5 = *v4;
  v10[0] = *v4;
  *v4 = 0LL;
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  CurrentThreadId = GetCurrentThreadId();
  v8 = Windows::Internal::ComTaskPool::RunTask(3u, 0, CurrentThreadId, 0x7D0u, v5, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v10);
  return v8;
}
