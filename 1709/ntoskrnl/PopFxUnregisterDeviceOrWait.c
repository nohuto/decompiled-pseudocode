/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x14055E898
 * Callers:
 *     PoFxAbandonDevice @ 0x14055E514 (PoFxAbandonDevice.c)
 *     PoFxUnregisterDevice @ 0x1406F80F0 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PopFxLockDevice @ 0x1400FF2FC (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x1406F944C (PopFxUnregisterDevice.c)
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
