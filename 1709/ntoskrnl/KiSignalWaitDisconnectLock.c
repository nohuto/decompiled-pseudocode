/*
 * XREFs of KiSignalWaitDisconnectLock @ 0x14020B4C0
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14012D8F4 (KiDisconnectInterruptCommon.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall KiSignalWaitDisconnectLock(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
