/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@UE$AAAKXZ @ 0x1801682A0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@W7E$AAAKXZ @ 0x180167A60 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@S.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WBA@E$AAAKXZ @ 0x180167AA0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@Composa.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WBI@E$AAAKXZ @ 0x180167FD0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_180167FD0.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WCA@E$AAAKXZ @ 0x180168010 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_180168010.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WCI@E$AAAKXZ @ 0x180168390 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_180168390.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_Collections_2_UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // esi
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 88));
  if ( !v2 )
  {
    v3 = *(volatile signed __int32 **)(a1 + 72);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    v4 = *(volatile signed __int32 **)(a1 + 56);
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
    v5 = *(_QWORD *)(a1 + 88);
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
