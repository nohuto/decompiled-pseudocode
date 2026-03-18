/*
 * XREFs of VidSchDestroyPeriodicFrameNotification @ 0x1C002E5D0
 * Callers:
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C0015974 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C002E1C0 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BA80 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C002BB78 (VidSchiPropagateCrossAdapterSignal.c)
 *     McTemplateK0pqxxqpp @ 0x1C002DEA4 (McTemplateK0pqxxqpp.c)
 *     VidSchControlVSyncAdapter @ 0x1C0056ED0 (VidSchControlVSyncAdapter.c)
 */

void __fastcall VidSchDestroyPeriodicFrameNotification(_DWORD *P, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  bool v16; // zf
  volatile signed __int32 *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+38h] [rbp-60h]
  _QWORD v25[2]; // [rsp+50h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+60h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-20h] BYREF

  if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    v24 = P[6];
    v23 = P[2];
    McTemplateK0pqxxqpp(
      (__int64)P,
      &EventDestroyPeriodicFrameNotification,
      a3,
      *(_QWORD *)P,
      v23,
      *((_QWORD *)P + 2),
      *((_QWORD *)P + 6),
      v24,
      *((_QWORD *)P + 4),
      *((_QWORD *)P + 5));
  }
  v4 = *((_QWORD *)P + 5);
  if ( v4 )
  {
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    ExDeleteTimer(v4, a2, a3, 0LL);
  }
  if ( *((_QWORD *)P + 4) )
  {
    v25[0] = *((_QWORD *)P + 4);
    v5 = *(_QWORD *)P;
    v25[1] = 0LL;
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[65])(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2456LL),
           v25);
    v9 = v6;
    if ( v6 < 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v10 + 24) = v9;
      WdLogEvent5_WdAssertion(v10);
    }
  }
  if ( (int)VidSchControlVSyncAdapter(*(_QWORD *)(*(_QWORD *)P + 8LL), 3LL, 0LL) < 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 1904LL), &LockHandle);
  v14 = (unsigned int)P[2];
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 8 * v14 + 3032) + 61296LL)
            + 8LL * (unsigned __int8)P[6]) = 0LL;
  v15 = *(_QWORD *)P;
  if ( !*(_BYTE *)(*(_QWORD *)P + 28LL) )
  {
    v16 = *(_BYTE *)(v15 + 29) == 0;
    v17 = *(volatile signed __int32 **)(v15 + 56);
    *(_BYTE *)(v15 + 28) = 1;
    if ( v16 )
      _InterlockedExchangeAdd(v17, 0x3FFFFFFFu);
    else
      *(_QWORD *)v17 = -1LL;
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(v15 + 8), v14);
    if ( *(_BYTE *)(v15 + 27) )
    {
      v18 = *(_QWORD *)(v15 + 200);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v18 + 8), &v26);
      *(_BYTE *)(v18 + 32) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v26);
      VidSchiPropagateCrossAdapterSignal((_QWORD *)v15);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VidSchiReleaseSyncObjectReference(*(char **)P);
  v21 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_DWORD *)(v21 + 168) != 6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v22 + 24) = 344LL;
    WdLogEvent5_WdAssertion(v22);
  }
  *(_QWORD *)(v21 + 160) = 0LL;
  ExFreePoolWithTag(P, 0x68536956u);
}
