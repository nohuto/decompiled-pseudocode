/*
 * XREFs of MiInitializePartition @ 0x14061BA7C
 * Callers:
 *     MmCreatePartition @ 0x140184450 (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x140899444 (MiCreatePfnDatabase.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 *     KeInitializeGate @ 0x1400D0BF4 (KeInitializeGate.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     MiInitializePfnListHead @ 0x14016F83C (MiInitializePfnListHead.c)
 *     MiInitializeCombining @ 0x14016F864 (MiInitializeCombining.c)
 *     MiInitializeCommitment @ 0x14017DAD8 (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x14061BF24 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14061C088 (MiInitializeNuma.c)
 *     MiInitializeLargePageNodeLists @ 0x14061C24C (MiInitializeLargePageNodeLists.c)
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
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // di

  *(_WORD *)a1 = a2;
  v2 = 0;
  *(_DWORD *)(a1 + 8) = 305535296;
  *(_QWORD *)(a1 + 4864) = 0LL;
  v4 = 8LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    v2 = 8;
  *(_DWORD *)(a1 + 4) = v2;
  KeInitializeEvent((PRKEVENT)(a1 + 104), NotificationEvent, 0);
  v5 = 0;
  v6 = (__int64 *)(a1 + 2112);
  do
  {
    v7 = 0;
    for ( i = *v6; v7 < dword_1403CB6DC; i += 40LL )
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
  MiInitializePfnListHead(a1 + 2176, 0);
  MiInitializePfnListHead(a1 + 2240, 1);
  MiInitializePfnListHead(a1 + 2304, 2);
  v10 = v9 + 3;
  MiInitializePfnListHead(a1 + 4096, v9 + 3);
  v12 = a1 + 2368;
  do
  {
    MiInitializePfnListHead(v12, v11);
    v12 = v16 + 40;
    --v4;
  }
  while ( v4 );
  *(_QWORD *)(a1 + 4152) = v13;
  *(_QWORD *)(a1 + 4160) = v14;
  *(_QWORD *)(a1 + 4168) = v15;
  MiInitializeLargePageNodeLists(a1);
  v17 = dword_1403CB6DC;
  v18 = 0;
  for ( j = *(_QWORD *)(a1 + 4136); v18 < 2 * dword_1403CB6DC; ++v18 )
  {
    InitializeSListHead((PSLIST_HEADER)(j + 16LL * v18));
    v17 = dword_1403CB6DC;
  }
  v20 = (unsigned int)(*(_QWORD *)(a1 + 6864) / 0x64uLL) / v17;
  if ( v20 < 4 )
    v20 = 4;
  v21 = 16LL;
  if ( v20 > 16 )
    v20 = 16;
  *(_DWORD *)(a1 + 6300) = v20;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiInitializePfnListHead((__int64)&qword_1403CB3C0, v10);
  v22 = 3LL;
  MiInitializePfnListHead(a1 + 7424, 3);
  MiInitializePfnListHead(a1 + 7488, v23);
  MiInitializePfnListHead(a1 + 2688, 3);
  v24 = a1 + 2752;
  do
  {
    MiInitializePfnListHead(v24, 3);
    v24 = v25 + 40;
  }
  while ( v26 != 1 );
  v27 = (struct _KEVENT *)(a1 + 4344);
  v28 = a1 + 3392;
  do
  {
    MiInitializePfnListHead(v28, 3);
    KeInitializeEvent(v27, SynchronizationEvent, 0);
    v28 += 40LL;
    ++v27;
    --v21;
  }
  while ( v21 );
  MiInitializePfnListHead(a1 + 4032, 5);
  *(_QWORD *)(a1 + 4192) = v29;
  *(_QWORD *)(a1 + 4176) = a1 + 7424;
  *(_QWORD *)(a1 + 4184) = a1 + 7488;
  *(_QWORD *)(a1 + 4728) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4736) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4744) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4752) = 0xFFFFFFFEFFFFFFFEuLL;
  KeInitializeEvent((PRKEVENT)(a1 + 6272), NotificationEvent, 0);
  v30 = (struct _KEVENT *)(a1 + 4872);
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
  *(_QWORD *)(a1 + 6784) = a1 + 6776;
  *(_QWORD *)(a1 + 6776) = a1 + 6776;
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
  MiInitializeCombining(a1, (_QWORD *)(a1 + 6376));
  *(_QWORD *)(a1 + 1288) = 1LL;
  *(_QWORD *)(a1 + 1296) = 1LL;
  *(_QWORD *)(a1 + 1304) = 1LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CBD48, 0LL);
  *(_DWORD *)(a1 + 4) |= 2u;
  v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CBD48, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v35 & 2) != 0 && (v35 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CBD48, v32, v33, v34);
  KeAbPostRelease((ULONG_PTR)&qword_1403CBD48);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
