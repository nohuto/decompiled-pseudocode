/*
 * XREFs of rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0099C1C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     rimObsIsObserverTarget @ 0x1C0115288 (rimObsIsObserverTarget.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C01152C4 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C0115900 (rimObsDeliverInputToObserver.c)
 */

__int64 __fastcall rimObsRouteInputAndCheckForExclusiveObservers(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v3; // ebx
  struct _LIST_ENTRY *v4; // r12
  struct _LIST_ENTRY *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KPROCESS *v11; // rbp
  int v12; // edi
  struct _LIST_ENTRY *i; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KPROCESS *v18; // r14
  int v19; // ebp
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  RIMLockExclusive((__int64)&gInputObserverLock);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimInputObserverList.Flink;
  v3 = 0;
  v4 = 0LL;
  if ( gObRimInputObserverList.Flink != &gObRimInputObserverList )
  {
    while ( 1 )
    {
      v6 = Flink - 1;
      if ( ((__int64)Flink[6].Flink & 2) != 0
        && (unsigned int)rimObsIsObserverTarget(&Flink[-1], a1)
        && (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        break;
      }
      Flink = Flink->Flink;
      if ( Flink == &gObRimInputObserverList )
        goto LABEL_13;
    }
    v4 = Flink - 1;
    if ( Flink != (struct _LIST_ENTRY *)16 )
    {
      if ( ((__int64)v6[7].Flink & 1) != 0 )
      {
        v11 = (struct _KPROCESS *)v6[2].Flink;
        v12 = 0;
        if ( v11 != (struct _KPROCESS *)PsGetCurrentProcess(v8, v7, v9, v10) )
        {
          KeStackAttachProcess(v11, &ApcState);
          v12 = 1;
        }
        rimObsDeliverInputToObserver(a1, v6);
        if ( v12 )
          KeUnstackDetachProcess(&ApcState);
      }
      goto LABEL_2;
    }
LABEL_13:
    for ( i = gObRimInputObserverList.Flink; i != &gObRimInputObserverList; i = i->Flink )
    {
      if ( (unsigned int)rimObsIsObserverTarget(&i[-1], a1) && (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        v18 = (struct _KPROCESS *)i[1].Flink;
        v19 = 0;
        if ( v18 != (struct _KPROCESS *)PsGetCurrentProcess(v15, v14, v16, v17) )
        {
          KeStackAttachProcess(v18, &ApcState);
          v19 = 1;
        }
        rimObsDeliverInputToObserver(a1, &i[-1]);
        if ( v19 )
          KeUnstackDetachProcess(&ApcState);
      }
    }
  }
LABEL_2:
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C018EC78 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v3) = v4 != 0LL;
  return v3;
}
