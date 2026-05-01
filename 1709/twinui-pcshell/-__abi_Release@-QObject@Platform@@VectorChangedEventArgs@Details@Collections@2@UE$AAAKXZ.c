/*
 * XREFs of ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ @ 0x180165450
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAKXZ @ 0x1801650D0 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAKXZ @ 0x180165120 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBI@E$AAAKXZ @ 0x180165170 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAKXZ @ 0x1801654B0 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__VectorChangedEventArgs_Details_Collections_2_UE_AAAKXZ(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rbx

  v1 = (__int64 *)(a1 + 48);
  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 48));
  if ( !v2 )
  {
    v3 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget((Platform::Details::ControlBlock *)v3);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
    {
      if ( *(_BYTE *)(v3 + 25) )
        Platform::Details::Heap::AlignedFree((void *)v3);
      else
        Platform::Details::Heap::Free((void *)v3);
    }
  }
  return v2;
}
