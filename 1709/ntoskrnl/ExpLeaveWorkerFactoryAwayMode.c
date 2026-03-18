/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x1400E28E4
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140076620 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140076870 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x1400B1CE0 (NtSetInformationWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x1400E3A58 (ExpShutdownWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeDeregisterObjectNotification @ 0x1400E293C (KeDeregisterObjectNotification.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(char *Object)
{
  if ( (*((_DWORD *)Object + 38) & 0x400) != 0
    && (unsigned __int8)KeDeregisterObjectNotification(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL), Object + 360) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 38) &= ~0x400u;
  }
  *((_DWORD *)Object + 38) &= ~0x200u;
}
