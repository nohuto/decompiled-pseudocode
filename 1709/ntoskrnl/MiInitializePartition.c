/*
 * XREFs of MiInitializePartition @ 0x1405B30A8
 * Callers:
 *     MmCreatePartition @ 0x140158808 (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x140829C3C (MiCreatePfnDatabase.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 *     KeInitializeGate @ 0x14012C014 (KeInitializeGate.c)
 *     MiInitializePfnListHead @ 0x1401374F4 (MiInitializePfnListHead.c)
 *     MiInitializeCombining @ 0x14013751C (MiInitializeCombining.c)
 *     MiInitializeCommitment @ 0x14014FC00 (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x1405B353C (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x1405B36A0 (MiInitializeNuma.c)
 *     MiInitializeLargePageNodeLists @ 0x1405B384C (MiInitializeLargePageNodeLists.c)
 */

__int64 __fastcall MiInitializePartition(__int64 a1, __int16 a2)
{
  int v2; // eax
  __int64 v4; // rdi
  int v5; // ecx
  __int64 *v6; // r8
  unsigned int v7; // r9d
  __int64 i; // rax
  int v9; // r11d
  int v10; // r14d
  int v11; // r11d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // edi
  __int64 j; // rbx
  signed int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rdi
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _KEVENT *v27; // rbp
  __int64 v28; // r14
  __int64 v29; // rcx
  struct _KEVENT *v30; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  char v32; // di

  *(_WORD *)a1 = a2;
  v2 = 0;
  *(_DWORD *)(a1 + 8) = 305535296;
  *(_QWORD *)(a1 + 4800) = 0LL;
  v4 = 8LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    v2 = 8;
  *(_DWORD *)(a1 + 4) = v2;
  KeInitializeEvent((PRKEVENT)(a1 + 104), NotificationEvent, 0);
  v5 = 0;
  v6 = (__int64 *)(a1 + 2048);
  do
  {
    v7 = 0;
    for ( i = *v6; v7 < dword_140388544; i += 40LL )
    {
      *(_DWORD *)(i + 8) = v5;
      ++v7;
      *(_QWORD *)(i + 16) = 0xFFFFFFFFFLL;
      *(_QWORD *)(i + 24) = 0xFFFFFFFFFLL;
      *(_QWORD *)i = 0LL;
      *(_QWORD *)(i + 32) = 0LL;
    }
    ++v5;
    ++v6;
  }
  while ( v5 <= 1 );
  MiInitializePfnListHead(a1 + 2112, 0);
  MiInitializePfnListHead(a1 + 2176, 1);
  MiInitializePfnListHead(a1 + 2240, 2);
  v10 = v9 + 3;
  MiInitializePfnListHead(a1 + 4032, v9 + 3);
  v12 = a1 + 2304;
  do
  {
    MiInitializePfnListHead(v12, v11);
    v12 = v16 + 40;
    --v4;
  }
  while ( v4 );
  *(_QWORD *)(a1 + 4088) = v13;
  *(_QWORD *)(a1 + 4096) = v14;
  *(_QWORD *)(a1 + 4104) = v15;
  MiInitializeLargePageNodeLists(a1);
  v17 = dword_140388544;
  v18 = 0;
  for ( j = *(_QWORD *)(a1 + 4072); v18 < 2 * dword_140388544; ++v18 )
  {
    InitializeSListHead((PSLIST_HEADER)(j + 16LL * v18));
    v17 = dword_140388544;
  }
  v20 = (unsigned int)(*(_QWORD *)(a1 + 5776) / 0x64uLL) / v17;
  if ( v20 < 4 )
    v20 = 4;
  v21 = 16LL;
  if ( v20 > 16 )
    v20 = 16;
  *(_DWORD *)(a1 + 5212) = v20;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiInitializePfnListHead((__int64)&qword_140388220, v10);
  v22 = 3LL;
  MiInitializePfnListHead(a1 + 6336, 3);
  MiInitializePfnListHead(a1 + 6400, v23);
  MiInitializePfnListHead(a1 + 2624, 3);
  v24 = a1 + 2688;
  do
  {
    MiInitializePfnListHead(v24, 3);
    v24 = v25 + 40;
  }
  while ( v26 != 1 );
  v27 = (struct _KEVENT *)(a1 + 4256);
  v28 = a1 + 3328;
  do
  {
    MiInitializePfnListHead(v28, 3);
    KeInitializeEvent(v27, SynchronizationEvent, 0);
    v28 += 40LL;
    ++v27;
    --v21;
  }
  while ( v21 );
  MiInitializePfnListHead(a1 + 3968, 5);
  *(_QWORD *)(a1 + 4128) = v29;
  *(_QWORD *)(a1 + 4112) = a1 + 6336;
  *(_QWORD *)(a1 + 4120) = a1 + 6400;
  *(_QWORD *)(a1 + 4640) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4648) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4656) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4664) = 0xFFFFFFFEFFFFFFFEuLL;
  KeInitializeEvent((PRKEVENT)(a1 + 5184), NotificationEvent, 0);
  v30 = (struct _KEVENT *)(a1 + 4808);
  do
  {
    KeInitializeEvent(v30, NotificationEvent, 1u);
    v30 = (struct _KEVENT *)((char *)v30 + 32);
    --v22;
  }
  while ( v22 );
  *(_QWORD *)(a1 + 184) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 200), NotificationEvent, 0);
  memset64((void *)(a1 + 240), a1 + 200, 0xBuLL);
  *(_QWORD *)(a1 + 5696) = a1 + 5688;
  *(_QWORD *)(a1 + 5688) = a1 + 5688;
  KeInitializeEvent((PRKEVENT)(a1 + 776), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 720), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 744), NotificationEvent, 0);
  *(_DWORD *)(a1 + 704) = 18;
  KeInitializeEvent((PRKEVENT)(a1 + 680), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 864), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 992), NotificationEvent, 0);
  KeInitializeGate(a1 + 632);
  *(_QWORD *)(a1 + 624) = a1 + 616;
  *(_QWORD *)(a1 + 616) = a1 + 616;
  KeInitializeEvent((PRKEVENT)(a1 + 904), SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 896) = a1 + 888;
  *(_QWORD *)(a1 + 888) = a1 + 888;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    MiInitializeCommitment(a1);
  MiInitializeNuma(a1);
  *(_QWORD *)(a1 + 1112) = 0LL;
  *(_QWORD *)(a1 + 1088) = MiContractWsSwapPageFileWorker;
  *(_QWORD *)(a1 + 1096) = a1;
  *(_QWORD *)(a1 + 1072) = 0LL;
  *(_DWORD *)(a1 + 1140) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 1184), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1232), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1216));
  MiInitializeSections(a1);
  MiInitializeCombining(a1, (_QWORD *)(a1 + 5288));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388AB0, 0LL);
  *(_DWORD *)(a1 + 4) |= 2u;
  v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388AB0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v32 & 2) != 0 && (v32 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388AB0);
  KeAbPostRelease((ULONG_PTR)&qword_140388AB0);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
