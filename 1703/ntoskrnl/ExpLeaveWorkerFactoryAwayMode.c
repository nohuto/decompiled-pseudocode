/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x14012B1B8
 * Callers:
 *     NtReleaseWorkerFactoryWorker @ 0x1400E3860 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400E3D20 (ExpWorkerFactoryCheckCreate.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x14012AB80 (ExpShutdownWorkerFactory.c)
 * Callees:
 *     KeDeregisterObjectNotification @ 0x140051420 (KeDeregisterObjectNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(__int64 *Object)
{
  __int64 v2; // rcx

  v2 = Object[2];
  if ( (Object[19] & 0x400) != 0 && KeDeregisterObjectNotification(*(volatile signed __int32 **)(v2 + 8), Object + 45) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 38) &= ~0x400u;
  }
  *((_DWORD *)Object + 38) &= ~0x200u;
}
