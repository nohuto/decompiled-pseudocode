/*
 * XREFs of EtwpInitLoggerContext @ 0x14054F348
 * Callers:
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140087D60 (EtwpQueryUsedProcessorCount.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140088870 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     KeQuerySystemTimePrecise @ 0x140110600 (KeQuerySystemTimePrecise.c)
 *     KeInitializeMutex @ 0x140121EE0 (KeInitializeMutex.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpInitializeCompression @ 0x140257FA8 (EtwpInitializeCompression.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpInitLoggerContext(const void **a1, int a2)
{
  int v2; // ebx
  unsigned int v5; // ebp
  ULONG MaximumProcessorCount; // eax
  unsigned int v7; // esi
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  char *v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  void *v15; // rax

  v2 = *(unsigned __int16 *)a1;
  v5 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount > 0x20 )
      v5 = 8 * MaximumProcessorCount;
  }
  v7 = v5 + v2 + 1130;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7, 0x4C777445u);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, v7);
  v10 = (char *)(v9 + 1128);
  if ( v5 )
  {
    *(_QWORD *)(v9 + 872) = v10;
    v10 += v5;
  }
  memmove(v10, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString((PUNICODE_STRING)(v9 + 136), (PCWSTR)v10);
  *(_DWORD *)(v9 + 12) = a2;
  *(_DWORD *)(v9 + 32) = 0xFFFF;
  *(_DWORD *)(v9 + 28) = -1072889856;
  *(_DWORD *)(v9 + 20) = -1072496640;
  *(_DWORD *)(v9 + 24) = -1072562176;
  if ( (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v9 + 300) = 1;
  else
    *(_DWORD *)(v9 + 300) = 512;
  if ( a2 < 0 && (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v9 + 12) = a2 & 0x7FFFFFFF;
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)(v9 + 816), 4u);
  if ( (a2 & 0x8000) != 0 )
  {
    v15 = (void *)(v9 + 272);
LABEL_22:
    *(_QWORD *)(v9 + 264) = v15;
    goto LABEL_14;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v15 = &EtwpGlobalSequence;
    goto LABEL_22;
  }
LABEL_14:
  *(_DWORD *)(v9 + 320) = 1;
  v11 = *(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5584LL) << 12 >> 20;
  if ( (unsigned int)v11 <= 0x200 )
  {
    *(_DWORD *)(v9 + 4) = 0x2000;
  }
  else
  {
    v12 = 0x10000;
    if ( (unsigned int)v11 <= 0x400 )
      v12 = 0x4000;
    *(_DWORD *)(v9 + 4) = v12;
  }
  *(_DWORD *)(v9 + 224) = 2 * EtwpQueryUsedProcessorCount(v9);
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_19;
  if ( EtwpInitializeCompression(v13) >= 0 )
  {
    *(_DWORD *)(v9 + 224) += 4;
LABEL_19:
    *(_DWORD *)(v9 + 236) = *(_DWORD *)(v9 + 224) + 22;
    KeQuerySystemTimePrecise((LARGE_INTEGER *)(v9 + 792));
    KeInitializeMutex((PRKMUTEX)(v9 + 632), 0);
    *(_QWORD *)(v9 + 688) = 0LL;
    *(_QWORD *)(v9 + 336) = v9 + 328;
    *(_QWORD *)(v9 + 328) = v9 + 328;
    *(_QWORD *)(v9 + 64) = v9 + 72;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_QWORD *)(v9 + 80) = v9 + 88;
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_QWORD *)(v9 + 104) = v9 + 96;
    *(_QWORD *)(v9 + 96) = v9 + 96;
    *(_QWORD *)(v9 + 120) = v9 + 112;
    *(_QWORD *)(v9 + 112) = v9 + 112;
    *(_QWORD *)(v9 + 864) = v9 + 856;
    *(_QWORD *)(v9 + 856) = v9 + 856;
    *(_WORD *)(v9 + 880) = 0;
    *(_QWORD *)(v9 + 888) = 0LL;
    *(_QWORD *)(v9 + 696) = 0LL;
    KeInitializeEvent((PRKEVENT)(v9 + 456), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v9 + 480), SynchronizationEvent, 0);
    KeInitializeTimerEx((PKTIMER)(v9 + 504), SynchronizationTimer);
    KeInitializeDpc((PRKDPC)(v9 + 568), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, (PVOID)v9);
    return v9;
  }
  ExFreePoolWithTag((PVOID)v9, 0);
  return 0LL;
}
