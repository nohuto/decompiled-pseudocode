/*
 * XREFs of ??0TaskViewTimelineViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@PE$AAVVirtualDesktopBarElementViewModel@1234@PE$AAVObject@Platform@@@Z @ 0x18020652C
 * Callers:
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::operator() @ 0x180207E80 (_lambda_d4c350abf5d24183546902bae9e0768c_--operator().c)
 * Callees:
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18009BC5C (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateInstance@__ITaskViewTimelineViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVTaskViewTimelineViewModel@2345@PE$AAVSwitchItemListViewModel@2345@PE$AAVVirtualDesktopBarElementViewModel@2345@PE$AAVObject@Platform@@@Z @ 0x18020A33C (-CreateInstance@__ITaskViewTimelineViewModelFactory@Switcher@Experiences@Composable_ea_18020A33C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimelineViewModel::TaskViewTimelineViewModel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rbx
  __int64 v9; // rbx
  __int64 v11; // [rsp+28h] [rbp-18h]
  _DWORD v12[4]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+10h] BYREF

  v12[0] = -147706592;
  v12[1] = 1004406091;
  v12[2] = -569983063;
  v12[3] = 865357291;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.TaskViewTimelineViewModel",
                                (struct Platform::Guid *)v12,
                                (void **)&v13,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelineViewModelFactory::CreateInstance(
               v13,
               a2,
               a3,
               a4,
               -2LL);
  v11 = __abi_winrt_ptr_ctor(Instance);
  __abi_winrt_ptr_dtor(Instance);
  v9 = __abi_winrt_ptr_ctor(v11);
  __abi_winrt_ptr_dtor(v11);
  __abi_winrt_ptr_dtor(v13);
  return v9;
}
