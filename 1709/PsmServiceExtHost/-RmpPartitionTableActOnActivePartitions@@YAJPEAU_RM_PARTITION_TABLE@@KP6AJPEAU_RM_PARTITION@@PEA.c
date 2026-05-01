/*
 * XREFs of ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000F9E0
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180010290 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180020270 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180020590 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 *     ?RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003C8AC (-RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x180039EB4 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

__int64 __fastcall RmpPartitionTableActOnActivePartitions(
        struct _RM_PARTITION_TABLE *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct _RM_PARTITION *, void *),
        void *a4)
{
  _QWORD *v4; // rdi
  struct _RM_PARTITION_TABLE *v8; // rdx
  __int64 i; // rbx
  volatile signed __int64 *v10; // r8
  __int64 v11; // rsi
  signed __int64 *v12; // rbx
  struct _RM_PARTITION *v13; // rcx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  signed __int64 v17; // rbp
  signed __int64 v18; // rax
  bool v19; // cc
  signed __int64 v20; // rax

  v4 = (_QWORD *)*((_QWORD *)a1 + 8);
  memset_0(v4, 0, 8LL * *((unsigned int *)a1 + 18));
  RtlAcquireSRWLockShared(a1);
  v8 = (struct _RM_PARTITION_TABLE *)*((_QWORD *)a1 + 2);
  for ( i = 0LL; v8 != (struct _RM_PARTITION_TABLE *)((char *)a1 + 16); v8 = *(struct _RM_PARTITION_TABLE **)v8 )
  {
    v10 = (volatile signed __int64 *)((char *)v8 - 8);
    if ( (*((_DWORD *)v8 + 54) & 3) == 1 )
    {
      if ( _InterlockedIncrement64(v10) <= 1 )
        __fastfail(0xEu);
      v4[i] = v10;
      i = (unsigned int)(i + 1);
    }
  }
  RtlReleaseSRWLockShared(a1);
  if ( (_DWORD)i )
  {
    v11 = (unsigned int)i;
    do
    {
      v12 = (signed __int64 *)*v4;
      v13 = (struct _RM_PARTITION *)*v4;
      if ( a3 == ExecutionModel::ResourceSet::ProcessPendingRequestList )
        ExecutionModel::ResourceSet::ProcessPendingRequestList(v13, a4);
      else
        a3(v13, a4);
      _m_prefetchw(v12);
      v14 = *v12;
      while ( v14 - 1 > 0 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange64(v12, v14 - 1, v14);
        if ( v15 == v14 )
          goto LABEL_13;
      }
      if ( v14 != 1 )
        __fastfail(0xEu);
      v17 = v12[3];
      RtlAcquireSRWLockExclusive(v17 + 312);
      *(_DWORD *)(v17 + 320) = GetCurrentThreadId();
      v18 = _InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL);
      v19 = v18 <= 1;
      v20 = v18 - 1;
      if ( v19 )
      {
        if ( v20 )
          __fastfail(0xEu);
        if ( v12[1] )
        {
          *((_DWORD *)v12 + 56) &= ~1u;
          *((_DWORD *)v12 + 56) |= 2u;
          SetEvent((HANDLE)v12[8]);
        }
        else
        {
          RmpPartitionCleanup((struct _RM_PARTITION *)v12);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
        }
      }
      *(_DWORD *)(v17 + 320) = 0;
      RtlReleaseSRWLockExclusive(v17 + 312);
LABEL_13:
      ++v4;
      --v11;
    }
    while ( v11 );
  }
  return 0LL;
}
