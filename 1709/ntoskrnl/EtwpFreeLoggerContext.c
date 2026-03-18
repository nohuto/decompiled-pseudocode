/*
 * XREFs of EtwpFreeLoggerContext @ 0x14058E0D4
 * Callers:
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400FCFD0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x1400FD080 (ExReInitializeRundownProtectionCacheAware.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140129264 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFreeCompression @ 0x1401292C0 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140129630 (KeRemoveQueueDpc.c)
 *     KeGenericCallDpc @ 0x14012F0C0 (KeGenericCallDpc.c)
 *     ExDeleteTimer @ 0x14012F420 (ExDeleteTimer.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140484DE0 (ObDereferenceSecurityDescriptor.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     EtwpFreeTraceBufferPool @ 0x14058E374 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14058E65C (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpFreeStackCache @ 0x140752884 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x140752988 (EtwpCancelMemoryPreservation.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rcx
  void *v6; // rcx
  UNICODE_STRING *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  char *v13; // rbx
  char *v14; // rcx
  char *v15; // rbx
  PRKEVENT *v16; // rbx
  void *v17; // rcx
  _QWORD *v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rsi
  _DWORD *v21; // rax
  char *v22; // rcx
  _QWORD *v23; // rcx
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)P + 282);
  EtwpRealtimeDisconnectAllConsumers(P);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 704), 0LL);
  *((_DWORD *)P + 208) |= 0x200u;
  if ( (*((_DWORD *)P + 209) & 0x20) != 0 )
  {
    v16 = (PRKEVENT *)*((_QWORD *)P + 46);
    *((_QWORD *)P + 46) = 0LL;
    *((_DWORD *)P + 14) = 0;
    _InterlockedAnd((volatile signed __int32 *)P + 209, 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(P + 472), 0, 0);
    KeSetEvent(v16[6], 0, 0);
    ObfDereferenceObject(v16);
  }
  ExReleasePushLockEx((ULONG_PTR)(P + 704), 0LL);
  v3 = *(unsigned int *)P;
  EtwpCancelPendingStackwalkApcs((unsigned int *)P);
  v4 = (unsigned int)v3;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 416) + 8 * v3), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 416) + 8 * v3));
  if ( *((_WORD *)P + 1096) )
  {
    v17 = (void *)*((_QWORD *)P + 275);
    *((_WORD *)P + 1096) = 0;
    ExFreePoolWithTag(v17, 0);
    *((_QWORD *)P + 275) = 0LL;
  }
  v5 = *((_QWORD *)P + 279);
  if ( v5 )
  {
    memset(v24, 0, 24);
    ExDeleteTimer(v5, 1, 1, (unsigned int *)v24);
  }
  v6 = (void *)*((_QWORD *)P + 278);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( *((_DWORD *)P + 79) != 1 )
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  v7 = (UNICODE_STRING *)*((_QWORD *)P + 281);
  if ( v7 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeUnicodeString(v7 + 1);
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)P + 281) = 0LL;
  }
  EtwpFreeTraceBufferPool(P);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v8 = 0LL;
    v9 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v8 += 64LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 282) + 4104LL) + v8 - 56) + 8 * v4) = 0LL;
      --v9;
    }
    while ( v9 );
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 168));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 184));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 200));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 24);
  v10 = (void *)*((_QWORD *)P + 92);
  if ( v10 )
    ObfDereferenceObject(v10);
  v11 = (void *)*((_QWORD *)P + 99);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = _InterlockedExchange64((volatile __int64 *)P + 100, 0LL);
  ObDereferenceSecurityDescriptor(v12 & 0xFFFFFFFFFFFFFFF0uLL, (v12 & 0xF) + 1);
  if ( (*((_DWORD *)P + 208) & 0x80u) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 267), 0);
  if ( (*((_DWORD *)P + 208) & 0x2000) != 0 )
    _InterlockedDecrement(&dword_14038CC20);
  if ( (*((_DWORD *)P + 208) & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 268));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4172), (unsigned __int8)P[834]);
  if ( *((_QWORD *)P + 269) )
  {
    v18 = (_QWORD *)*((_QWORD *)P + 269);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v19 = v18 + 6;
      v20 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v19 )
          off_140353520[0]();
        ++v19;
        --v20;
      }
      while ( v20 );
    }
    ExFreePoolWithTag(v18, 0);
  }
  if ( *((_QWORD *)P + 270) )
  {
    if ( (*((_DWORD *)P + 208) & 0x8000) != 0 )
      _InterlockedDecrement(&dword_14038CC40);
    v21 = (_DWORD *)*((_QWORD *)P + 270);
    if ( v21 )
    {
      if ( *v21 )
        off_1403536F8[0]();
      ExFreePoolWithTag(*((PVOID *)P + 270), 0);
      *((_QWORD *)P + 270) = 0LL;
    }
  }
  v13 = (char *)*((_QWORD *)P + 14);
  while ( v13 != P + 112 )
  {
    v14 = v13;
    v13 = *(char **)v13;
    ExFreePoolWithTag(v14, 0);
  }
  v15 = (char *)*((_QWORD *)P + 271);
  while ( v15 != P + 2168 )
  {
    v22 = v15;
    v15 = *(char **)v15;
    ExFreePoolWithTag(v22, 0);
  }
  while ( *((_QWORD *)P + 16) )
  {
    v23 = (_QWORD *)*((_QWORD *)P + 16);
    *((_QWORD *)P + 16) = *v23;
    ExFreePoolWithTag(v23, 0);
  }
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 416) + 8 * v4));
  *(_QWORD *)(*(_QWORD *)(v1 + 424) + 8 * v4) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4092));
}
