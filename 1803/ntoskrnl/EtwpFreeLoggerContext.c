/*
 * XREFs of EtwpFreeLoggerContext @ 0x140493884
 * Callers:
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140005FA8 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFreeCompression @ 0x140005FF4 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140006050 (KeRemoveQueueDpc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140006980 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x140006A30 (ExReInitializeRundownProtectionCacheAware.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     ExDeleteTimer @ 0x1400846E0 (ExDeleteTimer.c)
 *     ExReleaseExtensionTable @ 0x14009C108 (ExReleaseExtensionTable.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140493708 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpFreeTraceBufferPool @ 0x140493744 (EtwpFreeTraceBufferPool.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404C7150 (ObDereferenceSecurityDescriptor.c)
 *     EtwpFreeStackCache @ 0x1407B31E8 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x1407B9724 (EtwpCancelMemoryPreservation.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r15
  ULONG_PTR v7; // rcx
  void *v8; // rcx
  UNICODE_STRING *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  _QWORD *v17; // rbx
  char *v18; // rbx
  char *v19; // rbx
  PRKEVENT *v20; // rbx
  void *v21; // rcx
  _QWORD *v22; // rbp
  _QWORD *v23; // rbx
  __int64 v24; // rsi
  char *v25; // rcx
  char *v26; // rcx
  _QWORD *v27; // rcx
  _QWORD v28[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)P + 139);
  EtwpRealtimeDisconnectAllConsumers((__int64)P);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 704), 0LL);
  *((_DWORD *)P + 208) |= 0x200u;
  if ( (*((_DWORD *)P + 209) & 0x20) != 0 )
  {
    v20 = (PRKEVENT *)*((_QWORD *)P + 46);
    *((_QWORD *)P + 46) = 0LL;
    *((_DWORD *)P + 14) = 0;
    _InterlockedAnd((volatile signed __int32 *)P + 209, 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(P + 472), 0, 0);
    KeSetEvent(v20[6], 0, 0);
    ObfDereferenceObject(v20);
  }
  ExReleasePushLockEx((ULONG_PTR)(P + 704), 0LL, v3, v4);
  v5 = *(unsigned int *)P;
  EtwpCancelPendingStackwalkApcs((unsigned int *)P);
  v6 = (unsigned int)v5;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 424) + 8 * v5), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 424) + 8 * v5));
  if ( *((_WORD *)P + 524) )
  {
    v21 = (void *)*((_QWORD *)P + 132);
    *((_WORD *)P + 524) = 0;
    ExFreePoolWithTag(v21, 0);
    *((_QWORD *)P + 132) = 0LL;
  }
  v7 = *((_QWORD *)P + 136);
  if ( v7 )
  {
    memset(v28, 0, 24);
    ExDeleteTimer(v7, 1, 1, (unsigned int *)v28);
  }
  v8 = (void *)*((_QWORD *)P + 135);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( *((_DWORD *)P + 79) != 1 )
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  v9 = (UNICODE_STRING *)*((_QWORD *)P + 138);
  if ( v9 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeAnsiString(v9 + 1);
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)P + 138) = 0LL;
  }
  EtwpFreeTraceBufferPool((unsigned int *)P);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v10 = 0LL;
    v11 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v10 += 64LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 139) + 4112LL) + v10 - 56) + 8 * v6) = 0LL;
      --v11;
    }
    while ( v11 );
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  RtlFreeAnsiString((PUNICODE_STRING)P + 24);
  v12 = (void *)*((_QWORD *)P + 92);
  if ( v12 )
    ObfDereferenceObject(v12);
  v13 = (void *)*((_QWORD *)P + 99);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = _InterlockedExchange64((volatile __int64 *)P + 100, 0LL);
  ObDereferenceSecurityDescriptor(v14 & 0xFFFFFFFFFFFFFFF0uLL, (unsigned int)(v14 & 0xF) + 1);
  v15 = *((_DWORD *)P + 208);
  if ( (v15 & 0x80u) != 0 )
  {
    ExFreePoolWithTag(*((PVOID *)P + 123), 0);
    ExFreePoolWithTag(*((PVOID *)P + 118), 0);
    v15 = *((_DWORD *)P + 208);
  }
  if ( (v15 & 0x2000) != 0 )
  {
    _InterlockedDecrement(&dword_1403D0EE0);
    v15 = *((_DWORD *)P + 208);
  }
  if ( (v15 & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 124));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4188), (unsigned __int8)P[834]);
  if ( *((_QWORD *)P + 125) )
  {
    v22 = (_QWORD *)*((_QWORD *)P + 125);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v23 = v22 + 6;
      v24 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v23 )
          off_1403988C0[0]();
        ++v23;
        --v24;
      }
      while ( v24 );
    }
    ExFreePoolWithTag(v22, 0);
  }
  v16 = (_DWORD *)*((_QWORD *)P + 126);
  if ( v16 )
  {
    if ( (*((_DWORD *)P + 208) & 0x8000) != 0 )
    {
      _InterlockedDecrement(&dword_1403D0F00);
      v16 = (_DWORD *)*((_QWORD *)P + 126);
    }
    if ( v16 )
    {
      if ( *v16 )
      {
        ((void (__fastcall *)(_QWORD))off_140398A98[0])((unsigned int)*v16);
        v16 = (_DWORD *)*((_QWORD *)P + 126);
      }
      ExFreePoolWithTag(v16, 0);
      *((_QWORD *)P + 126) = 0LL;
    }
  }
  v17 = (_QWORD *)*((_QWORD *)P + 127);
  if ( v17 )
  {
    if ( v17[2] )
    {
      if ( *v17 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 4u);
        (*(void (__fastcall **)(_QWORD))(v17[2] + 8LL))(*v17);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v17, 0);
    *((_QWORD *)P + 127) = 0LL;
  }
  v18 = (char *)*((_QWORD *)P + 14);
  while ( v18 != P + 112 )
  {
    v25 = v18;
    v18 = *(char **)v18;
    ExFreePoolWithTag(v25, 0);
  }
  v19 = (char *)*((_QWORD *)P + 128);
  while ( v19 != P + 1024 )
  {
    v26 = v19;
    v19 = *(char **)v19;
    ExFreePoolWithTag(v26, 0);
  }
  while ( *((_QWORD *)P + 16) )
  {
    v27 = (_QWORD *)*((_QWORD *)P + 16);
    *((_QWORD *)P + 16) = *v27;
    ExFreePoolWithTag(v27, 0);
  }
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 424) + 8 * v6));
  *(_QWORD *)(*(_QWORD *)(v1 + 432) + 8 * v6) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4100));
}
