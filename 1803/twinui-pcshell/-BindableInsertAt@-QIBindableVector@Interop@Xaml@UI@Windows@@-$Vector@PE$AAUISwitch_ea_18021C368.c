/*
 * XREFs of ?BindableInsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAXIPE$AAVObject@8@@Z @ 0x18021C368
 * Callers:
 *     ?BindableInsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@GCI@E$AAAXIPE$AAVObject@8@@Z @ 0x1800AB620 (-BindableInsertAt@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItemContextMe.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_InsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJIPE$AAVObject@8@@Z @ 0x1802219E4 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_InsertAt@-QIBindableVector@In_ea_1802219E4.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?InsertAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXIPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18021E294 (-InsertAt@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Com_ea_18021E294.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _BindableInsertAt__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAAXIPE_AAVObject_8__Z(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, __int64, __int64 *))
{
  __int64 v4; // rbx

  v4 = __abi_winrt_cast_to(
         0,
         a3,
         (__int64)&_uuidof__AUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__);
  _InsertAt__Q__IVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXIPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Z(a1);
  return __abi_winrt_ptr_dtor(v4);
}
