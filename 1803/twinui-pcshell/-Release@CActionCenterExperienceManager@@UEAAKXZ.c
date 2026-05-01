/*
 * XREFs of ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x18007C390
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B130 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceDispatcher_____ptr64__Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::IShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64___lambda_2ece1860f81236f256546f74fbbd71d4___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64_::Invoke @ 0x180069530 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180069530.c)
 *     _lambda_16dbbe28c6f74937ed7301029aac4a5a_::operator() @ 0x18006EEE0 (_lambda_16dbbe28c6f74937ed7301029aac4a5a_--operator().c)
 *     ?Release@CActionCenterExperienceManager@@WBI@EAAKXZ @ 0x1800A4B00 (-Release@CActionCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCA@EAAKXZ @ 0x1800A4B10 (-Release@CActionCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCI@EAAKXZ @ 0x1800A4B20 (-Release@CActionCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDI@EAAKXZ @ 0x1800A4B30 (-Release@CActionCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x1800A4B40 (-Release@CActionCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WFA@EAAKXZ @ 0x1800A4B50 (-Release@CActionCenterExperienceManager@@WFA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@W7EAAKXZ @ 0x1800A4B60 (-Release@CActionCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBA@EAAKXZ @ 0x1800A4B70 (-Release@CActionCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDA@EAAKXZ @ 0x1800A4B80 (-Release@CActionCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEI@EAAKXZ @ 0x1800A4B90 (-Release@CActionCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801530D0 (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 *     ??1?$ComPtr@VCActionCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801534B4 (--1-$ComPtr@VCActionCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::Release(CActionCenterExperienceManager *this)
{
  signed __int64 v1; // rax
  CActionCenterExperienceManager *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 12);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 12, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(CActionCenterExperienceManager *, __int64))(*(_QWORD *)v2 + 48LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
