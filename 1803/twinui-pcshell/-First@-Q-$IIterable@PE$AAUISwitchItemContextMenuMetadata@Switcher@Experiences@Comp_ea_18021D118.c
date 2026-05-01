/*
 * XREFs of ?First@?Q?$IIterable@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@XZ @ 0x18021D118
 * Callers:
 *     ?First@?Q?$IIterable@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@WBA@E$AAAPE$AAU?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@XZ @ 0x1800AB680 (-First@-Q-$IIterable@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@W.c)
 *     ?BindableFirst@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableIterator@2345@XZ @ 0x18021C0D4 (-BindableFirst@-QIBindableIterable@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchI_ea_18021C0D4.c)
 *     ?__abi_Windows_Foundation_Collections_?$IIterable@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_First@?Q?$IIterable@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJPEAPE$AAU?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@@Z @ 0x180220B30 (-__abi_Windows_Foundation_Collections_-$IIterable@PE$AAUISwitchItemContextMenuMetad_ea_180220B30.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@QE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@5@@Z @ 0x18021B038 (--0-$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _First__Q__IIterable_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAPE_AAU__IIterator_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___234_XZ(
        __int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v5; // [rsp+40h] [rbp+8h]

  v2 = Platform::Details::Heap::Allocate(0x58uLL, 0x70uLL);
  v5 = Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>(
         v2,
         (unsigned int **)(a1 + 80),
         (_QWORD *)(a1 + 96));
  v3 = __abi_winrt_ptr_ctor((__int64)v5);
  __abi_winrt_ptr_dtor((__int64)v5);
  return v3;
}
