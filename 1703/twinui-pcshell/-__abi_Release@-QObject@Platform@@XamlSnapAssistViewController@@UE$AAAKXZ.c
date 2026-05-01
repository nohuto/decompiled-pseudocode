/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ @ 0x180145290
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAKXZ @ 0x180144F90 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WCA@E$AAAKXZ @ 0x180145020 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WIA@E$AAAKXZ @ 0x180145050 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WIA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAKXZ @ 0x180145080 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WCI@E$AAAKXZ @ 0x1801450A0 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WII@E$AAAKXZ @ 0x1801450D0 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WII@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WBA@E$AAAKXZ @ 0x180145110 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WDA@E$AAAKXZ @ 0x180145120 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WDA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180120258 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ??1XamlBaseViewController@@IE$AAA@XZ @ 0x1801437C4 (--1XamlBaseViewController@@IE$AAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlSnapAssistViewController__UE_AAAKXZ(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 104));
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 144);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    XamlBaseViewController::~XamlBaseViewController((_QWORD *)(a1 + 8));
    v4 = *(_QWORD *)(a1 + 104);
    Platform::Details::ControlBlock::ReleaseTarget((Platform::Details::ControlBlock *)v4);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        Platform::Details::Heap::AlignedFree((void *)v4);
      else
        Platform::Details::Heap::Free((void *)v4);
    }
  }
  return v2;
}
