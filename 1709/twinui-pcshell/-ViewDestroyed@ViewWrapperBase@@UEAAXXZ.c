/*
 * XREFs of ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x18013DF80
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18012C6BC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA-AW4.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1801420B8 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ??$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x180143FF4 (--$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_04ffc410d54a5b59f3cef8d5da6c5c21___ @ 0x180144228 (Windows--Internal--ComTaskPool--QueueTask__lambda_04ffc410d54a5b59f3cef8d5da6c5c21___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ViewWrapperBase::ViewDestroyed(ViewWrapperBase *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  char *v6; // [rsp+38h] [rbp-18h] BYREF
  char *v7; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  PCWSTR StringRawBuffer; // [rsp+80h] [rbp+30h] BYREF
  PCWSTR v10; // [rsp+88h] [rbp+38h] BYREF
  PSRWLOCK SRWLock; // [rsp+90h] [rbp+40h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 20), 0LL);
  v10 = WindowsGetStringRawBuffer(*((HSTRING *)this + 19), 0LL);
  ViewManagerInteropTraceLogging::ViewWrapperDestroyed<unsigned int &,unsigned short const *,unsigned short const *>(
    (char *)this + 148,
    &v10,
    &StringRawBuffer);
  (*(void (__fastcall **)(ViewWrapperBase *, _QWORD, __int64))(*(_QWORD *)this + 696LL))(this, 0LL, 1LL);
  (*(void (__fastcall **)(ViewWrapperBase *, __int64, __int64))(*(_QWORD *)this + 696LL))(this, 1LL, 1LL);
  ViewEventDispatcher::AcquireLockExclusive(*((RTL_SRWLOCK **)this + 21), &SRWLock);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 184LL))((char *)this - 8);
  v2 = *((_QWORD *)this + 32);
  if ( v2 )
    ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange((char *)this - 8, v2, 1LL);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetCachedFeatureEnabledState();
  LODWORD(StringRawBuffer) = 0;
  BYTE4(StringRawBuffer) = 3;
  LODWORD(v10) = 0;
  WORD2(v10) = WORD2(StringRawBuffer);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    0x84350Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v10,
    1,
    3);
  if ( this != (ViewWrapperBase *)8 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 8LL))((char *)this - 8);
  v6 = (char *)this - 8;
  v7 = (char *)this - 8;
  v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_04ffc410d54a5b59f3cef8d5da6c5c21___(v3, &v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v4);
  if ( v7 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
  v5 = *((_QWORD *)this + 23);
  if ( v5 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
