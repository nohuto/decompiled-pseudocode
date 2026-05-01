/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___ @ 0x1802D9D6C
 * Callers:
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1802DB3F0 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae_____lambda_5edf705d134c8accffeb71d7188806ae___ @ 0x1802D9B20 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5edf705d134c8.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  void **v5; // rax
  void *v6; // rbx
  __int64 v7; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  void *v12; // [rsp+38h] [rbp-10h] BYREF

  v5 = (void **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae_____lambda_5edf705d134c8accffeb71d7188806ae___(
                  &v11,
                  a4);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v11;
  v12 = v6;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = Windows::Internal::ComTaskPool::RunTask(
         2u,
         0,
         CurrentThreadId,
         0xA6u,
         (struct Windows::Internal::IComPoolTask *)v6,
         a3);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v12);
  return v9;
}
