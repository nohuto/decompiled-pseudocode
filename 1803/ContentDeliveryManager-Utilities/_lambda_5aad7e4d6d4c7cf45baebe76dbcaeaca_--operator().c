/*
 * XREFs of _lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator() @ 0x1800439EC
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180048B90 (wistd--_Func_impl_wistd--_Callable_obj__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca__0__wistd--detai.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x18000462C (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014860 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdent.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180045F70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionMana.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
unsigned int __fastcall lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl **a1)
{
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v1; // rbx
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v2; // rdi
  struct Windows::Internal::IComPoolTask *v3; // rsi
  _DWORD *v4; // rax
  DWORD CurrentThreadId; // eax
  unsigned int result; // eax
  const char *v7; // r9
  int v8; // r14d
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v10; // [rsp+70h] [rbp+8h] BYREF
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v11; // [rsp+78h] [rbp+10h]
  __int64 v12; // [rsp+80h] [rbp+18h]
  struct Windows::Internal::IComPoolTask *v13; // [rsp+88h] [rbp+20h]

  try
  {
    v1 = *a1;
    v11 = v1;
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef((__int64)v1);
    v2 = v1;
    v10 = v1;
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef((__int64)v1);
    v3 = 0LL;
    v12 = 0LL;
    v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      *(_QWORD *)v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
      v4[3] = 1;
      *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v1 = v11;
        v2 = v10;
      }
      *(_QWORD *)v4 = off_1800D32C0;
      *((_QWORD *)v4 + 2) = 0LL;
      if ( v4 + 4 != (_DWORD *)&v10 )
      {
        *((_QWORD *)v4 + 2) = v1;
        v2 = 0LL;
        v10 = 0LL;
      }
      v3 = (struct Windows::Internal::IComPoolTask *)v4;
    }
    v13 = v3;
    CurrentThreadId = GetCurrentThreadId();
    result = Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, 0, v3, 0LL);
    v8 = result;
    if ( v3 )
      result = (*(__int64 (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v3 + 16LL))(v3);
    if ( v2 )
      result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v2);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v8);
      JUMPOUT(0x180043B2ALL);
    }
    if ( v1 )
      result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x38,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
             v7);
  }
  return result;
}
