/*
 * XREFs of ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Common@Multitasking@234@@Z @ 0x18012F0B4
 * Callers:
 *     _lambda_4d9498deded80cfab1ff9f78bf19bcab_::operator() @ 0x18012E08C (_lambda_4d9498deded80cfab1ff9f78bf19bcab_--operator().c)
 *     _lambda_650cc3be0f7c1281208c8cf80a59183f_::operator() @ 0x18013F570 (_lambda_650cc3be0f7c1281208c8cf80a59183f_--operator().c)
 *     _lambda_595b6875358bb48b4963d1a32745e1c2_::operator() @ 0x180141268 (_lambda_595b6875358bb48b4963d1a32745e1c2_--operator().c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateDesktopTaskbar@__ITaskbarHelpersStatics@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAVTaskbarData@234@PE$AAUIDesktopAppHost@234@@Z @ 0x18011E760 (-CreateDesktopTaskbar@__ITaskbarHelpersStatics@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18019716C (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 DesktopTaskbar; // rbx
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
  DesktopTaskbar = WindowsInternal::ComposableShell::Desktop::__ITaskbarHelpersStatics::CreateDesktopTaskbar(v9, a2);
  v10 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return DesktopTaskbar;
}
