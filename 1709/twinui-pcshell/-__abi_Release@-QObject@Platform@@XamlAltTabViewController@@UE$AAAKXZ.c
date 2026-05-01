/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x180179140
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAKXZ @ 0x180178DE0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAKXZ @ 0x180178E70 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WIA@E$AAAKXZ @ 0x180178EA0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WIA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@W7E$AAAKXZ @ 0x180178F20 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAKXZ @ 0x180178F40 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WII@E$AAAKXZ @ 0x180178F60 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WII@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAKXZ @ 0x180178FA0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAKXZ @ 0x180178FB0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ??1XamlBaseViewController@@IE$AAA@XZ @ 0x180178618 (--1XamlBaseViewController@@IE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlAltTabViewController__UE_AAAKXZ(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 104));
  if ( !v2 )
  {
    XamlBaseViewController::~XamlBaseViewController((_QWORD *)(a1 + 8));
    v3 = *(_QWORD *)(a1 + 104);
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
