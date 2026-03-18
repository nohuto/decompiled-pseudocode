/*
 * XREFs of VidSchiProcessPeriodicNotificationCookie @ 0x1C002694C
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0005B10 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C00257C0 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     Template_pqqiix @ 0x1C0024618 (Template_pqqiix.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C00259B0 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002A590 (VidSchSignalSyncObjectsFromCpu.c)
 */

NTSTATUS __fastcall VidSchiProcessPeriodicNotificationCookie(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  union _SLIST_HEADER *v4; // rbx
  ULONGLONG Region; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 Alignment; // rbx
  union _LARGE_INTEGER v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  NTSTATUS result; // eax
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbp
  __int64 v24; // [rsp+20h] [rbp-68h]
  int v25; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *(unsigned int *)(a2 + 52);
  v4 = *(union _SLIST_HEADER **)(a1 + 8LL * *(unsigned int *)(a2 + 48) + 2992);
  Region = v4[2933].Region;
  if ( Region )
    v2 = *(_QWORD **)(Region + 8LL * (unsigned __int8)v3);
  ExpInterlockedPushEntrySList(v4 + 2934, (PSLIST_ENTRY)(a2 + 16));
  if ( !v2 || *((_DWORD *)v2 + 6) != (_DWORD)v3 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, v6);
    v18[3] = v3;
    return WdLogEvent5_WdAssertion(v18);
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(*v2 + 8LL) + 1880LL), &LockHandle);
  v8 = v4[1175].Region;
  Alignment = v4[1175].Alignment;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v13 = VidSchiCalculatePeriodicTargetFrameNumber(v10, (__int64)v2, v8, Alignment, (int *)&v27);
  v27 = v13;
  v15 = v2[7];
  if ( v15 == v13 )
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11);
    *(_QWORD *)(v16 + 24) = v13;
    return WdLogEvent5_WdWarning(v16);
  }
  if ( v15 > v13 )
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v12, &EventPerformanceWarning, v14, 25);
    }
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11);
    v18[3] = v13;
    v18[4] = v2[7];
    return WdLogEvent5_WdAssertion(v18);
  }
  v19 = VidSchSignalSyncObjectsFromCpu(1LL, v2, 0LL, &v27);
  v23 = v19;
  if ( v19 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v21, v20);
    v18[3] = *((unsigned int *)v2 + 2);
    v18[4] = v3;
    v18[5] = v23;
    return WdLogEvent5_WdAssertion(v18);
  }
  v2[7] = v13;
  result = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v25 = v3;
    LODWORD(v24) = *((_DWORD *)v2 + 2);
    return Template_pqqiix(v21, v20, v22, *v2, v24, v25, v8, 0LL, v13);
  }
  return result;
}
