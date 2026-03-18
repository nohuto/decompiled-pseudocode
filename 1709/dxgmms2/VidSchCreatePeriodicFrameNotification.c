/*
 * XREFs of VidSchCreatePeriodicFrameNotification @ 0x1C002B170
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C002A8CC (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     McTemplateK0pqxxqpp @ 0x1C002AE54 (McTemplateK0pqxxqpp.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C002B580 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncAdapter @ 0x1C0071330 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncAvailable @ 0x1C0074BA0 (VidSchIsVSyncAvailable.c)
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
  __int64 v10; // r8
  _QWORD *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rdx
  PVOID v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
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
  v9 = *(_QWORD *)(a1 + 8 * v7 + 3008);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(unsigned __int8)VidSchIsVSyncAvailable(a1, (unsigned int)v7) )
    return 3223191558LL;
  LOBYTE(v10) = 1;
  if ( (int)VidSchControlVSyncAdapter(a1, 3LL, v10) < 0 )
    return 3223191558LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x48uLL, 0x68536956u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
    *((_BYTE *)v15 + 25) = *(_BYTE *)(v9 + 60944) + 1;
    v18 = *(_QWORD *)(v9 + 56816);
    if ( v18 )
    {
      v23 = 0LL;
      while ( *(_QWORD *)(v18 + 8 * v23) )
      {
        v23 = (unsigned int)(v23 + 1);
        if ( (unsigned int)v23 >= 8 )
        {
          _InterlockedIncrement(&dword_1C00406A4);
          v22 = WdLogNewEntry5_WdLowResource(v23, v18);
          *(_QWORD *)(v22 + 24) = 11616LL;
          goto LABEL_14;
        }
      }
      *((_BYTE *)v15 + 24) = v23;
    }
    else
    {
      v19 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x68536956u);
      *(_QWORD *)(v9 + 56816) = v19;
      if ( !v19 )
      {
        _InterlockedIncrement(&dword_1C00406A4);
        v22 = WdLogNewEntry5_WdLowResource(v21, v20);
        *(_QWORD *)(v22 + 24) = 11590LL;
LABEL_14:
        WdLogEvent5_WdLowResource(v22);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        VidSchControlVSyncAdapter(a1, 3LL, 0LL);
        ExFreePoolWithTag(v15, 0x68536956u);
        v17 = -1073741801;
        goto LABEL_36;
      }
      memset(v19, 0, 0x40uLL);
      *((_BYTE *)v15 + 24) = 0;
    }
    *(_QWORD *)(*(_QWORD *)(v9 + 56816) + 8LL * (unsigned __int8)*((_DWORD *)v15 + 6)) = v15;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    *v15 = a2;
    v15[8] = *(_QWORD *)(a1 + 16);
    v15[2] = *(_QWORD *)(a5 + 16);
    v15[6] = a3;
    *((_DWORD *)v15 + 2) = v7;
    if ( *(_DWORD *)(a1 + 208) == 1 )
    {
      v17 = -1073741822;
    }
    else
    {
      v24 = *(_QWORD *)(a1 + 16);
      LODWORD(v40[1]) = *(_DWORD *)(3760LL * (unsigned int)v7 + *(_QWORD *)(*(_QWORD *)(v24 + 2304) + 112LL) + 1068);
      v40[2] = *(_QWORD *)(a5 + 16);
      LODWORD(v40[3]) = *((_DWORD *)v15 + 6);
      v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[52])(*(_QWORD *)(v24 + 2304), v40);
      v17 = v25;
      if ( v25 >= 0 )
      {
        v26 = v40[4];
        v15[4] = v40[4];
        goto LABEL_32;
      }
      if ( (unsigned int)(v25 + 0x3FFFFFFF) > 1 )
      {
LABEL_32:
        *a6 = v15;
        if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
          McTemplateK0pqxxqpp(
            v26,
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
    v28 = *(_DWORD *)(a1 + 208);
    if ( v28 == 2 )
    {
      v29 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v29 + 24) = v17;
      WdLogEvent5_WdWarning(v29);
      v17 = -1073741822;
LABEL_35:
      VidSchDestroyPeriodicFrameNotification(*(PVOID *)(*(_QWORD *)(v9 + 56816)
                                                      + 8LL * (unsigned __int8)*((_DWORD *)v15 + 6)));
      *(_QWORD *)(*(_QWORD *)(v9 + 56816) + 8LL * (unsigned __int8)*((_DWORD *)v15 + 6)) = 0LL;
      goto LABEL_36;
    }
    if ( v28 != 1 )
    {
      v30 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v30 + 24) = v17;
      WdLogEvent5_WdWarning(v30);
      if ( bTracingEnabled )
      {
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v31, (__int64)&EventPerformanceWarning, v32, 25);
      }
    }
    v33 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(*(_QWORD *)(v9 + 23560), v15[6], v15[2], -1);
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
  _InterlockedIncrement(&dword_1C00406A4);
  v16 = WdLogNewEntry5_WdLowResource(v14, v13);
  *(_QWORD *)(v16 + 24) = 11570LL;
  WdLogEvent5_WdLowResource(v16);
  v17 = -1073741801;
  VidSchControlVSyncAdapter(a1, 3LL, 0LL);
LABEL_36:
  *a6 = 0LL;
  return (unsigned int)v17;
}
