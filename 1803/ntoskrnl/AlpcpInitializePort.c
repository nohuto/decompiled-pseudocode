/*
 * XREFs of AlpcpInitializePort @ 0x1404DD334
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1404E0524 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x14005C7F0 (KeInitializeSemaphore.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall AlpcpInitializePort(__int64 a1, char a2, char a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rax
  char v8; // al
  struct _KSEMAPHORE *v10; // rax

  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  *(_QWORD *)(a1 + 192) = a1 + 184;
  *(_QWORD *)(a1 + 184) = a1 + 184;
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 216) = a1 + 208;
  *(_QWORD *)(a1 + 208) = a1 + 208;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 240) = a1 + 232;
  *(_QWORD *)(a1 + 232) = a1 + 232;
  *(_QWORD *)(a1 + 224) = 0LL;
  v4 = *(_DWORD *)(a1 + 416) & 0xFFFFFDF9 | (2 * (a2 & 3 | ((a3 & 1) << 8)));
  *(_DWORD *)(a1 + 416) = v4;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 256) |= 0x40000u;
    v10 = (struct _KSEMAPHORE *)ExAllocateFromNPagedLookasideList(&AlpcpNPLookasides);
    *(_QWORD *)(a1 + 248) = v10;
    if ( !v10 )
      return 3221225626LL;
    KeInitializeSemaphore(v10, 0, 0x7FFFFFFF);
    v4 = *(_DWORD *)(a1 + 416);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = AlpcpDummyEvent;
  }
  *(_DWORD *)(a1 + 416) = v4 | 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
  v7 = (__int64 *)qword_1403AD238;
  if ( *(__int64 **)qword_1403AD238 != &AlpcpPortList )
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = qword_1403AD238;
  *(_QWORD *)a1 = &AlpcpPortList;
  *v7 = a1;
  qword_1403AD238 = a1;
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock, (__int64)&AlpcpPortList, v5, v6);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  return 0LL;
}
