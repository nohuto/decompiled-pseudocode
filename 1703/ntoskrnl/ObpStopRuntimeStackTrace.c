/*
 * XREFs of ObpStopRuntimeStackTrace @ 0x1406C36D8
 * Callers:
 *     ObSetRefTraceInformation @ 0x1406C25D4 (ObSetRefTraceInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     RtlpInterlockedFlushSList @ 0x1401894F0 (RtlpInterlockedFlushSList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpDestroyStackAndObjectTables @ 0x1406C27E4 (ObpDestroyStackAndObjectTables.c)
 */

__int64 ObpStopRuntimeStackTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rsi
  int v2; // edi
  unsigned int v3; // edi
  _QWORD **v4; // rbp
  _WORD *v5; // rdi
  PSLIST_ENTRY v6; // rax
  _QWORD *p_Next; // r14

  CurrentThread = KeGetCurrentThread();
  Buffer = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  v2 = ObpTraceFlags;
  if ( (ObpTraceFlags & 2) != 0 )
  {
    if ( (ObpTraceFlags & 0x10) != 0 )
      memset(&ObpRuntimeTracePoolTags, 0, 0x40uLL);
    if ( (ObpTraceFlags & 0x20) != 0 )
    {
      Buffer = ObpRuntimeTraceProcessName.Buffer;
      RtlInitUnicodeStringEx(&ObpRuntimeTraceProcessName, 0LL);
      v2 = ObpTraceFlags;
    }
    ObpRuntimeTraceFlags = 0;
    v3 = ObpRegTraceFlags | v2 & 0xFFFFFF8C;
    ObpTraceFlags = v3;
    if ( (v3 & 1) != 0 )
    {
      ObpTracePoolTags = (unsigned __int64)&ObpRegTracePoolTags & -(__int64)((v3 & 0x10) != 0);
      ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRegTraceProcessName & -(__int64)((v3 & 0x20) != 0));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else
    {
      ObpTracePoolTags = 0LL;
      ObpTraceProcessName = 0LL;
      ObpStackSequence = 0;
      ObpNumTracedObjects = 0;
      v4 = (_QWORD **)ObpObjectTable;
      ObpTraceFlags = v3 & 0xFFFFFF8C;
      v5 = ObpStackTable;
      v6 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      ObpStackTable = 0LL;
      p_Next = &v6->Next;
      ObpObjectTable = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      ObpDestroyStackAndObjectTables(v5, v4, p_Next);
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x7452624Fu);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
