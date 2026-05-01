/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x180257800
 * Callers:
 *     ?SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z @ 0x180259C70 (-SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18019E400 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskto.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18019F5EC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170_____lambda_e5ec5a2f5be6774a4b968c7ab4405170___ @ 0x180256E4C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r11
  __int64 v3; // r10
  void *v4; // rbx
  void *v5; // rax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]
  __int64 v10[3]; // [rsp+50h] [rbp-18h] BYREF
  void *v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  v3 = a1;
  v12 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      a2);
  v8 = *(_OWORD *)v2;
  v9 = *((_QWORD *)v2 + 2);
  v10[0] = v3;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(v3);
  v4 = 0LL;
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = (void *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170_____lambda_e5ec5a2f5be6774a4b968c7ab4405170___(
                   (__int64)v5,
                   (__int64)&v8);
  v11 = v4;
  v6 = Windows::Internal::ComTaskPool::RunTask(3u, 0, 0, 0, (struct Windows::Internal::IComPoolTask *)v4, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  return v6;
}
