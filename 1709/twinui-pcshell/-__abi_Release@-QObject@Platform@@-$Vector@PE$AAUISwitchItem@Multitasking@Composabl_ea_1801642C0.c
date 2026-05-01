/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x1801642C0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@W7E$AAAKXZ @ 0x180161FF0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Intern.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WBA@E$AAAKXZ @ 0x180162A30 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_180162A30.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WBI@E$AAAKXZ @ 0x180162B40 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_180162B40.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WCA@E$AAAKXZ @ 0x180162B90 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_180162B90.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WCI@E$AAAKXZ @ 0x180162D50 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_180162D50.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WDA@E$AAAKXZ @ 0x180163C40 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_180163C40.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WDI@E$AAAKXZ @ 0x180163E50 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_180163E50.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WEA@E$AAAKXZ @ 0x180163EB0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_180163EB0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WEI@E$AAAKXZ @ 0x1801643E0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1801643E0.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ___abi_Release__QObject_Platform____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_2_UE_AAAKXZ(
        __int64 a1)
{
  Platform::Details::ControlBlock **v2; // r14
  void **v3; // rdx
  unsigned int v4; // esi
  void **v5; // rdx
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  Platform::Details::ControlBlock *v8; // rbx

  v2 = (Platform::Details::ControlBlock **)(a1 + 136);
  v4 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 136));
  if ( !v4 )
  {
    Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 128), v3);
    Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 120), v5);
    v6 = *(volatile signed __int32 **)(a1 + 104);
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    v7 = *(volatile signed __int32 **)(a1 + 88);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    v8 = *v2;
    Platform::Details::ControlBlock::ReleaseTarget(*v2);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 2, 0xFFFFFFFF) == 1 )
    {
      if ( *((_BYTE *)v8 + 25) )
        Platform::Details::Heap::AlignedFree(v8);
      else
        Platform::Details::Heap::Free(v8);
    }
  }
  return v4;
}
