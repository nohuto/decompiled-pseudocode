/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x140087A0C
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140086160 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400865D0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpShutdownWorkerFactory @ 0x140087284 (ExpShutdownWorkerFactory.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KeDeregisterObjectNotification @ 0x140087A64 (KeDeregisterObjectNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(PVOID Object)
{
  if ( (*((_DWORD *)Object + 38) & 0x400) != 0
    && (unsigned __int8)KeDeregisterObjectNotification(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL)) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 38) &= ~0x400u;
  }
  *((_DWORD *)Object + 38) &= ~0x200u;
}
