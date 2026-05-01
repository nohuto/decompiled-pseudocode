/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x18013D8B0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@W7E$AAAKXZ @ 0x18013B110 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBA@E$AAAKXZ @ 0x18013B1C0 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013B1C0.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBI@E$AAAKXZ @ 0x18013B210 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013B210.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCA@E$AAAKXZ @ 0x18013B740 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013B740.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCI@E$AAAKXZ @ 0x18013D4E0 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013D4E0.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDA@E$AAAKXZ @ 0x18013D530 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013D530.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDI@E$AAAKXZ @ 0x18013D9A0 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013D9A0.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180120258 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_2_UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // esi
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 104));
  if ( !v2 )
  {
    v3 = *(volatile signed __int32 **)(a1 + 88);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    v4 = *(volatile signed __int32 **)(a1 + 72);
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
    v5 = *(_QWORD *)(a1 + 104);
    Platform::Details::ControlBlock::ReleaseTarget((Platform::Details::ControlBlock *)v5);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    {
      if ( *(_BYTE *)(v5 + 25) )
        Platform::Details::Heap::AlignedFree((void *)v5);
      else
        Platform::Details::Heap::Free((void *)v5);
    }
  }
  return v2;
}
