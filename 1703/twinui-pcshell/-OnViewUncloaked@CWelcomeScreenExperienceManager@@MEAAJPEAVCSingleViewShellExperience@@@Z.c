/*
 * XREFs of ?OnViewUncloaked@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B2E20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18005F9D4 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B0FD0 (-Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?WelcomeScreenShown@WelcomeScreenExperienceManagerTelemetry@@SAXXZ @ 0x1800B2664 (-WelcomeScreenShown@WelcomeScreenExperienceManagerTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWelcomeScreenExperienceManager::OnViewUncloaked(
        CWelcomeScreenExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  RTL_SRWLOCK *v3; // r14
  RTL_SRWLOCK *v4; // rcx
  char *v5; // rbp
  RTL_SRWLOCK v6; // rbx
  signed __int32 v7; // eax
  signed __int32 v8; // eax
  struct IUnknown **i; // rdi
  int v10; // eax
  int v11; // esi
  const struct _TlgProvider_t *v12; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF

  WelcomeScreenExperienceManagerTelemetry::WelcomeScreenShown();
  v3 = (RTL_SRWLOCK *)((char *)this + 8);
  v4 = (RTL_SRWLOCK *)((char *)this + 16);
  v5 = (char *)this - 64;
  v6.Ptr = 0LL;
  wil::srwlock::lock_exclusive(v4, &SRWLock);
  if ( v3->Ptr )
  {
    v6.Ptr = v3->Ptr;
    do
      v7 = *((_DWORD *)v6.Ptr + 3);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)v6.Ptr + 3, v7 + 1, v7) );
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6.Ptr )
  {
    do
      v8 = *((_DWORD *)v6.Ptr + 3);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)v6.Ptr + 3, v8 + 1, v8) );
    for ( i = (struct IUnknown **)*((_QWORD *)v6.Ptr + 2); i != *((struct IUnknown ***)v6.Ptr + 3); ++i )
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, char *, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, v5, 0LL);
      v11 = v10;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 0LL, 0LL);
        if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            v3,
            *i);
      }
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6.Ptr);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6.Ptr);
  }
  v12 = WelcomeScreenExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v12 > 5u )
    TlgWrite(v12, &unk_1801FBCE9, 0LL, 0LL, 2u, &pData);
  return 0LL;
}
