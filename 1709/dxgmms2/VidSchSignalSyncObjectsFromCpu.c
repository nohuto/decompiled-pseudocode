/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x1C002BFD0
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C0028A24 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C002A970 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0028C90 (VidSchiPropagateCrossAdapterSignal.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        char a5)
{
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 *v13; // r13
  __int64 i; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  char *v22; // r14
  __int64 v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF

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
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 1888LL), &LockHandle);
  if ( v6 )
  {
LABEL_22:
    if ( (_DWORD)v7 )
    {
      v21 = v10;
      v22 = (char *)a4 - v10;
      v23 = v7;
      do
      {
        if ( !*(_BYTE *)(*(_QWORD *)v21 + 28LL) )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
          v24[3] = *(_QWORD *)v21;
          v24[4] = **(_QWORD **)(*(_QWORD *)v21 + 56LL);
          v24[5] = *(_QWORD *)&v22[v21];
          WdLogEvent5_WdEvent(v24);
          *(_QWORD *)(*(_QWORD *)v21 + 80LL) = *(_QWORD *)&v22[v21];
          v25 = *(_QWORD *)&v22[v21];
          a2 = *(_QWORD *)(*(_QWORD *)v21 + 56LL);
          if ( *(_BYTE *)(*(_QWORD *)v21 + 29LL) )
            *(_QWORD *)a2 = v25;
          else
            *(_DWORD *)a2 = v25;
          a1 = *(_QWORD **)v21;
          if ( *(_BYTE *)(*(_QWORD *)v21 + 27LL) )
            VidSchiPropagateCrossAdapterSignal(a1);
        }
        v21 += 8LL;
        --v23;
      }
      while ( v23 );
    }
    goto LABEL_31;
  }
  v12 = 0LL;
  if ( !(_DWORD)v7 )
  {
LABEL_31:
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(*(_QWORD *)v10 + 8LL));
    goto LABEL_32;
  }
  v13 = a4;
  for ( i = v10 - (_QWORD)a4; ; i = v10 - (_QWORD)a4 )
  {
    v15 = *(unsigned __int64 *)((char *)v13 + i);
    if ( *(_BYTE *)(v15 + 28) )
      goto LABEL_17;
    v16 = *v13;
    v17 = *(_QWORD *)(v15 + 80);
    if ( !*(_BYTE *)(v15 + 29) )
      break;
    if ( v16 < v17 )
    {
      v19 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v19 + 24) = v16;
      *(_QWORD *)(v19 + 32) = v17;
      goto LABEL_21;
    }
    if ( v16 == v17 )
    {
      v18 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v18 + 24) = v16;
LABEL_16:
      WdLogEvent5_WdWarning(v18);
    }
LABEL_17:
    v12 = (unsigned int)(v12 + 1);
    ++v13;
    if ( (unsigned int)v12 >= (unsigned int)v7 )
      goto LABEL_22;
  }
  if ( (int)v17 - (int)v16 <= 0 )
  {
    if ( (_DWORD)v17 != (_DWORD)v16 )
      goto LABEL_17;
    v18 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v18 + 24) = (unsigned int)v16;
    goto LABEL_16;
  }
  v19 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v19 + 24) = (unsigned int)v16;
  *(_QWORD *)(v19 + 32) = (unsigned int)v17;
LABEL_21:
  WdLogEvent5_WdWarning(v19);
  v8 = -1073741811;
  v20 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v20 + 24) = a4[v12];
  *(_QWORD *)(v20 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v20);
LABEL_32:
  if ( !a5 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}
