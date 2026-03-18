/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x1405C81EC
 * Callers:
 *     PoFxAbandonDevice @ 0x1405C8D04 (PoFxAbandonDevice.c)
 *     PoFxUnregisterDevice @ 0x14075F710 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PopFxLockDevice @ 0x140144E10 (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x140760910 (PopFxUnregisterDevice.c)
 */

LONG __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
{
  ULONG_PTR v2; // rax

  _m_prefetchw(&a1[12].Header.WaitListHead);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[12].Header.WaitListHead, 8u) & 8) != 0 )
    return KeWaitForSingleObject(&a1[4], Executive, 0, 0, 0LL);
  v2 = PopFxLockDevice((__int64)a1, 0);
  if ( v2 )
    return PopFxUnregisterDevice(v2);
  else
    return KeSetEvent(a1 + 4, 0, 0);
}
