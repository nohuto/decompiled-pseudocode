/*
 * XREFs of ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x180045138
 * Callers:
 *     ?ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800257A0 (-ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPE.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AsWeak@?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEBAJPEAVWeakRef@23@@Z @ 0x180045E44 (-AsWeak@-$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsof.c)
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x180047708 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180058550 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance(
        __int64 *a1,
        __int64 a2,
        bool *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  RTL_SRWLOCK *v13; // [rsp+48h] [rbp+18h] BYREF
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF

  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", (const unsigned __int16 *)&v13, a3);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( !(_BYTE)v13 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)0x80070005LL);
    goto LABEL_21;
  }
  v14 = 0LL;
  if ( !ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
    || ((*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(*ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
                                                          + 24LL))(
          ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak,
          &GUID_d5343860_de91_4cae_b38a_84536a72847c,
          &v14),
        (v5 = v14) == 0) )
  {
    AcquireSRWLockExclusive(&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton);
    v13 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton;
    v6 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v14 = 0LL;
    if ( ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak )
    {
      (*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(*ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
                                                        + 24LL))(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak,
        &GUID_d5343860_de91_4cae_b38a_84536a72847c,
        &v14);
      if ( v14 )
        goto LABEL_13;
    }
    v7 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl,ContentManagement::TargetedContent::Internal::ISubscriptionManager,>(&v14);
    v8 = retaddr;
    if ( v7 >= 0 )
    {
      v9 = ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak;
      ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::ISubscriptionManager>::AsWeak(
              &v14,
              &ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x101,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v10);
        JUMPOUT(0x180045306LL);
      }
LABEL_13:
      ReleaseSRWLockExclusive(&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton);
      v5 = v14;
      goto LABEL_14;
    }
LABEL_21:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x100,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
LABEL_14:
  *a1 = 0LL;
  if ( a1 != &v14 )
  {
    *a1 = v5;
    v5 = 0LL;
  }
  if ( v5 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
