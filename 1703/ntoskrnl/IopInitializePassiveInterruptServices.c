/*
 * XREFs of IopInitializePassiveInterruptServices @ 0x140820B54
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeQueue @ 0x140024C20 (KeInitializeQueue.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1405CED9C (IopQueryPassiveInterruptRegistryOptions.c)
 */

__int64 IopInitializePassiveInterruptServices()
{
  void *v0; // rdx
  void *v1; // rcx

  IopQueryPassiveInterruptRegistryOptions();
  PassiveInterruptListLock = 0LL;
  qword_1403687C8 = (__int64)&PassiveInterruptList;
  PassiveInterruptList = (__int64)&PassiveInterruptList;
  KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
  return IopCreatePassiveInterruptRealtimeThreads(v1, v0);
}
