/*
 * XREFs of ZwCreateEvent @ 0x14017E840
 * Callers:
 *     CmpCreateEvent @ 0x1404D7FF8 (CmpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x140585610 (IoCreateNotificationEvent.c)
 *     PiDrvDbCreateNode @ 0x14059E128 (PiDrvDbCreateNode.c)
 *     MiCreateMemoryEvent @ 0x1405A2730 (MiCreateMemoryEvent.c)
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x1405C8E6C (PfpCreateEvent.c)
 *     SmCreateEvent @ 0x1405DA8C8 (SmCreateEvent.c)
 *     IoCreateSynchronizationEvent @ 0x14068B760 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1406DF114 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x14072162C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 *     DbgkpCreateNotificationEvent @ 0x14082109C (DbgkpCreateNotificationEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
