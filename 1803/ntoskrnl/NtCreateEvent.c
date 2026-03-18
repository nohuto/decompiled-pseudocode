/*
 * XREFs of NtCreateEvent @ 0x1404C3A60
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x14048F544 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x1404A0608 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x1404A1900 (PfSnPopulateReadList.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140632198 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x1408C1DC8 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  PHANDLE v6; // rbx
  unsigned __int8 v7; // si
  NTSTATUS Object; // ecx
  struct _KEVENT *Event; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp-10h] BYREF

  v6 = EventHandle;
  v7 = KeGetCurrentThread()->gap0[10];
  if ( v7 )
  {
    if ( (unsigned __int64)EventHandle >= 0x7FFFFFFF0000LL )
      EventHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *EventHandle = *EventHandle;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  Object = ObCreateObjectEx(v7, (_DWORD)ExEventObjectType, (_DWORD)ObjectAttributes, v7);
  if ( Object >= 0 )
  {
    KeInitializeEvent(Event, EventType, InitialState);
    Object = ObInsertObjectEx(Event, 0, 0LL, (__int64)&v11);
    if ( Object >= 0 )
      *v6 = (HANDLE)v11;
  }
  return Object;
}
