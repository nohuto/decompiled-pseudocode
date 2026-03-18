/*
 * XREFs of ExpTryEnterWorkerFactoryAwayMode @ 0x1400B252C
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1400B1CE0 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x140145860 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeRegisterObjectNotification @ 0x1400B25BC (KeRegisterObjectNotification.c)
 */

char __fastcall ExpTryEnterWorkerFactoryAwayMode(_DWORD *Object)
{
  __int64 v2; // rdi
  int v3; // ecx

  if ( Object[32] >= Object[31] )
    return 0;
  v2 = *((_QWORD *)Object + 2);
  if ( *(_DWORD *)(v2 + 28) )
    return 0;
  if ( Object[37] )
  {
    Object[38] |= 0x200u;
    v3 = Object[38];
    if ( !*(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) )
    {
      if ( (v3 & 0x400) == 0 )
      {
        Object[38] = v3 | 0x400;
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        KeRegisterObjectNotification(*(_QWORD *)(v2 + 8), &ExpWorkerFactoryManagerQueue, Object + 90);
      }
      return 0;
    }
  }
  return 1;
}
