/*
 * XREFs of ZwCreateEvent @ 0x14017E1C0
 * Callers:
 *     CmpCreateEvent @ 0x1404E0BA8 (CmpCreateEvent.c)
 *     MiCreateMemoryEvent @ 0x1405B1E50 (MiCreateMemoryEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x1405C474C (DbgkpCreateNotificationEvent.c)
 *     PiDrvDbCreateNode @ 0x1405C6554 (PiDrvDbCreateNode.c)
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x1405DCE0C (PfpCreateEvent.c)
 *     CMFFlushHitsFile @ 0x1405EE9D0 (CMFFlushHitsFile.c)
 *     IoCreateNotificationEvent @ 0x1405EEFF0 (IoCreateNotificationEvent.c)
 *     IoCreateSynchronizationEvent @ 0x1406B74A0 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x140715594 (PspShutdownCsrProcess.c)
 *     SmCreateEvent @ 0x140738204 (SmCreateEvent.c)
 *     CMFSystemThreadRoutine @ 0x1407618F0 (CMFSystemThreadRoutine.c)
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
