/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___ @ 0x18026B6DC
 * Callers:
 *     ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x18026BB0C (-UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5dc897b16d2ec62a0cb4f80858627a7d_____lambda_5dc897b16d2ec62a0cb4f80858627a7d___ @ 0x18026B648 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5dc897b16d2ec.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  void **v5; // rax
  void *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  void *v11; // [rsp+38h] [rbp-10h] BYREF

  v5 = (void **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5dc897b16d2ec62a0cb4f80858627a7d_____lambda_5dc897b16d2ec62a0cb4f80858627a7d___(
                  &v10,
                  a4);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  v11 = v6;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = Windows::Internal::ComTaskPool::RunTask(3u, 2u, a3, 0, (struct Windows::Internal::IComPoolTask *)v6, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v11);
  return v8;
}
