/*
 * XREFs of VidSchCreatePeriodicFrameNotification @ 0x1C0029370
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C0028928 (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     Template_pqxxqpp @ 0x1C0028F58 (Template_pqxxqpp.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0029780 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncAdapter @ 0x1C006C6F0 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncAvailable @ 0x1C006EBF0 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchCreatePeriodicFrameNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r8
  _QWORD *PoolWithTag; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rdx
  PVOID v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  __int64 Timer; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v40[5]; // [rsp+70h] [rbp-1h] BYREF

  v7 = a4;
  memset(v40, 0, sizeof(v40));
  v9 = *(_QWORD *)(a1 + 8 * v7 + 2992);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = (unsigned int)v7;
  if ( !(unsigned __int8)VidSchIsVSyncAvailable(a1, (unsigned int)v7) )
    return 3223191558LL;
  LOBYTE(v11) = 1;
  if ( (int)VidSchControlVSyncAdapter(a1, 3LL, v11) < 0 )
    return 3223191558LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x48uLL, 0x68536956u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
    *((_BYTE *)v15 + 25) = *(_BYTE *)(v9 + 51056) + 1;
    v18 = *(_QWORD *)(v9 + 46936);
    if ( v18 )
    {
      v22 = 0LL;
      while ( *(_QWORD *)(v18 + 8 * v22) )
      {
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= 8 )
        {
          _InterlockedIncrement(&dword_1C003C694);
          v21 = WdLogNewEntry5_WdLowResource(v22);
          *(_QWORD *)(v21 + 24) = 11533LL;
          goto LABEL_14;
        }
      }
      *((_BYTE *)v15 + 24) = v22;
    }
    else
    {
      v19 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x68536956u);
      *(_QWORD *)(v9 + 46936) = v19;
      if ( !v19 )
      {
        _InterlockedIncrement(&dword_1C003C694);
        v21 = WdLogNewEntry5_WdLowResource(v20);
        *(_QWORD *)(v21 + 24) = 11507LL;
LABEL_14:
        WdLogEvent5_WdLowResource(v21);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v17 = -1073741801;
        VidSchControlVSyncAdapter(a1, 3LL, 0LL);
        ExFreePoolWithTag(v15, 0x68536956u);
        goto LABEL_36;
      }
      memset(v19, 0, 0x40uLL);
      *((_BYTE *)v15 + 24) = 0;
    }
    *(_QWORD *)(*(_QWORD *)(v9 + 46936) + 8LL * (unsigned __int8)*((_DWORD *)v15 + 6)) = v15;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    *v15 = a2;
    v15[8] = *(_QWORD *)(a1 + 16);
    v15[2] = *(_QWORD *)(a5 + 16);
    v15[6] = a3;
    *((_DWORD *)v15 + 2) = v7;
    if ( *(_DWORD *)(a1 + 204) == 1 )
    {
      v17 = -1073741822;
    }
    else
    {
      v25 = *(_QWORD *)(a1 + 16);
      LODWORD(v40[1]) = *(_DWORD *)(3208LL * (unsigned int)v7 + *(_QWORD *)(*(_QWORD *)(v25 + 2280) + 112LL) + 1028);
      v40[2] = *(_QWORD *)(a5 + 16);
      LODWORD(v40[3]) = *((_DWORD *)v15 + 6);
      v26 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[52])(*(_QWORD *)(v25 + 2280), v40);
      v17 = v26;
      if ( v26 >= 0 )
      {
        v24 = v40[4];
        v15[4] = v40[4];
        goto LABEL_32;
      }
      if ( (unsigned int)(v26 + 0x3FFFFFFF) > 1 )
      {
LABEL_32:
        *a6 = v15;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pqxxqpp(
            v24,
            &EventCreatePeriodicFrameNotification,
            v27,
            *v15,
            *((_DWORD *)v15 + 2),
            v15[2],
            v15[6],
            *((_DWORD *)v15 + 6),
            v15[4],
            v15[5],
            LockHandle.LockQueue.Next,
            LockHandle.LockQueue.Lock,
            *(_QWORD *)&LockHandle.OldIrql);
        if ( v17 >= 0 )
          return (unsigned int)v17;
        goto LABEL_35;
      }
    }
    v28 = *(_DWORD *)(a1 + 204);
    if ( v28 == 2 )
    {
      v29 = WdLogNewEntry5_WdWarning(v24, v23);
      *(_QWORD *)(v29 + 24) = v17;
      WdLogEvent5_WdWarning(v29);
      v17 = -1073741822;
LABEL_35:
      VidSchDestroyPeriodicFrameNotification(*(PVOID *)(*(_QWORD *)(v9 + 46936)
                                                      + 8LL * (unsigned __int8)*((_DWORD *)v15 + 6)));
      *(_QWORD *)(*(_QWORD *)(v9 + 46936) + 8LL * (unsigned __int8)*((_DWORD *)v15 + 6)) = 0LL;
      goto LABEL_36;
    }
    if ( v28 != 1 )
    {
      v30 = WdLogNewEntry5_WdWarning(v24, v23);
      *(_QWORD *)(v30 + 24) = v17;
      WdLogEvent5_WdWarning(v30);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v31, &EventPerformanceWarning, v32, 25);
      }
    }
    v33 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(
            *(_QWORD *)(*(_QWORD *)(a1 + 8 * v10 + 2992) + 18808LL),
            v15[6],
            v15[2],
            0);
    Timer = ExAllocateTimer(VidSchPeriodicMonitoredFenceTimerCallback, v15, 4LL);
    v15[5] = Timer;
    if ( !Timer )
    {
      v37 = WdLogNewEntry5_WdAssertion(v36, v35);
      WdLogEvent5_WdAssertion(v37);
      v17 = -1073741801;
      goto LABEL_35;
    }
    v38 = 0LL;
    if ( v33 <= 0 )
      v38 = v33;
    ExSetTimer(Timer, v38, 0LL, 0LL);
    v17 = 0;
    goto LABEL_32;
  }
  _InterlockedIncrement(&dword_1C003C694);
  v16 = WdLogNewEntry5_WdLowResource(v14);
  *(_QWORD *)(v16 + 24) = 11487LL;
  WdLogEvent5_WdLowResource(v16);
  v17 = -1073741801;
  VidSchControlVSyncAdapter(a1, 3LL, 0LL);
LABEL_36:
  *a6 = 0LL;
  return (unsigned int)v17;
}
