/*
 * XREFs of AlpcpInsertResourcePort @ 0x1404D4A3C
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x1404D47E8 (AlpcpCreateView.c)
 *     AlpcpCreateReserve @ 0x140556174 (AlpcpCreateReserve.c)
 *     AlpcpCreateSection @ 0x140556B5C (AlpcpCreateSection.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405E81D4 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall AlpcpInsertResourcePort(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // rax

  v2 = (volatile signed __int64 *)(a1 + 328);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  v8 = a1 + 336;
  v9 = (_QWORD *)(a2 - 48);
  v10 = *(_QWORD **)(v8 + 8);
  if ( *v10 != v8 )
    __fastfail(3u);
  v9[1] = v10;
  *v9 = v8;
  *v10 = v9;
  *(_QWORD *)(v8 + 8) = v9;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2, v5, v6, v7);
  return KeAbPostRelease((ULONG_PTR)v2);
}
