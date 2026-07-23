/*
 * XREFs of PiUEventBroadcastEventWorker @ 0x14059F660
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1406C1FE4 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406C2070 (PiUEventBroadcastPortsChangedEvent.c)
 */

void __fastcall PiUEventBroadcastEventWorker(PVOID P)
{
  char v2; // si
  _DWORD *v3; // rdi
  char v4; // bl
  int v5; // ecx
  int v6; // ecx
  const WNF_STATE_NAME *v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  void *SessionById; // rbx
  const WNF_STATE_NAME *v13; // rcx
  int ExplicitScope; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    v3 = PiUEventBroadcastEventQueue;
    v4 = *((_BYTE *)PiUEventBroadcastEventQueue + 16);
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    if ( v4 )
    {
      v5 = v3[5];
      if ( !v5 )
      {
        v6 = v3[6];
        ExplicitScope = v6;
        if ( v6 == -1 )
        {
          v7 = &WNF_PNPA_DEVNODES_CHANGED;
LABEL_6:
          ZwUpdateWnfStateData(v7, 0LL, 0, 0LL, 0LL, 0, 0);
          goto LABEL_7;
        }
        SessionById = (void *)MmGetSessionById(v6);
        if ( !SessionById )
          goto LABEL_7;
        v13 = &WNF_PNPA_DEVNODES_CHANGED_SESSION;
        goto LABEL_24;
      }
      v9 = v5 - 1;
      if ( !v9 )
      {
        v10 = v3[6];
        ExplicitScope = v10;
        if ( v10 == -1 )
        {
          v7 = (const WNF_STATE_NAME *)&WNF_PNPA_VOLUMES_CHANGED;
          goto LABEL_6;
        }
        SessionById = (void *)MmGetSessionById(v10);
        if ( !SessionById )
          goto LABEL_7;
        v13 = (const WNF_STATE_NAME *)&WNF_PNPA_VOLUMES_CHANGED_SESSION;
LABEL_24:
        ZwUpdateWnfStateData(v13, 0LL, 0, 0LL, &ExplicitScope, 0, 0);
        ObfDereferenceObject(SessionById);
        goto LABEL_7;
      }
      v11 = v9 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          PiUEventBroadcastPortsChangedEvent((unsigned int)v3[6], v3 + 7, v3 + 11);
      }
      else
      {
        PiUEventBroadcastHardwareProfilesChangedEvent((unsigned int)v3[6], v3 + 7);
      }
    }
LABEL_7:
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    if ( *((PVOID **)PiUEventBroadcastEventQueue + 1) != &PiUEventBroadcastEventQueue
      || (v8 = *(_QWORD *)PiUEventBroadcastEventQueue,
          *(PVOID *)(*(_QWORD *)PiUEventBroadcastEventQueue + 8LL) != PiUEventBroadcastEventQueue) )
    {
      __fastfail(3u);
    }
    PiUEventBroadcastEventQueue = *(PVOID *)PiUEventBroadcastEventQueue;
    *(_QWORD *)(v8 + 8) = &PiUEventBroadcastEventQueue;
    if ( PiUEventBroadcastEventQueue == &PiUEventBroadcastEventQueue )
      v2 = 1;
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    ExFreePoolWithTag(v3, 0x59706E50u);
  }
  while ( !v2 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
