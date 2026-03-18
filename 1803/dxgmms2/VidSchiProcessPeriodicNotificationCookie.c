/*
 * XREFs of VidSchiProcessPeriodicNotificationCookie @ 0x1C002B90C
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000F330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002A5B8 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     McTemplateK0pqqiix @ 0x1C00292A0 (McTemplateK0pqqiix.c)
 *     McTemplateK0qqix @ 0x1C002A3BC (McTemplateK0qqix.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C002A7F8 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002F060 (VidSchSignalSyncObjectsFromCpu.c)
 */

void __fastcall VidSchiProcessPeriodicNotificationCookie(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // rsi
  union _SLIST_HEADER *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONGLONG Alignment; // rbx
  __int64 v11; // rbx
  unsigned __int64 Region; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbp
  __int64 v24; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp+8h] BYREF

  v4 = *(unsigned int *)(a2 + 48);
  v6 = *(unsigned int *)(a2 + 52);
  v7 = *(union _SLIST_HEADER **)(a1 + 8 * v4 + 3032);
  if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
    McTemplateK0qqix(a1, v4, a3, v4, v6, v7[1752].Region, v7[1752].Alignment);
  ExpInterlockedPushEntrySList(v7 + 3832, (PSLIST_ENTRY)(a2 + 16));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  Alignment = v7[3831].Alignment;
  if ( !Alignment
    || (v9 = (unsigned __int8)v6, (v11 = *(_QWORD *)(Alignment + 8LL * (unsigned __int8)v6)) == 0)
    || *(_DWORD *)(v11 + 24) != (_DWORD)v6 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8);
    v18[3] = v6;
    goto LABEL_18;
  }
  Region = v7[1752].Region;
  v15 = VidSchiCalculatePeriodicTargetFrameNumber(v11, Region, v7[1752].Alignment, &v27);
  v27 = v15;
  v17 = *(_QWORD *)(v11 + 56);
  if ( v17 == v15 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v13);
    v18[3] = v15;
LABEL_18:
    WdLogEvent5_WdAssertion(v18);
    goto LABEL_19;
  }
  if ( v17 > v15 )
  {
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v14, (__int64)&EventPerformanceWarning, v16, 25);
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v13);
    v18[3] = v15;
    v18[4] = *(_QWORD *)(v11 + 56);
    goto LABEL_18;
  }
  v19 = VidSchSignalSyncObjectsFromCpu(1, v11, 0, (unsigned int)&v27, 1);
  v23 = v19;
  if ( v19 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v21, v20);
    v18[3] = *(unsigned int *)(v11 + 8);
    v18[4] = v6;
    v18[5] = v23;
    goto LABEL_18;
  }
  *(_QWORD *)(v11 + 56) = v15;
  if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    LODWORD(v25) = v6;
    LODWORD(v24) = *(_DWORD *)(v11 + 8);
    McTemplateK0pqqiix(v21, v20, v22, *(_QWORD *)v11, v24, v25, Region, 0LL, v15);
  }
LABEL_19:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
