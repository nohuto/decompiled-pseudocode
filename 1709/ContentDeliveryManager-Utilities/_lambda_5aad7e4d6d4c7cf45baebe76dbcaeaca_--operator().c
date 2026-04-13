/*
 * XREFs of _lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator() @ 0x180040120
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180044E60 (wistd--_Func_impl_wistd--_Callable_obj__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca__0__ea_180044E60.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004378 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042710 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionMana.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()(volatile signed __int64 **a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  struct Windows::Internal::IComPoolTask *v6; // rdi
  _DWORD *v7; // rax
  DWORD CurrentThreadId; // eax
  int v9; // esi
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile signed __int64 *v12; // [rsp+70h] [rbp+8h]
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v13; // [rsp+78h] [rbp+10h] BYREF
  signed __int64 v14; // [rsp+80h] [rbp+18h]
  signed __int64 v15; // [rsp+88h] [rbp+20h]

  try
  {
    v1 = *a1;
    v12 = *a1;
    if ( *a1 )
    {
      v2 = *((_QWORD *)v1 + 9);
      v14 = v2;
      while ( v2 >= 0 )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64(v1 + 9, v2 + 1, v2);
        if ( v3 == v2 )
          goto LABEL_7;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 16));
LABEL_7:
      v1 = v12;
    }
    v13 = (ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)v1;
    if ( v1 )
    {
      v4 = *((_QWORD *)v1 + 9);
      v15 = v4;
      while ( v4 >= 0 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64(v1 + 9, v4 + 1, v4);
        if ( v5 == v4 )
          goto LABEL_13;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v4 + 16));
LABEL_13:
      v1 = v12;
    }
    v6 = 0LL;
    v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v7 )
    {
      *(_QWORD *)v7 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
      v7[3] = 1;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v1 = v12;
      }
      *(_QWORD *)v7 = off_1800C4F60;
      *((_QWORD *)v7 + 2) = 0LL;
      if ( v7 + 4 != (_DWORD *)&v13 )
      {
        *((_QWORD *)v7 + 2) = v1;
        v13 = 0LL;
      }
      v6 = (struct Windows::Internal::IComPoolTask *)v7;
    }
    CurrentThreadId = GetCurrentThreadId();
    v9 = Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, 0, v6, 0LL);
    if ( v6 )
      (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v13);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v9);
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)v1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x38,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      v10);
  }
}
