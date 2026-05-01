/*
 * XREFs of ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x18018C650
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x18018AAF8 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     ??$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z @ 0x18018E5D0 (--$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z.c)
 *     ??$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018EB0C (--$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        unsigned int a3)
{
  _DWORD *v4; // rdi
  char v5; // al
  unsigned int v6; // r8d
  struct _TP_TIMER **v7; // rcx
  HANDLE v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  void *v11; // rsi
  int v13; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v14; // [rsp+30h] [rbp-18h]
  char v15; // [rsp+38h] [rbp-10h]
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  v4 = (_DWORD *)((char *)this + 64);
  v13 = *((_DWORD *)this + 16);
  v14 = this;
  v15 = 1;
  v16 = a3;
  v5 = 0;
  if ( a3 == -2147009295 || a3 == -2144927148 )
    v5 = 1;
  *((_BYTE *)this + 961) = v5;
  v6 = a3 >> 31;
  *((_BYTE *)this + 963) = v6;
  if ( v5 || *((_BYTE *)this + 962) || (_BYTE)v6 )
  {
    v7 = (struct _TP_TIMER **)((char *)this + 944);
    if ( *v7 )
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v7,
        0LL);
    v8 = OpenEventW(2u, 0, L"ShellSearchReadyEvent");
    v11 = v8;
    if ( v8 )
    {
      SetEvent(v8);
      CloseHandle(v11);
    }
    StartWindowTelemetry::StartRunningWithoutCortana<long>(&v16, v9, v10);
    if ( *v4 == 2 || *v4 == 19 )
    {
      XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
    }
    else if ( *v4 == 6 )
    {
      *v4 = 0;
    }
  }
  v15 = 0;
  StartWindowTelemetry::OnCortanaLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v13,
    v4);
  return 0LL;
}
