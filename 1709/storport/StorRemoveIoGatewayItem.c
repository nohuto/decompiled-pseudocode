/*
 * XREFs of StorRemoveIoGatewayItem @ 0x1C000B240
 * Callers:
 *     RaUnitStartIo @ 0x1C0008160 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000EE34 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0031A90 (RaidGetQosEntryForDeviceEntry.c)
 *     RaFreeIoResource @ 0x1C0040A74 (RaFreeIoResource.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0040C08 (StorSetIoGatewayNotBusy.c)
 */

__int64 __fastcall StorRemoveIoGatewayItem(volatile signed __int32 *SpinLock, __int64 a2, PKSPIN_LOCK **a3)
{
  unsigned __int8 v3; // si
  char v4; // bp
  struct _KEVENT *v5; // r14
  unsigned __int8 v9; // r12
  union _SLIST_HEADER *v10; // rcx
  struct _SLIST_ENTRY *v11; // rdx
  __int64 v12; // rdx
  PKSPIN_LOCK *v14; // rax
  PKSPIN_LOCK v15; // rcx
  PKSPIN_LOCK v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // edx
  _QWORD *QosEntryForDeviceEntry; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( (unsigned int)_InterlockedDecrement(SpinLock + 48) <= *((_DWORD *)SpinLock + 8) && *((int *)SpinLock + 10) > 0 )
  {
    StorSetIoGatewayNotBusy(SpinLock);
    v3 = 1;
  }
  v9 = v3;
  if ( !*((_DWORD *)SpinLock + 48) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
    if ( (*((_QWORD *)SpinLock + 25) || *((_BYTE *)SpinLock + 208)) && !*((_DWORD *)SpinLock + 48) )
    {
      v4 = *((_BYTE *)SpinLock + 208);
      v5 = (struct _KEVENT *)*((_QWORD *)SpinLock + 25);
      *((_BYTE *)SpinLock + 208) = 0;
      *((_QWORD *)SpinLock + 25) = 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( *((_DWORD *)SpinLock + 6) && *((int *)SpinLock + 10) <= 0 && *((int *)SpinLock + 11) <= 0 && a3 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
    if ( *((int *)SpinLock + 10) <= 0 && *((int *)SpinLock + 11) <= 0 && *((_DWORD *)SpinLock + 6) )
    {
      v14 = (PKSPIN_LOCK *)*((_QWORD *)SpinLock + 1);
      v15 = (PKSPIN_LOCK)(SpinLock + 2);
      if ( v14[1] != (PKSPIN_LOCK)(SpinLock + 2) || (v16 = *v14, (PKSPIN_LOCK *)(*v14)[1] != v14) )
        __fastfail(3u);
      *v15 = (KSPIN_LOCK)v16;
      v16[1] = (KSPIN_LOCK)v15;
      *a3 = v14;
      _InterlockedIncrement(SpinLock + 48);
      v17 = *((_DWORD *)SpinLock + 48);
      v18 = *((_DWORD *)SpinLock + 9);
      v19 = *((_DWORD *)SpinLock + 7);
      if ( v17 > v18 )
        v18 = *((_DWORD *)SpinLock + 48);
      *((_DWORD *)SpinLock + 9) = v18;
      if ( v17 == v19 )
        *((_DWORD *)SpinLock + 10) = 1;
      v3 = 0;
      if ( v17 != v19 )
        v3 = v9;
      --*((_DWORD *)SpinLock + 6);
      if ( (*((_BYTE *)*a3 + 22) & 0x20) != 0 )
      {
        QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(*a3);
        v21 = QosEntryForDeviceEntry;
        v22 = *QosEntryForDeviceEntry;
        if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
          || (v23 = (_QWORD *)QosEntryForDeviceEntry[1], (_QWORD *)*v23 != v21) )
        {
          __fastfail(3u);
        }
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
      }
    }
    else
    {
      RaFreeIoResource(SpinLock + 16, *(_QWORD *)(a2 + 16) - 16LL);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    v10 = (union _SLIST_HEADER *)(SpinLock + 16);
    v11 = (struct _SLIST_ENTRY *)(*(_QWORD *)(a2 + 16) - 16LL);
    if ( *((_DWORD *)SpinLock + 32) )
      v10 = *(union _SLIST_HEADER **)(v10->Alignment + 8LL * LODWORD(v11->Next));
    ExpInterlockedPushEntrySList(v10, v11);
  }
  if ( a3 && *a3 )
    RaidZeroXrb(
      *(_QWORD *)(a2 + 16),
      v12,
      *(unsigned int *)(*(_QWORD *)(a2 + 16) + 744LL),
      *(_QWORD *)(*(_QWORD *)(a2 + 16) + 760LL));
  if ( v5 )
    KeSetEvent(v5, 0, 0);
  if ( v4 )
    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))SpinLock + 30))(
      *((_QWORD *)SpinLock + 29),
      *((_QWORD *)SpinLock + 27),
      *((_QWORD *)SpinLock + 28));
  return v3;
}
