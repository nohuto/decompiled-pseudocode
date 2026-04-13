/*
 * XREFs of ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x18004186C
 * Callers:
 *     ?ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180022770 (-ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPE.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AsWeak@?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEBAJPEAVWeakRef@23@@Z @ 0x1800425F0 (-AsWeak@-$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsof.c)
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x180043B98 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1800547D8 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance(
        __int64 a1,
        __int64 a2,
        bool *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  RTL_SRWLOCK *v12; // [rsp+48h] [rbp+18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF

  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", (const unsigned __int16 *)&v12, a3);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( !(_BYTE)v12 )
  {
    a1 = 2147942405LL;
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)0x80070005LL);
  }
  v13 = 0LL;
  if ( !ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
    || ((*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(*ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
                                                          + 24LL))(
          ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak,
          &GUID_d5343860_de91_4cae_b38a_84536a72847c,
          &v13),
        (v5 = v13) == 0) )
  {
    AcquireSRWLockExclusive(&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton);
    v12 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton;
    v6 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v13 = 0LL;
    if ( !ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
      || ((*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(*ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
                                                            + 24LL))(
            ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak,
            &GUID_d5343860_de91_4cae_b38a_84536a72847c,
            &v13),
          !v13) )
    {
      v7 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl,ContentManagement::TargetedContent::Internal::ISubscriptionManager,>(&v13);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x100,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
      v8 = ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak;
      ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::ISubscriptionManager>::AsWeak(
             &v13,
             &ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x101,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v9);
    }
    ReleaseSRWLockExclusive(&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton);
    v5 = v13;
  }
  *(_QWORD *)a1 = 0LL;
  if ( (__int64 *)a1 != &v13 )
  {
    *(_QWORD *)a1 = v5;
    v5 = 0LL;
  }
  if ( v5 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
