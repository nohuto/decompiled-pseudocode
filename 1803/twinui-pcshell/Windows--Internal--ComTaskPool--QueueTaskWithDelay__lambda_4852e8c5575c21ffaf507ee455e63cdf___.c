/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___ @ 0x1802D9CE4
 * Callers:
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x1802DC920 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf_____lambda_af32df4a401f889ca6e3593a0d1a6fcf___ @ 0x1802D9A98 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af32df4a401f8.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___(
        __int64 a1,
        DWORD a2,
        _QWORD *a3,
        _QWORD *a4)
{
  void **v6; // rax
  void *v7; // rbx
  __int64 v8; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  void *v13; // [rsp+38h] [rbp-10h] BYREF

  v6 = (void **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf_____lambda_af32df4a401f889ca6e3593a0d1a6fcf___(
                  &v12,
                  a4);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v12;
  v13 = v7;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  CurrentThreadId = GetCurrentThreadId();
  v10 = Windows::Internal::ComTaskPool::RunTask(
          2u,
          0,
          CurrentThreadId,
          a2,
          (struct Windows::Internal::IComPoolTask *)v7,
          a3);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v13);
  return v10;
}
