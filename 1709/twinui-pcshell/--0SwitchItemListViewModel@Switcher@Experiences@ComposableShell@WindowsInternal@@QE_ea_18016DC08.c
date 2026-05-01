/*
 * XREFs of ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@@Z @ 0x18016DC08
 * Callers:
 *     _lambda_7e172f12ff20f7d48d0a79092595c49c_::operator() @ 0x18016D884 (_lambda_7e172f12ff20f7d48d0a79092595c49c_--operator().c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x18016F8CC (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x180148DB0 (-CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801E5664 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rbx
  _DWORD v8[6]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h]

  v8[0] = -774338439;
  v8[1] = 927647731;
  v8[2] = -1323115646;
  v8[3] = -290093519;
  v9 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.SwitchItemListViewModel",
                                v8,
                                (struct Platform::Guid *)&v9,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
               v9,
               a2);
  v10 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return Instance;
}
