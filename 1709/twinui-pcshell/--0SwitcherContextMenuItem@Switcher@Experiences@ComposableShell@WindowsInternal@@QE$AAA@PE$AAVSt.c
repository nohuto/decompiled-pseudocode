/*
 * XREFs of ??0SwitcherContextMenuItem@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVString@Platform@@IPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180172F74
 * Callers:
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1801718E8 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateInstance@__ISwitcherContextMenuItemFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitcherContextMenuItem@2345@PE$AAVString@Platform@@IPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180175050 (-CreateInstance@__ISwitcherContextMenuItemFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801E5664 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::SwitcherContextMenuItem::SwitcherContextMenuItem(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rbx
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF

  v9 = 0x379A3290C9489B6ALL;
  v10 = 0xE26116B830343C82uLL;
  v11 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.SwitcherContextMenuItem",
                                &v9,
                                (struct Platform::Guid *)&v11,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherContextMenuItemFactory::CreateInstance(
               v11,
               a2,
               a3,
               0LL,
               -2LL,
               v9,
               v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return Instance;
}
