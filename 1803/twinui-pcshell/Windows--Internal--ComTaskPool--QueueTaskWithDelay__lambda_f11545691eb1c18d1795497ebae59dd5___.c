/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_f11545691eb1c18d1795497ebae59dd5___ @ 0x18022553C
 * Callers:
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802256AC (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f11545691eb1c18d1795497ebae59dd5_____lambda_f11545691eb1c18d1795497ebae59dd5___ @ 0x1802251C0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f11545691eb1c.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_f11545691eb1c18d1795497ebae59dd5___(
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
  v4 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f11545691eb1c18d1795497ebae59dd5_____lambda_f11545691eb1c18d1795497ebae59dd5___(
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
