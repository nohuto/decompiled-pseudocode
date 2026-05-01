/*
 * XREFs of ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x180147C78
 * Callers:
 *     ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180147F1C (-CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEA.c)
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x180148338 (-CreateXamlExplorerHostWindow@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallbac.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180148D3C (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x180148DB0 (-CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801E5664 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlExplorerHost::EnsureMetadataRegistered(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v6; // rbx
  unsigned int i; // r14d
  __int64 Instance; // rdi
  int v9; // eax
  int v10; // eax
  _DWORD v11[6]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h]
  __int64 v16; // [rsp+88h] [rbp+48h]

  if ( !*(_BYTE *)(a1 + 80) )
  {
    v11[0] = 2069417534;
    v11[1] = 993550021;
    v11[2] = 405293977;
    v11[3] = -1427716792;
    v14 = 0LL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                  (__winRT *)L"WindowsInternal.ComposableShell.Desktop.NativeHostingXamlMetadataProvider",
                                  v11,
                                  (struct Platform::Guid *)&v14,
                                  a4);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    v6 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v14);
    v13 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = v6;
    v13 = 0LL;
    for ( i = 0; ; ++i )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 56LL))(v6, &v13);
      if ( v10 < 0 )
        __abi_WinRTraiseException(v10);
      if ( i >= (unsigned int)v13 )
        break;
      Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
                   v6,
                   i);
      v16 = Instance;
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48), Instance);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x45,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
          (const char *)(unsigned int)v9);
        break;
      }
      if ( Instance )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Instance + 16LL))(Instance);
    }
    *(_BYTE *)(a1 + 80) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
