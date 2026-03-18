/*
 * XREFs of KeInitializeGuardedMutex @ 0x140067180
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1404A4498 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x1404A5D80 (PiUEventNotifyUserMode.c)
 *     ExInitializePoolDescriptor @ 0x14057E934 (ExInitializePoolDescriptor.c)
 *     PfTInitialize @ 0x1405C8078 (PfTInitialize.c)
 *     PiDqObjectManagerInit @ 0x1405D13F8 (PiDqObjectManagerInit.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1405D4A90 (CmpInitDelayDerefKCBEngine.c)
 *     EtwpInitializeProviderTraits @ 0x1405D59C8 (EtwpInitializeProviderTraits.c)
 *     CmpInitializeDelayedCloseTable @ 0x1405D5F54 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSIDToHiveMapping @ 0x1405D6534 (CmpInitSIDToHiveMapping.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  Mutex->Count = 1;
  Mutex->Owner = 0LL;
  Mutex->Contention = 0;
  Mutex->Event.Header.SignalState = 0;
  LOWORD(Mutex->Event.Header.Lock) = 1;
  Mutex->Event.Header.Size = 6;
  Mutex->Event.Header.WaitListHead.Blink = &Mutex->Event.Header.WaitListHead;
  Mutex->Event.Header.WaitListHead.Flink = &Mutex->Event.Header.WaitListHead;
}
