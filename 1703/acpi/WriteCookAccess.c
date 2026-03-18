/*
 * XREFs of WriteCookAccess @ 0x1C0025BD0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     DequeueAndReadyContext @ 0x1C0025E08 (DequeueAndReadyContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     QueueContext @ 0x1C005F38C (QueueContext.c)
 */

__int64 __fastcall WriteCookAccess(__int64 a1, __int64 a2, int a3)
{
  const void *v3; // rsi
  int v6; // edx
  __int64 v7; // r14
  int v8; // edx
  int v9; // edx
  __int64 v10; // rcx
  char v11; // di
  __int64 v12; // r9
  int v13; // eax
  char v15; // r12
  KIRQL v16; // r13
  __int32 v17; // edi
  __int64 v18; // r8
  int v19; // eax
  const void *v20; // rdi
  KIRQL v21; // bl
  const void *v22; // r8

  LODWORD(v3) = a3;
  if ( a3 )
    v6 = 3;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 96LL);
  if ( !v6 )
  {
    if ( !*(_BYTE *)(a2 + 88) )
    {
      *(_DWORD *)(a2 + 16) += 2;
      goto LABEL_12;
    }
    v15 = 0;
    if ( (gDebugger & 0x100) != 0 )
    {
      _m_prefetchw(&gDebugger);
      v15 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
    }
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 24));
    v17 = _InterlockedExchange((volatile __int32 *)(v7 + 16), 1);
    if ( v17 )
      QueueContext(a1, 0xFFFFLL, v7 + 32);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 24), v16);
    if ( v17 )
      goto LABEL_17;
    v18 = *(_QWORD *)(a2 + 40);
    ++*(_DWORD *)(a2 + 16);
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v18 + 16))(
            0LL,
            *(_QWORD *)(a2 + 32) + 120LL,
            *(_QWORD *)(a2 + 48),
            *(unsigned int *)(a2 + 56),
            a2 + 80,
            *(_QWORD *)(v18 + 24),
            RestartCtxtCallback,
            a1 + 328);
    v20 = (const void *)v19;
    if ( (v15 & 0x10) != 0 )
      _InterlockedOr(&gDebugger, 0x10u);
    if ( v19 == 259 )
      goto LABEL_17;
    if ( v19 )
    {
      LogError(-1072431080);
      AcpiDiagTraceAmlError(a1, -1072431080);
      v22 = v20;
      goto LABEL_33;
    }
    goto LABEL_28;
  }
  v8 = v6 - 1;
  if ( !v8 )
  {
LABEL_28:
    *(_QWORD *)(a2 + 64) |= *(_QWORD *)(a2 + 80) & ~*(_QWORD *)(a2 + 72);
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_12;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return (unsigned int)v3;
    goto LABEL_7;
  }
LABEL_12:
  v11 = 0;
  if ( (gDebugger & 0x100) != 0 )
  {
    _m_prefetchw(&gDebugger);
    v11 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
  }
  v12 = *(_QWORD *)(a2 + 40);
  ++*(_DWORD *)(a2 + 16);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v12 + 16))(
          1LL,
          *(_QWORD *)(a2 + 32) + 120LL,
          *(_QWORD *)(a2 + 48),
          *(unsigned int *)(a2 + 56),
          a2 + 64,
          *(_QWORD *)(v12 + 24),
          RestartCtxtCallback,
          a1 + 328);
  v3 = (const void *)v13;
  if ( (v11 & 0x10) != 0 )
    _InterlockedOr(&gDebugger, 0x10u);
  if ( v13 == 259 )
  {
LABEL_17:
    LODWORD(v3) = 32772;
    return (unsigned int)v3;
  }
  if ( v13 )
  {
    LogError(-1072431080);
    AcpiDiagTraceAmlError(a1, -1072431080);
    v22 = v3;
LABEL_33:
    PrintDebugMessage(212, (const void *)*(unsigned __int8 *)(v7 + 12), v22, 0LL, 0LL);
    LODWORD(v3) = -1072431080;
    return (unsigned int)v3;
  }
LABEL_7:
  if ( *(_BYTE *)(a2 + 88) )
  {
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 24));
    DequeueAndReadyContext(v7 + 32);
    _InterlockedExchange((volatile __int32 *)(v7 + 16), 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 24), v21);
  }
  v10 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v10 + 8);
  HeapFree(v10);
  return (unsigned int)v3;
}
