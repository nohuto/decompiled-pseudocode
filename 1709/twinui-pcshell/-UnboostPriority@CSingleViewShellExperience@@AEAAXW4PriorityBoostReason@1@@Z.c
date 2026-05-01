/*
 * XREFs of ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1801D33BC
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0060 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x1801D040C (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1801D0EE8 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1801D299C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x1801D3654 (wil--details--ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___--_ScopeExitFn__lambda_a7f1.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_bebc36e78399f71117fc73082d12469b___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke @ 0x1801D4670 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEventHandler_impl.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1801D3508 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAIAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAI2@Z @ 0x1801D4454 (--$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::UnboostPriority(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  PCWSTR StringRawBuffer; // rax
  HSTRING v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PCWSTR v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF
  PCWSTR v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  if ( a2 )
  {
    if ( a2 == 1 && *(_BYTE *)(a1 + 140) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
      v4 = v3;
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x46C,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v3);
      *(_BYTE *)(a1 + 140) = v4 < 0;
    }
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 144);
    if ( v5 )
      *(_DWORD *)(a1 + 144) = v5 - 1;
    if ( !*(_DWORD *)(a1 + 144) )
    {
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)(a1 + 152),
        0LL);
      if ( *(_BYTE *)(a1 + 148) )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
        v7 = v6;
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x463,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v6);
        *(_BYTE *)(a1 + 148) = v7 < 0;
        CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1);
      }
    }
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v9 = *(HSTRING *)(a1 + 8);
  v12 = StringRawBuffer;
  v14 = WindowsGetStringRawBuffer(v9, 0LL);
  return SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,unsigned int &,bool &>(
           (unsigned int)&v14,
           (unsigned int)&v12,
           (unsigned int)&v13,
           (int)a1 + 148,
           a1 + 144,
           a1 + 140);
}
