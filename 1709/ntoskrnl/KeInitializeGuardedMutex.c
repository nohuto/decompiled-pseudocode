/*
 * XREFs of KeInitializeGuardedMutex @ 0x1400FB0E0
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x140548A48 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x14054B8AC (PiUEventNotifyUserMode.c)
 *     ExInitializePoolDescriptor @ 0x1405B73F8 (ExInitializePoolDescriptor.c)
 *     CmpInitSIDToHiveMapping @ 0x1405BF79C (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x1405BF7B8 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1405BF808 (CmpInitDelayDerefKCBEngine.c)
 *     PiDqObjectManagerInit @ 0x1405C4548 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x1405DC060 (PfTInitialize.c)
 *     EtwpInitializeProviderTraits @ 0x1405F1F64 (EtwpInitializeProviderTraits.c)
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
