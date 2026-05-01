/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5c3eee82b519ba7ea88c1ca71d1d9821___ @ 0x1801EEE18
 * Callers:
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1801F2894 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c3eee82b519ba7ea88c1ca71d1d9821_____lambda_5c3eee82b519ba7ea88c1ca71d1d9821___ @ 0x1801EE860 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c3eee82b519b.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5c3eee82b519ba7ea88c1ca71d1d9821___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct Windows::Internal::IComPoolTask **v5; // rax
  struct Windows::Internal::IComPoolTask *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  void *v11[4]; // [rsp+38h] [rbp-20h] BYREF

  v11[1] = (void *)-2LL;
  v5 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c3eee82b519ba7ea88c1ca71d1d9821_____lambda_5c3eee82b519ba7ea88c1ca71d1d9821___(
                                                    &v10,
                                                    a4);
  v6 = *v5;
  v11[0] = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = Windows::Internal::ComTaskPool::RunTask(3u, 2u, a3, 0, v6, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v11);
  return v8;
}
