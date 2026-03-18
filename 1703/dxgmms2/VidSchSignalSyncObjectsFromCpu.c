/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x1C002A590
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002694C (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00289D0 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000AA20 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0026B88 (VidSchiPropagateCrossAdapterSignal.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // r12
  unsigned int v7; // edi
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  unsigned int v13; // ebp
  unsigned __int64 *v14; // r13
  __int64 i; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  char *v23; // r14
  __int64 v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF

  v4 = a3;
  v5 = a3 & 4;
  v6 = (unsigned int)a1;
  v7 = 0;
  if ( v5 != a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    v7 = -1073741811;
    *(_QWORD *)(v10 + 24) = v4;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v10);
    return v7;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 1880LL), &LockHandle);
  if ( v5 )
  {
LABEL_20:
    if ( (_DWORD)v6 )
    {
      v22 = a2;
      v23 = (char *)a4 - a2;
      v24 = v6;
      do
      {
        if ( !*(_BYTE *)(*(_QWORD *)v22 + 28LL) )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
          v25[3] = *(_QWORD *)v22;
          v25[4] = **(_QWORD **)(*(_QWORD *)v22 + 56LL);
          v25[5] = *(_QWORD *)&v23[v22];
          WdLogEvent5_WdEvent(v25);
          *(_QWORD *)(*(_QWORD *)v22 + 80LL) = *(_QWORD *)&v23[v22];
          v26 = *(_QWORD *)&v23[v22];
          v11 = *(_QWORD **)(*(_QWORD *)v22 + 56LL);
          if ( *(_BYTE *)(*(_QWORD *)v22 + 29LL) )
            *v11 = v26;
          else
            *(_DWORD *)v11 = v26;
          v12 = *(_QWORD **)v22;
          if ( *(_BYTE *)(*(_QWORD *)v22 + 27LL) )
            VidSchiPropagateCrossAdapterSignal(v12);
        }
        v22 += 8LL;
        --v24;
      }
      while ( v24 );
    }
    goto LABEL_29;
  }
  v13 = 0;
  if ( !(_DWORD)v6 )
  {
LABEL_29:
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(*(_QWORD *)a2 + 8LL));
    goto LABEL_30;
  }
  v14 = a4;
  for ( i = a2 - (_QWORD)a4; ; i = a2 - (_QWORD)a4 )
  {
    v16 = *(unsigned __int64 *)((char *)v14 + i);
    if ( *(_BYTE *)(v16 + 28) )
      goto LABEL_15;
    v17 = *v14;
    v18 = *(_QWORD *)(v16 + 80);
    if ( !*(_BYTE *)(v16 + 29) )
      break;
    if ( v17 < v18 )
    {
      v20 = WdLogNewEntry5_WdWarning(v12, v11);
      *(_QWORD *)(v20 + 24) = v17;
      *(_QWORD *)(v20 + 32) = v18;
      goto LABEL_19;
    }
    if ( v17 == v18 )
    {
      v19 = WdLogNewEntry5_WdWarning(v12, v11);
      *(_QWORD *)(v19 + 24) = v17;
LABEL_14:
      WdLogEvent5_WdWarning(v19);
    }
LABEL_15:
    ++v13;
    ++v14;
    if ( v13 >= (unsigned int)v6 )
      goto LABEL_20;
  }
  if ( (int)v18 - (int)v17 <= 0 )
  {
    if ( (_DWORD)v18 != (_DWORD)v17 )
      goto LABEL_15;
    v19 = WdLogNewEntry5_WdWarning(v12, v11);
    *(_QWORD *)(v19 + 24) = (unsigned int)v17;
    goto LABEL_14;
  }
  v20 = WdLogNewEntry5_WdWarning(v12, v11);
  *(_QWORD *)(v20 + 24) = (unsigned int)v17;
  *(_QWORD *)(v20 + 32) = (unsigned int)v18;
LABEL_19:
  WdLogEvent5_WdWarning(v20);
  v7 = -1073741811;
  v21 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v21 + 24) = a4[v13];
  *(_QWORD *)(v21 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v21);
LABEL_30:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v7;
}
