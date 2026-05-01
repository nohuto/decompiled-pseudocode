/*
 * XREFs of ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180052D20
 * Callers:
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180035B2C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 * Callees:
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18004EC5C (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180052E80 (-OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledR.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___ @ 0x1800916F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___.c)
 *     ??$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x180094E18 (--$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180095448 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4Reporti.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ViewWrapperBase::ViewDestroyed(HSTRING *this)
{
  void (__fastcall *v2)(HSTRING *, _QWORD, __int64); // rax
  void (__fastcall *v3)(HSTRING *, __int64, __int64); // rax
  RTL_SRWLOCK *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  HSTRING *v8; // [rsp+28h] [rbp-18h] BYREF
  HSTRING *v9; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  PCWSTR StringRawBuffer; // [rsp+60h] [rbp+20h] BYREF
  PCWSTR v12; // [rsp+68h] [rbp+28h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(this[19], 0LL);
  v12 = WindowsGetStringRawBuffer(this[18], 0LL);
  ViewManagerInteropTraceLogging::ViewWrapperDestroyed<unsigned int &,unsigned short const *,unsigned short const *>(
    (char *)this + 140,
    &v12,
    &StringRawBuffer);
  v2 = (void (__fastcall *)(HSTRING *, _QWORD, __int64))*((_QWORD *)*this + 91);
  if ( (char *)v2 == (char *)ViewWrapperBase::OperationRequestComplete )
    ViewWrapperBase::OperationRequestComplete(this, 0LL, 1LL);
  else
    v2(this, 0LL, 1LL);
  v3 = (void (__fastcall *)(HSTRING *, __int64, __int64))*((_QWORD *)*this + 91);
  if ( (char *)v3 == (char *)ViewWrapperBase::OperationRequestComplete )
    ViewWrapperBase::OperationRequestComplete(this, 1LL, 1LL);
  else
    v3(this, 1LL, 1LL);
  v4 = (RTL_SRWLOCK *)(this[20] + 74);
  AcquireSRWLockExclusive(v4);
  v12 = (PCWSTR)v4;
  (*((void (__fastcall **)(char *))*(this - 1) + 23))((char *)this - 8);
  v5 = (__int64)this[32];
  if ( v5 )
    ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)(this - 1), v5, 1);
  wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::ReportUsageToService();
  StringRawBuffer = (PCWSTR)(this - 1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(&StringRawBuffer);
  v8 = this - 1;
  v9 = this - 1;
  StringRawBuffer = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&StringRawBuffer);
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___(v6, &v8);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      -2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 23);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
