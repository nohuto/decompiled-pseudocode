/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_36f90b150dc01683a198557705191dd2___ @ 0x18029A8E0
 * Callers:
 *     ?ShowContextMenu@AccessibleElementBase@@UEAAJXZ @ 0x18029BFC0 (-ShowContextMenu@AccessibleElementBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_36f90b150dc01683a198557705191dd2_____lambda_36f90b150dc01683a198557705191dd2___ @ 0x18029A7BC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_36f90b150dc01.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_36f90b150dc01683a198557705191dd2___(
        __int64 a1,
        _QWORD *a2)
{
  void **v2; // rax
  void *v3; // rbx
  __int64 v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  void *v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = (void **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_36f90b150dc01683a198557705191dd2_____lambda_36f90b150dc01683a198557705191dd2___(
                  &v8,
                  a2);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v8;
  v9 = v3;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunTask(
         2u,
         0,
         CurrentThreadId,
         0,
         (struct Windows::Internal::IComPoolTask *)v3,
         0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v9);
  return v6;
}
