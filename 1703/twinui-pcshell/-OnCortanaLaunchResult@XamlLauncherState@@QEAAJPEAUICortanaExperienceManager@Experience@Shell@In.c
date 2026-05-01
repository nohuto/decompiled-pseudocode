/*
 * XREFs of ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1801581B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1801566A0 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     ??$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z @ 0x18015A450 (--$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z.c)
 *     ??$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A98C (--$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2)
{
  int v3; // r8d
  char v4; // al
  HANDLE v5; // rax
  void *v6; // rdi
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  char v11; // [rsp+48h] [rbp-10h]
  int v12; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v8) = *((_DWORD *)this + 14);
  *((_QWORD *)&v8 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v9, &v8);
  v12 = v3;
  v4 = 0;
  if ( v3 == -2147009295 || v3 == -2144927148 )
    v4 = 1;
  *((_BYTE *)this + 953) = v4;
  *((_BYTE *)this + 954) = v3 < 0;
  if ( v4 || v3 < 0 )
  {
    if ( *((_QWORD *)this + 117) )
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)this + 117,
        0LL);
    v5 = OpenEventW(2u, 0, L"ShellSearchReadyEvent");
    v6 = v5;
    if ( v5 )
    {
      SetEvent(v5);
      CloseHandle(v6);
    }
    StartWindowTelemetry::StartRunningWithoutCortana<long>(&v12);
    if ( *((_DWORD *)this + 14) == 2 || *((_DWORD *)this + 14) == 19 )
    {
      XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
    }
    else if ( *((_DWORD *)this + 14) == 6 )
    {
      *((_DWORD *)this + 14) = 0;
    }
  }
  if ( v11 )
  {
    v11 = 0;
    StartWindowTelemetry::OnCortanaLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v9,
      v10 + 56);
  }
  return 0LL;
}
