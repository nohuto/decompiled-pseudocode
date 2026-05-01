/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___ @ 0x180093070
 * Callers:
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180031B50 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c_____lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___ @ 0x1800930F0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_eaf4aa4ef6c2d.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        DWORD a4,
        __int64 a5,
        __int64 a6)
{
  struct Windows::Internal::IComPoolTask **v8; // rax
  struct Windows::Internal::IComPoolTask *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  void *v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v13[1] = (void *)-2LL;
  v8 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c_____lambda_eaf4aa4ef6c2d6c3d4158ecad1bd325c___(
                                                    &a5,
                                                    a6);
  v9 = *v8;
  v13[0] = *v8;
  *v8 = 0LL;
  v10 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = Windows::Internal::ComTaskPool::RunTask(3u, 0, a3, a4, v9, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v13);
  return v11;
}
