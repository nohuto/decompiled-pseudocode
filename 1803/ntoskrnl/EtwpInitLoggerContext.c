/*
 * XREFs of EtwpInitLoggerContext @ 0x1405893D4
 * Callers:
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeMutex @ 0x1400D3950 (KeInitializeMutex.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400D4558 (EtwpQueryUsedProcessorCount.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     KeQuerySystemTimePrecise @ 0x140132A60 (KeQuerySystemTimePrecise.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpInitializeCompression @ 0x1402B3C9C (EtwpInitializeCompression.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
  int v12; // eax
  __int64 v13; // rcx
  ULONG MaximumProcessorCount; // eax
  void *v16; // rax

  v2 = *(unsigned __int16 *)a1;
  v5 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount > 0x20 )
      v5 = 8 * MaximumProcessorCount;
  }
  v6 = v5 + v2 + 1298;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v6, 0x4C777445u);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, v6);
  v9 = (char *)(v8 + 1296);
  if ( v5 )
  {
    *(_QWORD *)(v8 + 1040) = v9;
    v9 += v5;
  }
  memmove(v9, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString((PUNICODE_STRING)(v8 + 152), (PCWSTR)v9);
  *(_DWORD *)(v8 + 12) = a2;
  *(_DWORD *)(v8 + 32) = 0xFFFF;
  *(_DWORD *)(v8 + 28) = -1072889856;
  *(_DWORD *)(v8 + 20) = -1072496640;
  *(_DWORD *)(v8 + 24) = -1072562176;
  *(_DWORD *)(v8 + 316) = (a2 & 0x1000000) != 0 ? 1 : 512;
  if ( a2 < 0 && (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v8 + 12) = a2 & 0x7FFFFFFF;
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)(v8 + 832), 4u);
  if ( (a2 & 0x8000) != 0 )
  {
    v16 = (void *)(v8 + 288);
LABEL_19:
    *(_QWORD *)(v8 + 280) = v16;
    goto LABEL_10;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v16 = &EtwpGlobalSequence;
    goto LABEL_19;
  }
LABEL_10:
  *(_DWORD *)(v8 + 336) = 1;
  v10 = *(_QWORD *)(*(_QWORD *)qword_1403CBD88 + 6864LL) << 12 >> 20;
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
  v12 = 2 * EtwpQueryUsedProcessorCount(v8);
  *(_DWORD *)(v8 + 240) = v12;
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_15;
  if ( EtwpInitializeCompression(v13) >= 0 )
  {
    *(_DWORD *)(v8 + 240) += 4;
    v12 = *(_DWORD *)(v8 + 240);
LABEL_15:
    *(_DWORD *)(v8 + 252) = v12 + 22;
    KeQuerySystemTimePrecise((LARGE_INTEGER *)(v8 + 808));
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
    *(_QWORD *)(v8 + 1032) = v8 + 1024;
    *(_QWORD *)(v8 + 1024) = v8 + 1024;
    *(_WORD *)(v8 + 1048) = 0;
    *(_QWORD *)(v8 + 1056) = 0LL;
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
