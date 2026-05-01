/*
 * XREFs of ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x180151240
 * Callers:
 *     ?__abi_Release@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x180151000 (-__abi_Release@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInterna.c)
 *     ?__abi_Release@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x180151050 (-__abi_Release@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::__abi_Release(
        __int64 a1)
{
  Platform::Details::ControlBlock **v1; // r14
  unsigned int v3; // edi
  void (__fastcall ***v4)(void *, _QWORD); // rsi
  Platform::Details::ControlBlock *v5; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 24);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 24));
  if ( !v3 )
  {
    v4 = *(void (__fastcall ****)(void *, _QWORD))(a1 + 296);
    (**v4)(v4, 0LL);
    if ( v4 != (void (__fastcall ***)(void *, _QWORD))(a1 + 40) )
      Platform::Details::Heap::Free(v4);
    v5 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
    {
      if ( *((_BYTE *)v5 + 25) )
        Platform::Details::Heap::AlignedFree(v5);
      else
        Platform::Details::Heap::Free(v5);
    }
  }
  return v3;
}
