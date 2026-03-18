/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x1C002F060
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002B90C (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C002D9B0 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     VidSchSignalPagingFences @ 0x1C00BE1E4 (VidSchSignalPagingFences.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C002BB78 (VidSchiPropagateCrossAdapterSignal.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        char a5)
{
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // r12
  unsigned int v8; // esi
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 *v13; // r15
  __int64 i; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  char *v22; // r14
  _QWORD *v23; // rax
  _QWORD *v24; // r15
  unsigned __int64 v25; // rdi
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+28h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v5 = a3;
  v6 = a3 & 4;
  v7 = (unsigned int)a1;
  v8 = 0;
  v10 = a2;
  if ( v6 != a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    v8 = -1073741811;
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v11);
    return v8;
  }
  if ( !a5 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 1904LL), &LockHandle);
  if ( v6 )
  {
LABEL_27:
    if ( (_DWORD)v7 )
    {
      v21 = v10;
      v22 = (char *)a4 - v10;
      do
      {
        if ( !*(_BYTE *)(*(_QWORD *)v21 + 28LL) )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
          v23[3] = *(_QWORD *)v21;
          v23[4] = **(_QWORD **)(*(_QWORD *)v21 + 56LL);
          v23[5] = *(_QWORD *)&v22[v21];
          WdLogEvent5_WdEvent(v23);
          v24 = *(_QWORD **)v21;
          v25 = *(_QWORD *)&v22[v21];
          if ( *(_BYTE *)(*(_QWORD *)v21 + 27LL) )
          {
            v26 = v24[25];
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v26 + 8), &v32);
            if ( *(_QWORD *)(v26 + 40) >= v25 )
            {
              v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27);
              v29[3] = v24[2];
              v29[4] = *(_QWORD *)(v26 + 40);
              v29[5] = v25;
              WdLogEvent5_WdWarning(v29);
            }
            else
            {
              *(_QWORD *)(v26 + 40) = v25;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
          }
          else
          {
            v24[10] = v25;
          }
          v30 = *(_QWORD *)&v22[v21];
          a2 = *(_QWORD *)(*(_QWORD *)v21 + 56LL);
          if ( *(_BYTE *)(*(_QWORD *)v21 + 29LL) )
            *(_QWORD *)a2 = v30;
          else
            *(_DWORD *)a2 = v30;
          a1 = *(_QWORD **)v21;
          if ( *(_BYTE *)(*(_QWORD *)v21 + 27LL) )
            VidSchiPropagateCrossAdapterSignal(a1);
        }
        v21 += 8LL;
        --v7;
      }
      while ( v7 );
    }
    goto LABEL_42;
  }
  v12 = 0LL;
  if ( !(_DWORD)v7 )
  {
LABEL_42:
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(*(_QWORD *)v10 + 8LL), a2);
    goto LABEL_43;
  }
  v13 = a4;
  for ( i = v10 - (_QWORD)a4; ; i = v10 - (_QWORD)a4 )
  {
    v15 = *(unsigned __int64 *)((char *)v13 + i);
    if ( *(_BYTE *)(v15 + 28) )
      goto LABEL_22;
    v16 = *v13;
    LOBYTE(a1) = *(_BYTE *)(v15 + 29);
    if ( *(_BYTE *)(v15 + 27) )
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 200) + 40LL);
    else
      v17 = *(_DWORD *)(v15 + 44) == 2 ? *(_QWORD *)(v15 + 56) : *(_QWORD *)(v15 + 80);
    if ( !(_BYTE)a1 )
      break;
    if ( v16 < v17 )
    {
      v19 = WdLogNewEntry5_WdWarning(a1, a2);
      *(_QWORD *)(v19 + 24) = v16;
      *(_QWORD *)(v19 + 32) = v17;
      goto LABEL_26;
    }
    if ( v16 == v17 )
    {
      v18 = WdLogNewEntry5_WdWarning(a1, a2);
      *(_QWORD *)(v18 + 24) = v16;
LABEL_21:
      WdLogEvent5_WdWarning(v18);
    }
LABEL_22:
    v12 = (unsigned int)(v12 + 1);
    ++v13;
    if ( (unsigned int)v12 >= (unsigned int)v7 )
      goto LABEL_27;
  }
  if ( (int)v17 - (int)v16 <= 0 )
  {
    if ( (_DWORD)v17 != (_DWORD)v16 )
      goto LABEL_22;
    v18 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v18 + 24) = (unsigned int)v16;
    goto LABEL_21;
  }
  v19 = WdLogNewEntry5_WdWarning(a1, a2);
  *(_QWORD *)(v19 + 24) = (unsigned int)v16;
  *(_QWORD *)(v19 + 32) = (unsigned int)v17;
LABEL_26:
  WdLogEvent5_WdWarning(v19);
  v8 = -1073741811;
  v20 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v20 + 24) = a4[v12];
  *(_QWORD *)(v20 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v20);
LABEL_43:
  if ( !a5 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}
