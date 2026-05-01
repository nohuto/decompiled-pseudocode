/*
 * XREFs of ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18001E210
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001E7A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800341C0 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180035420 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 *     ?RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18005BB74 (-RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001E320 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18005943C (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
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
  signed __int64 v15; // rcx
  bool v16; // zf
  signed __int64 v17; // rtt
  signed __int64 v19; // rbp
  signed __int64 v20; // rax
  bool v21; // cc
  signed __int64 v22; // rax

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
      v15 = *v12 - 1;
      v16 = *v12 == 1;
      if ( v15 <= 0 )
      {
LABEL_17:
        if ( !v16 )
          __fastfail(0xEu);
        v19 = v12[3];
        RtlAcquireSRWLockExclusive(v19 + 336);
        *(_DWORD *)(v19 + 344) = GetCurrentThreadId();
        v20 = _InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL);
        v21 = v20 <= 1;
        v22 = v20 - 1;
        if ( v21 )
        {
          if ( v22 )
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
        *(_DWORD *)(v19 + 344) = 0;
        RtlReleaseSRWLockExclusive(v19 + 336);
      }
      else
      {
        while ( 1 )
        {
          v17 = v14;
          v14 = _InterlockedCompareExchange64(v12, v15, v14);
          if ( v17 == v14 )
            break;
          v15 = v14 - 1;
          v16 = v14 == 1;
          if ( v14 - 1 <= 0 )
            goto LABEL_17;
        }
      }
      ++v4;
      --v11;
    }
    while ( v11 );
  }
  return 0LL;
}
