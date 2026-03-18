/*
 * XREFs of EtwpInitLoggerContext @ 0x1404EC878
 * Callers:
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x140025920 (KeQuerySystemTimePrecise.c)
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KeInitializeMutex @ 0x1400B4710 (KeInitializeMutex.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400FC800 (KeQueryMaximumProcessorCountEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpInitializeCompression @ 0x140281A08 (EtwpInitializeCompression.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpInitializeStackTracing @ 0x1404EC7C0 (EtwpInitializeStackTracing.c)
 */

__int64 __fastcall EtwpInitLoggerContext(const void **a1, int a2)
{
  int v2; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  PVOID PoolWithTag; // rax
  __int64 v8; // rbx
  char *v9; // rsi
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  ULONG MaximumProcessorCount; // eax
  void *v15; // rax

  v2 = *(unsigned __int16 *)a1;
  v5 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount > 0x20 )
      v5 = 8 * MaximumProcessorCount;
  }
  v6 = v5 + v2 + 2450;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v6, 0x4C777445u);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, v6);
  v9 = (char *)(v8 + 2448);
  if ( v5 )
  {
    *(_QWORD *)(v8 + 2184) = v9;
    v9 += v5;
  }
  memmove(v9, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString((PUNICODE_STRING)(v8 + 152), (PCWSTR)v9);
  *(_DWORD *)(v8 + 12) = a2;
  *(_DWORD *)(v8 + 32) = 0xFFFF;
  *(_DWORD *)(v8 + 28) = -1072889856;
  *(_DWORD *)(v8 + 20) = -1072496640;
  *(_DWORD *)(v8 + 24) = -1072562176;
  if ( (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v8 + 316) = 1;
  else
    *(_DWORD *)(v8 + 316) = 512;
  if ( a2 < 0 && (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v8 + 12) = a2 & 0x7FFFFFFF;
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)(v8 + 832), 4u);
  if ( (a2 & 0x8000) != 0 )
  {
    v15 = (void *)(v8 + 288);
LABEL_22:
    *(_QWORD *)(v8 + 280) = v15;
    goto LABEL_12;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v15 = &EtwpGlobalSequence;
    goto LABEL_22;
  }
LABEL_12:
  *(_DWORD *)(v8 + 336) = 1;
  v10 = *(_QWORD *)(*(_QWORD *)qword_140388AF0 + 5776LL) << 12 >> 20;
  if ( (unsigned int)v10 <= 0x200 )
  {
    *(_DWORD *)(v8 + 4) = 0x2000;
  }
  else
  {
    v11 = 0x10000;
    if ( (unsigned int)v10 <= 0x400 )
      v11 = 0x4000;
    *(_DWORD *)(v8 + 4) = v11;
  }
  *(_DWORD *)(v8 + 240) = 2 * EtwpQueryUsedProcessorCount(v8);
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_17;
  if ( EtwpInitializeCompression(v12) >= 0 )
  {
    *(_DWORD *)(v8 + 240) += 4;
LABEL_17:
    *(_DWORD *)(v8 + 252) = *(_DWORD *)(v8 + 240) + 22;
    KeQuerySystemTimePrecise((_QWORD *)(v8 + 808));
    KeInitializeMutex((PRKMUTEX)(v8 + 648), 0);
    *(_QWORD *)(v8 + 704) = 0LL;
    *(_QWORD *)(v8 + 352) = v8 + 344;
    *(_QWORD *)(v8 + 344) = v8 + 344;
    *(_QWORD *)(v8 + 64) = v8 + 72;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_QWORD *)(v8 + 80) = v8 + 88;
    *(_QWORD *)(v8 + 88) = 0LL;
    *(_QWORD *)(v8 + 104) = v8 + 96;
    *(_QWORD *)(v8 + 96) = v8 + 96;
    *(_QWORD *)(v8 + 120) = v8 + 112;
    *(_QWORD *)(v8 + 112) = v8 + 112;
    *(_QWORD *)(v8 + 2176) = v8 + 2168;
    *(_QWORD *)(v8 + 2168) = v8 + 2168;
    EtwpInitializeStackTracing(v8 + 848);
    *(_WORD *)(v8 + 2192) = 0;
    *(_QWORD *)(v8 + 2200) = 0LL;
    *(_QWORD *)(v8 + 712) = 0LL;
    KeInitializeEvent((PRKEVENT)(v8 + 472), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v8 + 496), SynchronizationEvent, 0);
    KeInitializeTimerEx((PKTIMER)(v8 + 520), SynchronizationTimer);
    KeInitializeDpc((PRKDPC)(v8 + 584), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, (PVOID)v8);
    return v8;
  }
  ExFreePoolWithTag((PVOID)v8, 0);
  return 0LL;
}
