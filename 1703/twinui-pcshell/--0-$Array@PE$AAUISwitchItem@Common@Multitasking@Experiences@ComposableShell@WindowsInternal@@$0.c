/*
 * XREFs of ??0?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x18013BCB0
 * Callers:
 *     ?get@?Q?$IBoxArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Platform@@Value@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAP$01E$AAV42@XZ @ 0x18013BD70 (-get@-Q-$IBoxArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInte.c)
 * Callees:
 *     ??0?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@IE$AAA@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x18013BBEC (--0-$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 */

// Hidden C++ exception states: #wind=1
Platform::Details *__fastcall Platform::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>(
        Platform::Details *a1,
        __int64 a2,
        unsigned int a3)
{
  void *v4; // rdx

  Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>(
    (__int64)a1 + 32,
    a2,
    a3);
  *(_QWORD *)a1 = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>'};
  *((_QWORD *)a1 + 1) = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::`vftable'{for `Platform::IValueType'};
  *((_QWORD *)a1 + 2) = ___7__Array_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_Platform__6B__I__Array_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00PublicNonVirtuals_1__;
  *((_QWORD *)a1 + 3) = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::`vftable'{for `Platform::IDisposable'};
  *((_QWORD *)a1 + 4) = ___7__Array_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_Platform__6B__I__WriteOnlyArray_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00PublicNonVirtuals_1__;
  *((_QWORD *)a1 + 5) = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>'};
  *((_QWORD *)a1 + 6) = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>'};
  *((_QWORD *)a1 + 7) = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>'};
  *((_QWORD *)a1 + 8) = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>'};
  *((_QWORD *)a1 + 14) = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  *((_QWORD *)a1 + 15) = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *((_QWORD *)a1 + 1) = Platform::Details::GetIBoxArrayVtable(a1, v4);
  return a1;
}
