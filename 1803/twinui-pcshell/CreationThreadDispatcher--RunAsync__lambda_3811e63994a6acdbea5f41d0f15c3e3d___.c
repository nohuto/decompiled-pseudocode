/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___ @ 0x18025771C
 * Callers:
 *     ?SetTransparent@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x180259B80 (-SetTransparent@AccessibilityExperienceManager@@UEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18019E400 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskto.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18019F5EC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88a1e3cfd1cd4ce67c7eaa889dfcd425_____lambda_88a1e3cfd1cd4ce67c7eaa889dfcd425___ @ 0x18025716C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88a1e3cfd1cd4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r11
  __int64 v3; // r10
  struct Windows::Internal::IComPoolTask **v4; // rax
  struct Windows::Internal::IComPoolTask *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int128 v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  struct Windows::Internal::IComPoolTask *v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  v3 = a1;
  v13 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      a2);
  v9 = *(_OWORD *)v2;
  v10 = v3;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(v3);
  v4 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88a1e3cfd1cd4ce67c7eaa889dfcd425_____lambda_88a1e3cfd1cd4ce67c7eaa889dfcd425___(
                                                    &v11,
                                                    &v9);
  v5 = *v4;
  v12 = *v4;
  *v4 = 0LL;
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = Windows::Internal::ComTaskPool::RunTask(3u, 0, 0, 0, v5, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)&v12);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  return v7;
}
