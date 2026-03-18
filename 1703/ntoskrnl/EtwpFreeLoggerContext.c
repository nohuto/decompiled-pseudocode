/*
 * XREFs of EtwpFreeLoggerContext @ 0x1404358CC
 * Callers:
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x14001B5F0 (ExReInitializeRundownProtectionCacheAware.c)
 *     EtwpFreeCompression @ 0x14001B67C (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x14001B6E0 (KeRemoveQueueDpc.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14001B7C0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     KeGenericCallDpc @ 0x1400229D0 (KeGenericCallDpc.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExDeleteTimer @ 0x1401491C0 (ExDeleteTimer.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpFreeTraceBufferPool @ 0x140435B54 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140435C9C (EtwpRealtimeDisconnectAllConsumers.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwpFreeStackCache @ 0x140713738 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x140713838 (EtwpCancelMemoryPreservation.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  __int64 v3; // r15
  __int64 v4; // rcx
  void *v5; // rcx
  UNICODE_STRING *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  char *v12; // rbx
  char *v13; // rcx
  char *v14; // rbx
  PRKEVENT *v15; // rbx
  void *v16; // rcx
  _QWORD *v17; // rbp
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  char *v20; // rcx
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)P + 118);
  EtwpRealtimeDisconnectAllConsumers();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 688), 0LL);
  *((_DWORD *)P + 204) |= 0x200u;
  if ( (*((_DWORD *)P + 205) & 0x20) != 0 )
  {
    v15 = (PRKEVENT *)*((_QWORD *)P + 44);
    *((_QWORD *)P + 44) = 0LL;
    *((_DWORD *)P + 14) = 0;
    _InterlockedAnd((volatile signed __int32 *)P + 205, 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)P + 19, 0, 0);
    KeSetEvent(v15[6], 0, 0);
    ObfDereferenceObject(v15);
  }
  ExReleasePushLockEx((ULONG_PTR)(P + 688), 0LL);
  v3 = *(unsigned int *)P;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v1 + 8 * v3 + 408), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v1 + 8 * v3 + 408));
  if ( *((_WORD *)P + 440) )
  {
    v16 = (void *)*((_QWORD *)P + 111);
    *((_WORD *)P + 440) = 0;
    ExFreePoolWithTag(v16, 0);
    *((_QWORD *)P + 111) = 0LL;
  }
  v4 = *((_QWORD *)P + 115);
  if ( v4 )
  {
    memset(v21, 0, 24);
    ExDeleteTimer(v4, 1, 1, (unsigned int *)v21);
  }
  v5 = (void *)*((_QWORD *)P + 114);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( *((_DWORD *)P + 75) != 1 )
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 504));
  KeRemoveQueueDpc((PRKDPC)(P + 568));
  v6 = (UNICODE_STRING *)*((_QWORD *)P + 117);
  if ( v6 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeUnicodeString(v6 + 1);
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)P + 117) = 0LL;
  }
  EtwpFreeTraceBufferPool(P);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v7 = 8 * v3 + 512;
    v8 = (unsigned int)KeNumberProcessors_0;
    do
    {
      *(_QWORD *)(v7 + *(_QWORD *)(*((_QWORD *)P + 118) + 5104LL)) = 0LL;
      v7 += 1024LL;
      --v8;
    }
    while ( v8 );
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 152));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 168));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 184));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 23);
  v9 = (void *)*((_QWORD *)P + 90);
  if ( v9 )
    ObfDereferenceObject(v9);
  v10 = (void *)*((_QWORD *)P + 97);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = _InterlockedExchange64((volatile __int64 *)P + 98, 0LL);
  ObDereferenceSecurityDescriptor(v11 & 0xFFFFFFFFFFFFFFF0uLL, (unsigned int)(v11 & 0xF) + 1);
  if ( (*((_DWORD *)P + 204) & 0x80u) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 104), 0);
  if ( (*((_DWORD *)P + 204) & 0x2000) != 0 )
    _InterlockedDecrement(&dword_14036EA60);
  if ( (*((_DWORD *)P + 204) & 0x1000000) != 0 )
    EtwpFreeStackCache(*((_QWORD *)P + 105));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset(&EtwpActiveSystemLoggers, (unsigned __int8)P[818]);
  if ( *((_QWORD *)P + 106) )
  {
    v17 = (_QWORD *)*((_QWORD *)P + 106);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v18 = v17 + 6;
      v19 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v18 )
          off_14033B4F0[0]();
        ++v18;
        --v19;
      }
      while ( v19 );
    }
    ExFreePoolWithTag(v17, 0);
  }
  v12 = (char *)*((_QWORD *)P + 14);
  while ( v12 != P + 112 )
  {
    v13 = v12;
    v12 = *(char **)v12;
    ExFreePoolWithTag(v13, 0);
  }
  v14 = (char *)*((_QWORD *)P + 107);
  while ( v14 != P + 856 )
  {
    v20 = v14;
    v14 = *(char **)v14;
    ExFreePoolWithTag(v20, 0);
  }
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v1 + 8 * v3 + 408));
  *(_QWORD *)(v1 + 8 * v3 + 920) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 5092));
}
