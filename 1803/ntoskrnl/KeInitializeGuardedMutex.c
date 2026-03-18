/*
 * XREFs of KeInitializeGuardedMutex @ 0x1400751C0
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14051F100 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x140542C18 (PiUEventInitClientRegistrationContext.c)
 *     ExInitializePoolDescriptor @ 0x14060AF74 (ExInitializePoolDescriptor.c)
 *     PfTInitialize @ 0x1406444B8 (PfTInitialize.c)
 *     PiDqObjectManagerInit @ 0x14064FA0C (PiDqObjectManagerInit.c)
 *     CmpInitDelayDerefKCBEngine @ 0x140654188 (CmpInitDelayDerefKCBEngine.c)
 *     EtwpInitializeProviderTraits @ 0x1406551F8 (EtwpInitializeProviderTraits.c)
 *     CmpInitializeDelayedCloseTable @ 0x140655684 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSIDToHiveMapping @ 0x140655C0C (CmpInitSIDToHiveMapping.c)
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
