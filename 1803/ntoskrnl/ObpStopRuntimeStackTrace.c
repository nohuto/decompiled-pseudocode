/*
 * XREFs of ObpStopRuntimeStackTrace @ 0x14075B53C
 * Callers:
 *     ObSetRefTraceInformation @ 0x14075A420 (ObSetRefTraceInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObpDestroyStackAndObjectTables @ 0x14075A62C (ObpDestroyStackAndObjectTables.c)
 */

__int64 ObpStopRuntimeStackTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ecx
  _WORD *v6; // rsi
  _QWORD **v7; // rbp
  PSLIST_ENTRY v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *p_Next; // r14

  CurrentThread = KeGetCurrentThread();
  Buffer = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 2) != 0 )
  {
    if ( (ObpTraceFlags & 0x10) != 0 )
      memset(&ObpRuntimeTracePoolTags, 0, 0x40uLL);
    if ( (ObpTraceFlags & 0x20) != 0 )
    {
      Buffer = ObpRuntimeTraceProcessName.Buffer;
      RtlInitUnicodeStringEx(&ObpRuntimeTraceProcessName, 0LL);
    }
    ObpRuntimeTraceFlags = 0;
    v5 = ObpRegTraceFlags | ObpTraceFlags & 0xFFFFFF8C;
    ObpTraceFlags = v5;
    if ( (v5 & 1) != 0 )
    {
      ObpTracePoolTags = (unsigned __int64)&ObpRegTracePoolTags & -(__int64)((v5 & 0x10) != 0);
      ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRegTraceProcessName & -(__int64)((v5 & 0x20) != 0));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock, (__int64)&ObpRegTraceProcessName, v3, v4);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else
    {
      ObpTracePoolTags = 0LL;
      ObpTraceProcessName = 0LL;
      ObpStackSequence = 0;
      ObpNumTracedObjects = 0;
      v6 = ObpStackTable;
      v7 = (_QWORD **)ObpObjectTable;
      ObpTraceFlags = v5 & 0xFFFFFF8C;
      v8 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      ObpStackTable = 0LL;
      p_Next = &v8->Next;
      ObpObjectTable = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock, v9, v10, v11);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      ObpDestroyStackAndObjectTables(v6, v7, p_Next);
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x7452624Fu);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock, v2, v3, v4);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
