/*
 * XREFs of VidSchCreatePeriodicFrameNotification @ 0x1C002E1C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C002D90C (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     McTemplateK0pqxxqpp @ 0x1C002DEA4 (McTemplateK0pqxxqpp.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C002E5D0 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncAdapter @ 0x1C0056ED0 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncAvailable @ 0x1C007AF60 (VidSchIsVSyncAvailable.c)
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
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rdx
  PVOID v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // ecx
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
  v9 = *(_QWORD *)(a1 + 8 * v7 + 3032);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(unsigned __int8)VidSchIsVSyncAvailable(a1, (unsigned int)v7) )
    return 3223191558LL;
  LOBYTE(v10) = 1;
  if ( (int)VidSchControlVSyncAdapter(a1, 3LL, v10) < 0 )
    return 3223191558LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x48uLL, 0x68536956u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
    *((_BYTE *)v14 + 25) = *(_BYTE *)(v9 + 65424) + 1;
    v17 = *(_QWORD *)(v9 + 61296);
    if ( v17 )
    {
      v21 = 0LL;
      while ( *(_QWORD *)(v17 + 8 * v21) )
      {
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= 8 )
        {
          _InterlockedIncrement(&dword_1C00476A4);
          v20 = WdLogNewEntry5_WdLowResource(v21);
          *(_QWORD *)(v20 + 24) = 12389LL;
          goto LABEL_14;
        }
      }
      *((_BYTE *)v14 + 24) = v21;
    }
    else
    {
      v18 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x68536956u);
      *(_QWORD *)(v9 + 61296) = v18;
      if ( !v18 )
      {
        _InterlockedIncrement(&dword_1C00476A4);
        v20 = WdLogNewEntry5_WdLowResource(v19);
        *(_QWORD *)(v20 + 24) = 12363LL;
LABEL_14:
        WdLogEvent5_WdLowResource(v20);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        VidSchControlVSyncAdapter(a1, 3LL, 0LL);
        ExFreePoolWithTag(v14, 0x68536956u);
        v16 = -1073741801;
        goto LABEL_36;
      }
      memset(v18, 0, 0x40uLL);
      *((_BYTE *)v14 + 24) = 0;
    }
    *(_QWORD *)(*(_QWORD *)(v9 + 61296) + 8LL * (unsigned __int8)*((_DWORD *)v14 + 6)) = v14;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    *v14 = a2;
    v14[8] = *(_QWORD *)(a1 + 16);
    v14[2] = *(_QWORD *)(a5 + 16);
    v14[6] = a3;
    *((_DWORD *)v14 + 2) = v7;
    if ( *(_DWORD *)(a1 + 208) == 1 )
    {
      v16 = -1073741822;
    }
    else
    {
      v24 = *(_QWORD *)(a1 + 16);
      v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 2456) + 112LL) + 3760LL * (unsigned int)v7 + 1068);
      v40[2] = *(_QWORD *)(a5 + 16);
      LODWORD(v40[1]) = v25;
      LODWORD(v40[3]) = *((_DWORD *)v14 + 6);
      v26 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[64])(*(_QWORD *)(v24 + 2456), v40);
      v16 = v26;
      if ( v26 >= 0 )
      {
        v23 = v40[4];
        v14[4] = v40[4];
        goto LABEL_32;
      }
      if ( (unsigned int)(v26 + 0x3FFFFFFF) > 1 )
      {
LABEL_32:
        *a6 = v14;
        if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
          McTemplateK0pqxxqpp(
            v23,
            &EventCreatePeriodicFrameNotification,
            v27,
            *v14,
            *((_DWORD *)v14 + 2),
            v14[2],
            v14[6],
            *((_DWORD *)v14 + 6),
            v14[4],
            v14[5],
            LockHandle.LockQueue.Next,
            LockHandle.LockQueue.Lock,
            *(_QWORD *)&LockHandle.OldIrql);
        if ( v16 >= 0 )
          return (unsigned int)v16;
        goto LABEL_35;
      }
    }
    v28 = *(_DWORD *)(a1 + 208);
    if ( v28 == 2 )
    {
      v29 = WdLogNewEntry5_WdWarning(v23, v22);
      *(_QWORD *)(v29 + 24) = v16;
      WdLogEvent5_WdWarning(v29);
      v16 = -1073741822;
LABEL_35:
      VidSchDestroyPeriodicFrameNotification(*(PVOID *)(*(_QWORD *)(v9 + 61296)
                                                      + 8LL * (unsigned __int8)*((_DWORD *)v14 + 6)));
      *(_QWORD *)(*(_QWORD *)(v9 + 61296) + 8LL * (unsigned __int8)*((_DWORD *)v14 + 6)) = 0LL;
      goto LABEL_36;
    }
    if ( v28 != 1 )
    {
      v30 = WdLogNewEntry5_WdWarning(v23, v22);
      *(_QWORD *)(v30 + 24) = v16;
      WdLogEvent5_WdWarning(v30);
      if ( bTracingEnabled )
      {
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v31, (__int64)&EventPerformanceWarning, v32, 25);
      }
    }
    v33 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(*(_QWORD *)(v9 + 28040), v14[6], v14[2], -1);
    Timer = ExAllocateTimer(VidSchPeriodicMonitoredFenceTimerCallback, v14, 4LL);
    v14[5] = Timer;
    if ( !Timer )
    {
      v37 = WdLogNewEntry5_WdAssertion(v36, v35);
      WdLogEvent5_WdAssertion(v37);
      v16 = -1073741801;
      goto LABEL_35;
    }
    v38 = 0LL;
    if ( v33 <= 0 )
      v38 = v33;
    ExSetTimer(Timer, v38, 0LL, 0LL);
    v16 = 0;
    goto LABEL_32;
  }
  _InterlockedIncrement(&dword_1C00476A4);
  v15 = WdLogNewEntry5_WdLowResource(v13);
  *(_QWORD *)(v15 + 24) = 12343LL;
  WdLogEvent5_WdLowResource(v15);
  v16 = -1073741801;
  VidSchControlVSyncAdapter(a1, 3LL, 0LL);
LABEL_36:
  *a6 = 0LL;
  return (unsigned int)v16;
}
