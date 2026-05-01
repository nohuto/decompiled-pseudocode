/*
 * XREFs of ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x180148DB0
 * Callers:
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x180147C78 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke @ 0x180149140 (Platform--Details--__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows--.c)
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x18016C710 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@@Z @ 0x18016DC08 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE_ea_18016DC08.c)
 *     ??0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@@Z @ 0x18016DCAC (--0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@P_ea_18016DCAC.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, a2, &v6);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = v6;
  v4 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v3 = v6;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
