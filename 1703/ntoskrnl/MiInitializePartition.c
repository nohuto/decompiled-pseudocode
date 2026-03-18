/*
 * XREFs of MiInitializePartition @ 0x1405A1920
 * Callers:
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x1407FFCB0 (MiCreatePfnDatabase.c)
 * Callees:
 *     KeInitializeGate @ 0x140035EB4 (KeInitializeGate.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     MiInitializePfnListHead @ 0x1401543DC (MiInitializePfnListHead.c)
 *     MiInitializeCombining @ 0x140154404 (MiInitializeCombining.c)
 *     MiInitializeCommitment @ 0x140159A60 (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x1405A1DA8 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x1405A1EA8 (MiInitializeNuma.c)
 *     MiInitializeLargePageNodeLists @ 0x1405A2158 (MiInitializeLargePageNodeLists.c)
 */

__int64 __fastcall MiInitializePartition(unsigned __int64 a1, __int16 a2)
{
  int v3; // eax
  struct _KEVENT *v4; // rcx
  __int64 v5; // r14
  int v6; // r8d
  int v7; // ecx
  __int64 *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // r11d
  int v12; // r11d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // ecx
  unsigned int v19; // edi
  __int64 i; // rbx
  signed int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct _KEVENT *v26; // rbx
  __int64 v27; // rbp
  __int64 v28; // rcx
  struct _KEVENT *v29; // rbx
  struct _KTHREAD *CurrentThread; // rbx

  *(_WORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 305535296;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 1LL;
  v3 = 0;
  *(_QWORD *)(a1 + 4672) = 0LL;
  v4 = (struct _KEVENT *)(a1 + 136);
  v5 = 16LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    v3 = 16;
  *(_DWORD *)(a1 + 4) = v3;
  KeInitializeEvent(v4, NotificationEvent, 0);
  v6 = dword_14036C1FC;
  v7 = 0;
  v8 = (__int64 *)(a1 + 1920);
  do
  {
    v9 = *v8;
    v10 = 0;
    if ( v6 )
    {
      do
      {
        *(_DWORD *)(v9 + 8) = v7;
        ++v10;
        *(_QWORD *)(v9 + 16) = 0xFFFFFFFFFLL;
        *(_QWORD *)(v9 + 24) = 0xFFFFFFFFFLL;
        *(_QWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 32) = 0LL;
        v9 += 40LL;
        v6 = dword_14036C1FC;
      }
      while ( v10 < dword_14036C1FC );
    }
    ++v7;
    ++v8;
  }
  while ( v7 <= 1 );
  MiInitializePfnListHead(a1 + 1984, 0);
  MiInitializePfnListHead(a1 + 2048, 1);
  MiInitializePfnListHead(a1 + 2112, 2);
  MiInitializePfnListHead(a1 + 3904, v11 + 3);
  v13 = a1 + 2176;
  do
  {
    MiInitializePfnListHead(v13, v12);
    v13 = v16 + 40;
  }
  while ( v17 != 1 );
  *(_QWORD *)(a1 + 3960) = a1 + 1984;
  *(_QWORD *)(a1 + 3968) = v14;
  *(_QWORD *)(a1 + 3976) = v15;
  MiInitializeLargePageNodeLists(a1);
  v18 = dword_14036C1FC;
  v19 = 0;
  for ( i = *(_QWORD *)(a1 + 3944); v19 < 2 * dword_14036C1FC; ++v19 )
  {
    InitializeSListHead((PSLIST_HEADER)(i + 16LL * v19));
    v18 = dword_14036C1FC;
  }
  v21 = (unsigned int)(*(_QWORD *)(a1 + 5584) >> 10) / v18;
  v22 = 3LL;
  if ( !v21 )
    v21 = 1;
  if ( v21 > 16 )
    v21 = 16;
  *(_DWORD *)(a1 + 5084) = v21;
  MiInitializePfnListHead(a1 + 6144, 3);
  MiInitializePfnListHead(a1 + 6208, 4);
  MiInitializePfnListHead(a1 + 2496, 3);
  v23 = a1 + 2560;
  do
  {
    MiInitializePfnListHead(v23, 3);
    v23 = v24 + 40;
  }
  while ( v25 != 1 );
  v26 = (struct _KEVENT *)(a1 + 4128);
  v27 = a1 + 3200;
  do
  {
    MiInitializePfnListHead(v27, 3);
    KeInitializeEvent(v26, SynchronizationEvent, 0);
    v27 += 40LL;
    ++v26;
    --v5;
  }
  while ( v5 );
  MiInitializePfnListHead(a1 + 3840, 5);
  *(_QWORD *)(a1 + 4000) = v28;
  *(_QWORD *)(a1 + 3984) = a1 + 6144;
  *(_QWORD *)(a1 + 3992) = a1 + 6208;
  *(_QWORD *)(a1 + 4512) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4520) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4528) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4536) = 0xFFFFFFFEFFFFFFFEuLL;
  KeInitializeEvent((PRKEVENT)(a1 + 5056), NotificationEvent, 0);
  v29 = (struct _KEVENT *)(a1 + 4680);
  do
  {
    KeInitializeEvent(v29, NotificationEvent, 1u);
    v29 = (struct _KEVENT *)((char *)v29 + 32);
    --v22;
  }
  while ( v22 );
  *(_QWORD *)(a1 + 224) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 240), NotificationEvent, 0);
  memset64((void *)(a1 + 280), a1 + 240, 0xBuLL);
  *(_QWORD *)(a1 + 5560) = a1 + 5552;
  *(_QWORD *)(a1 + 5552) = a1 + 5552;
  KeInitializeEvent((PRKEVENT)(a1 + 824), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 768), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 792), NotificationEvent, 0);
  *(_DWORD *)(a1 + 752) = 18;
  KeInitializeEvent((PRKEVENT)(a1 + 728), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 912), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1040), NotificationEvent, 0);
  KeInitializeGate(a1 + 680);
  *(_QWORD *)(a1 + 672) = a1 + 664;
  *(_QWORD *)(a1 + 664) = a1 + 664;
  KeInitializeEvent((PRKEVENT)(a1 + 952), SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 944) = a1 + 936;
  *(_QWORD *)(a1 + 936) = a1 + 936;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    MiInitializeCommitment(a1);
  MiInitializeNuma(a1);
  *(_QWORD *)(a1 + 1160) = 0LL;
  *(_QWORD *)(a1 + 1136) = MiContractWsSwapPageFileWorker;
  *(_QWORD *)(a1 + 1144) = a1;
  *(_QWORD *)(a1 + 1120) = 0LL;
  *(_DWORD *)(a1 + 1188) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 1224), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1264), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1248));
  MiInitializeSections(a1);
  MiInitializeCombining(a1, (_QWORD *)(a1 + 5152));
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiInitializeCombining(a1, qword_14036C718);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C8B8, 0LL);
  *(_DWORD *)(a1 + 4) |= 4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C8B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C8B8);
  KeAbPostRelease((ULONG_PTR)&qword_14036C8B8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
