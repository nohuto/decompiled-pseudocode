/*
 * XREFs of ?Unregister@?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@QEAAXXZ @ 0x180237BCC
 * Callers:
 *     ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x180237B94 (-Unregister@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VAppli.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18013CEE4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??4?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180234EEC (--4-$unique_ptr@VSmartCookie@@U-$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::Unregister(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  SmartCookie *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  SmartCookie *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (RTL_SRWLOCK *)(a1 + 56);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 56));
  SafeRelease<IShellItemArray>(a1 + 64);
  std::unique_ptr<SmartCookie>::operator=(&v6, (SmartCookie **)(a1 + 48));
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v3 = v6;
  SmartCookie::Unregister(v6);
  if ( v3 )
  {
    SmartCookie::Unregister(v3);
    wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
      (__int64)v3,
      v4);
    wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
      (__int64)v3,
      v5);
    operator delete(v3, (const struct std::nothrow_t *)0x78);
  }
}
