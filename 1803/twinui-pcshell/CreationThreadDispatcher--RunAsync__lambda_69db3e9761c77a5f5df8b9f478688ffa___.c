/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x18021A168
 * Callers:
 *     ?OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z @ 0x18021E9A4 (-OnContainerNavigate@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18019E400 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskto.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18019F5EC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07___::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07_____lambda_70ef6d486f3f96eaef07ad25d0a0dd07___ @ 0x1802196A4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07___--CTaskW.c)
 *     _lambda_69db3e9761c77a5f5df8b9f478688ffa_::_lambda_69db3e9761c77a5f5df8b9f478688ffa_ @ 0x18021AEC8 (_lambda_69db3e9761c77a5f5df8b9f478688ffa_--_lambda_69db3e9761c77a5f5df8b9f478688ffa_.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  unsigned int v6; // ebx
  __int64 v8[4]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF
  void *v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h]
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v11 = a2;
  v12 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      (volatile int *)a2);
  lambda_69db3e9761c77a5f5df8b9f478688ffa_::_lambda_69db3e9761c77a5f5df8b9f478688ffa_(v8, a2);
  v9 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(a1);
  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07___::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07_____lambda_70ef6d486f3f96eaef07ad25d0a0dd07___(
           v5,
           (__int64)v8);
  v10 = v4;
  v6 = Windows::Internal::ComTaskPool::RunTask(3u, 0, 0, 0, (struct Windows::Internal::IComPoolTask *)v4, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v9);
  __abi_winrt_ptr_dtor(v8[1]);
  __abi_winrt_ptr_dtor(v8[0]);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 8));
  __abi_winrt_ptr_dtor(*(_QWORD *)a2);
  return v6;
}
