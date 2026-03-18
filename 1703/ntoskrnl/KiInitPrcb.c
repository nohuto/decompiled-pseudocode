/*
 * XREFs of KiInitPrcb @ 0x14040F940
 * Callers:
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 * Callees:
 *     KiInitializeDpcList @ 0x14003C630 (KiInitializeDpcList.c)
 *     KiIntSteerInitPrcb @ 0x14003C6F0 (KiIntSteerInitPrcb.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall KiInitPrcb(__int64 a1, int a2)
{
  _QWORD *v3; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 i; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 22816) = 1;
  *(_DWORD *)(a1 + 22808) = 0;
  *(_DWORD *)(a1 + 23480) = 0;
  v3 = (_QWORD *)(a1 + 22912);
  *(_QWORD *)(a1 + 23552) = 0LL;
  v5 = 32LL;
  *(_QWORD *)(a1 + 11528) = 0LL;
  v6 = 32LL;
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v6;
  }
  while ( v6 );
  v7 = 0LL;
  **(_QWORD **)(a1 + 25160) = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 25160) + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 25160) + 608LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 25160) + 616LL) = 0LL;
  do
  {
    v8 = (_QWORD *)(v7 + *(_QWORD *)(a1 + 25160) + 16LL);
    v7 += 16LL;
    v8[1] = v8;
    *v8 = v8;
    --v5;
  }
  while ( v5 );
  memset((void *)(*(_QWORD *)(a1 + 25160) + 528LL), 127, 0x40uLL);
  *(_BYTE *)(*(_QWORD *)(a1 + 25160) + 592LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 25160) + 593LL) = *(_BYTE *)(a1 + 209);
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + *(_QWORD *)(a1 + 25160) + 594) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 25160) + 600LL) = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 25160) + 528LL;
  KiInitializeDpcList((_QWORD *)(a1 + 11776));
  *(_QWORD *)(a1 + 11792) = 0LL;
  *(_DWORD *)(a1 + 11800) = 0;
  *(_DWORD *)(a1 + 11804) = 0;
  *(_DWORD *)(a1 + 11884) = 0;
  *(_BYTE *)(a1 + 11882) = 0;
  *(_DWORD *)(a1 + 11864) = KiMaximumDpcQueueDepth;
  *(_DWORD *)(a1 + 11872) = KiMinimumDpcRate;
  *(_DWORD *)(a1 + 23444) = KiAdjustDpcThreshold;
  KeInitializeDpc((PRKDPC)(a1 + 22688), (PKDEFERRED_ROUTINE)KiDpcWatchdog, 0LL);
  if ( !*(_QWORD *)(a1 + 22744) )
    *(_WORD *)(a1 + 22690) = a2 + 640;
  *(_BYTE *)(a1 + 22689) = 2;
  *(_QWORD *)(a1 + 22792) = a1 + 22784;
  *(_QWORD *)(a1 + 22784) = a1 + 22784;
  InitializeSListHead((PSLIST_HEADER)(a1 + 24800));
  KeGetPcr()->NtTib.ArbitraryUserPointer = (void *)(a1 + 1776);
  *(_QWORD *)(a1 + 2008) = &CcBcbSpinLock;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 1864) = &CcMasterSpinLock;
  *(_QWORD *)(a1 + 1848) = &CcVacbSpinLock;
  *(_QWORD *)(a1 + 1912) = &CcWorkQueueSpinLock;
  *(_QWORD *)(a1 + 1880) = &NonPagedPoolLock;
  *(_QWORD *)(a1 + 1896) = &IopCancelSpinLock;
  *(_QWORD *)(a1 + 1928) = &IopVpbSpinLock;
  *(_QWORD *)(a1 + 1944) = &IopDatabaseLock;
  *(_QWORD *)(a1 + 1960) = &IopCompletionLock;
  *(_QWORD *)(a1 + 1976) = &NtfsStructLock;
  *(_QWORD *)(a1 + 1992) = &AfdWorkQueueSpinLock;
  *(_QWORD *)(a1 + 1856) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1904) = 0LL;
  *(_QWORD *)(a1 + 1872) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_QWORD *)(a1 + 1936) = 0LL;
  *(_QWORD *)(a1 + 1952) = 0LL;
  *(_QWORD *)(a1 + 1968) = 0LL;
  *(_QWORD *)(a1 + 1984) = 0LL;
  *(_QWORD *)(a1 + 2032) = 0LL;
  *(_QWORD *)(a1 + 2040) = 0LL;
  *(_DWORD *)(a1 + 25632) = (3 * (_WORD)a2) & 0x3FF;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 22800) = 0LL;
  *(_DWORD *)(a1 + 22752) = 1;
  KeInitializeDpc((PRKDPC)(a1 + 25896), (PKDEFERRED_ROUTINE)KiEntropyDpcRoutine, (PVOID)(a1 + 25632));
  if ( !a2 )
  {
    KiClockPollCycle = KiClockKeepAliveCycle;
    KiReverseStallIpiLock = 0LL;
    CcBcbSpinLock = 0LL;
    CcMasterSpinLock = 0LL;
    CcVacbSpinLock = 0LL;
    CcWorkQueueSpinLock = 0LL;
    IopCancelSpinLock = 0LL;
    IopCompletionLock = 0LL;
    IopDatabaseLock = 0LL;
    IopVpbSpinLock = 0LL;
    NonPagedPoolLock = 0LL;
    NtfsStructLock = 0LL;
    AfdWorkQueueSpinLock = 0LL;
    KeSleepingProcessors = 1310740;
    memset(&unk_14034FFE4, 0, 0xA4uLL);
  }
  KiIntSteerInitPrcb(a1);
  KeInitializeDpc((PRKDPC)(a1 + 26048), (PKDEFERRED_ROUTINE)KiAbDeferredProcessingWorker, 0LL);
  result = *(_QWORD *)(a1 + 26104);
  if ( !result )
    *(_WORD *)(a1 + 26050) = a2 + 640;
  return result;
}
