/*
 * XREFs of ZwCreateEvent @ 0x1401A7DC0
 * Callers:
 *     CmpCreateEvent @ 0x14049E704 (CmpCreateEvent.c)
 *     MiCreateMemoryEvent @ 0x14061C9F8 (MiCreateMemoryEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x140620BDC (DbgkpCreateNotificationEvent.c)
 *     PiDrvDbCreateNode @ 0x140622B38 (PiDrvDbCreateNode.c)
 *     SepInitializationPhase1 @ 0x140641CF0 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x1406455CC (PfpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x1406502F0 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x1406531A4 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140653C70 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x14071C130 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x1407C8998 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C92E0 (CMFSystemThreadRoutine.c)
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
