/*
 * XREFs of rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C00A490C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     rimObsIsObserverTarget @ 0x1C0113D50 (rimObsIsObserverTarget.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C0113D8C (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C01143CC (rimObsDeliverInputToObserver.c)
 */

__int64 __fastcall rimObsRouteInputAndCheckForExclusiveObservers(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v3; // ebx
  struct _LIST_ENTRY *v4; // r12
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KPROCESS *v10; // rbp
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KPROCESS *v14; // r14
  int v15; // ebp
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  RIMLockExclusive((__int64)&gInputObserverLock);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimInputObserverList.Flink;
  v3 = 0;
  v4 = 0LL;
  while ( 1 )
  {
    if ( Flink == &gObRimInputObserverList )
      goto LABEL_3;
    v7 = Flink - 1;
    if ( ((__int64)Flink[6].Flink & 2) != 0
      && (unsigned int)rimObsIsObserverTarget(&Flink[-1], a1)
      && (unsigned int)rimObsIsRegisteredObserverAllowed() )
    {
      break;
    }
    Flink = Flink->Flink;
  }
  v4 = Flink - 1;
  if ( Flink == (struct _LIST_ENTRY *)16 )
  {
LABEL_3:
    for ( i = gObRimInputObserverList.Flink; i != &gObRimInputObserverList; i = i->Flink )
    {
      if ( (unsigned int)rimObsIsObserverTarget(&i[-1], a1) && (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        v14 = (struct _KPROCESS *)i[1].Flink;
        v15 = 0;
        if ( v14 != (struct _KPROCESS *)PsGetCurrentProcess(v13, v12) )
        {
          KeStackAttachProcess(v14, &ApcState);
          v15 = 1;
        }
        rimObsDeliverInputToObserver(a1, &i[-1]);
        if ( v15 )
          KeUnstackDetachProcess(&ApcState);
      }
    }
    goto LABEL_5;
  }
  if ( ((__int64)v7[7].Flink & 1) != 0 )
  {
    v10 = (struct _KPROCESS *)v7[2].Flink;
    v11 = 0;
    if ( v10 != (struct _KPROCESS *)PsGetCurrentProcess(v9, v8) )
    {
      KeStackAttachProcess(v10, &ApcState);
      v11 = 1;
    }
    rimObsDeliverInputToObserver(a1, v7);
    if ( v11 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_5:
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C0193AD8 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v3) = v4 != 0LL;
  return v3;
}
