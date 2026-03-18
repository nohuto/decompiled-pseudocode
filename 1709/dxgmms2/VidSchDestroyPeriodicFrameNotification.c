/*
 * XREFs of VidSchDestroyPeriodicFrameNotification @ 0x1C002B580
 * Callers:
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C0015EEC (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C002B170 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B3C0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0028C90 (VidSchiPropagateCrossAdapterSignal.c)
 *     McTemplateK0pqxxqpp @ 0x1C002AE54 (McTemplateK0pqxxqpp.c)
 *     VidSchControlVSyncAdapter @ 0x1C0071330 (VidSchControlVSyncAdapter.c)
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
  __int64 v14; // rsi
  bool v15; // zf
  volatile signed __int32 *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-78h]
  int v23; // [rsp+38h] [rbp-60h]
  _QWORD v24[2]; // [rsp+50h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+60h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-20h] BYREF

  if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    v23 = P[6];
    v22 = P[2];
    McTemplateK0pqxxqpp(
      (__int64)P,
      &EventDestroyPeriodicFrameNotification,
      a3,
      *(_QWORD *)P,
      v22,
      *((_QWORD *)P + 2),
      *((_QWORD *)P + 6),
      v23,
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
    v24[0] = *((_QWORD *)P + 4);
    v5 = *(_QWORD *)P;
    v24[1] = 0LL;
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[53])(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2304LL),
           v24);
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
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 1888LL), &LockHandle);
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 8LL * (unsigned int)P[2] + 3008) + 56816LL)
            + 8LL * (unsigned __int8)P[6]) = 0LL;
  v14 = *(_QWORD *)P;
  if ( !*(_BYTE *)(*(_QWORD *)P + 28LL) )
  {
    v15 = *(_BYTE *)(v14 + 29) == 0;
    v16 = *(volatile signed __int32 **)(v14 + 56);
    *(_BYTE *)(v14 + 28) = 1;
    if ( v15 )
      _InterlockedExchangeAdd(v16, 0x3FFFFFFFu);
    else
      *(_QWORD *)v16 = -1LL;
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(v14 + 8));
    if ( *(_BYTE *)(v14 + 27) )
    {
      v17 = *(_QWORD *)(v14 + 184);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v17 + 8), &v25);
      *(_BYTE *)(v17 + 32) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v25);
      VidSchiPropagateCrossAdapterSignal((_QWORD *)v14);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VidSchiReleaseSyncObjectReference(*(char **)P);
  v20 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_DWORD *)(v20 + 160) != 6 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v21 + 24) = 335LL;
    WdLogEvent5_WdAssertion(v21);
  }
  *(_QWORD *)(v20 + 152) = 0LL;
  ExFreePoolWithTag(P, 0x68536956u);
}
