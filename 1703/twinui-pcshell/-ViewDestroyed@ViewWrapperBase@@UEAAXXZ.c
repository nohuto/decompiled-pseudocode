/*
 * XREFs of ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180113CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180101F0C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA-AW4.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180117638 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ??$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x180119620 (--$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_0b4e5891bfe32cdf355ef1d0f41df519___ @ 0x18011A22C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_0b4e5891bfe32cdf355ef1d0f41df519___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewWrapperBase::ViewDestroyed(ViewWrapperBase *this)
{
  __int64 v2; // rdx
  IUnknown *v3; // rbx
  DWORD CurrentThreadId; // eax
  int v5; // ebx
  PCWSTR v6; // rcx
  __int64 v7; // rcx
  char *v8; // [rsp+38h] [rbp-18h] BYREF
  char *v9; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  PCWSTR StringRawBuffer; // [rsp+70h] [rbp+20h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+28h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 17), 0LL);
  SRWLock = (PSRWLOCK)WindowsGetStringRawBuffer(*((HSTRING *)this + 16), 0LL);
  ViewManagerInteropTraceLogging::ViewWrapperDestroyed<unsigned int &,unsigned short const *,unsigned short const *>(
    (char *)this + 124,
    &SRWLock,
    &StringRawBuffer);
  (*(void (__fastcall **)(ViewWrapperBase *, _QWORD, __int64))(*(_QWORD *)this + 696LL))(this, 0LL, 1LL);
  (*(void (__fastcall **)(ViewWrapperBase *, __int64, __int64))(*(_QWORD *)this + 696LL))(this, 1LL, 1LL);
  ViewEventDispatcher::AcquireLockExclusive(*((RTL_SRWLOCK **)this + 18), &SRWLock);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 184LL))((char *)this - 8);
  v2 = *((_QWORD *)this + 29);
  if ( v2 )
    ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange((char *)this - 8, v2, 1LL);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetCachedFeatureEnabledState();
  LODWORD(v8) = 0;
  BYTE4(v8) = 3;
  LODWORD(StringRawBuffer) = 0;
  WORD2(StringRawBuffer) = WORD2(v8);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    0x84350Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&StringRawBuffer,
    1,
    3);
  if ( this != (ViewWrapperBase *)8 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 8LL))((char *)this - 8);
  v8 = (char *)this - 8;
  v9 = (char *)this - 8;
  v3 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_0b4e5891bfe32cdf355ef1d0f41df519___(
                       &StringRawBuffer,
                       &v8);
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v3, 0LL);
  v6 = StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21C,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v5);
  if ( v9 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
