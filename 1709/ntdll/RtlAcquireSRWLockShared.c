/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180046FA0
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x180003A08 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000BEA4 (RtlpWnfProcessCurrentDescriptor.c)
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180013550 (TpPoolReferenceExistingGlobalPool.c)
 *     LdrpAllocateTls @ 0x18001C850 (LdrpAllocateTls.c)
 *     LdrpGetFromMUIMemCache @ 0x180029A0C (LdrpGetFromMUIMemCache.c)
 *     LdrpCallTlsInitializers @ 0x180031350 (LdrpCallTlsInitializers.c)
 *     TppPoolpReferenceGlobalPool @ 0x180035C94 (TppPoolpReferenceGlobalPool.c)
 *     EtwpCheckForPrivatePreEnable @ 0x1800369D8 (EtwpCheckForPrivatePreEnable.c)
 *     RtlSleepConditionVariableSRW @ 0x1800380E0 (RtlSleepConditionVariableSRW.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180046890 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800494B8 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLfhContextCompact @ 0x18004954C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800495E4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18005F17C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x180062508 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpCreateWnfNameSubscription @ 0x18006DE60 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18006E0F0 (RtlpCreateSerializationGroup.c)
 *     RtlpHpLargeAllocSize @ 0x18006F39C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18006F438 (RtlpHpLargeAllocSetExtraPresent.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180073AF4 (RtlpLookupDynamicFunctionEntry.c)
 *     SbAtomicCaptureContextGuid @ 0x180074428 (SbAtomicCaptureContextGuid.c)
 *     RtlQueryProtectedPolicy @ 0x180075B20 (RtlQueryProtectedPolicy.c)
 *     RtlProcessFlsData @ 0x180076430 (RtlProcessFlsData.c)
 *     LdrpFreeTls @ 0x180078198 (LdrpFreeTls.c)
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 *     RtlpComputeDllPath @ 0x18007E410 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18007F7A0 (RtlpComputeDllPathWithOptions.c)
 *     RtlCheckHeldCriticalSections @ 0x1800815EC (RtlCheckHeldCriticalSections.c)
 *     TpTrimPools @ 0x180083540 (TpTrimPools.c)
 *     RtlpHpTagQueryTags @ 0x180084D80 (RtlpHpTagQueryTags.c)
 *     RtlCloneUserProcess @ 0x1800D75D0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D7B40 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessLockInformation @ 0x1800D8A20 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800DDBD0 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800DE060 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E0834 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800EA420 (RtlPosixBarrier.c)
 *     RtlpHpStackTraceAddStack @ 0x1800FFF48 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180100870 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180100A6C (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x180100AE0 (RtlpHpStackTraceSerialize.c)
 *     RtlStackDbStackAdd @ 0x18010D254 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18010DC60 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18004A984 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x1800697A0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075EC0 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3970 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  char *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 UniqueThread; // rcx
  unsigned __int64 Value; // rbx
  signed __int64 v7; // rcx
  bool v8; // zf
  signed __int64 v9; // rax
  unsigned __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  signed __int32 v16[9]; // [rsp+44h] [rbp-24h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = 0;
  UniqueThread = 17LL;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( Value )
  {
    while ( 1 )
    {
      if ( (Value & 1) != 0 && ((Value & 2) != 0 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, v1, v2, v3) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
        v14 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v16[0] = 2;
        v13 = 0LL;
        if ( (Value & 2) != 0 )
        {
          v12 = 0LL;
          v15 = -1;
          UniqueThread = (unsigned __int8)Value;
          v11 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v1 = (char *)((unsigned __int64)&v11 | Value & 8 | 7);
          LOBYTE(UniqueThread) = (Value & 4) == 0;
        }
        else
        {
          v15 = -2;
          v12 = &v11;
          v1 = (char *)&v11 + 3;
        }
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, (signed __int64)v1, Value);
        v8 = Value == v9;
        Value = v9;
        if ( !v8 )
          goto LABEL_8;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          UniqueThread = (unsigned int)SRWLockSpinCount;
          if ( SRWLockSpinCount )
          {
            do
            {
              if ( (v16[0] & 2) == 0 )
                break;
              _mm_pause();
              v8 = (_DWORD)UniqueThread == 1;
              UniqueThread = (unsigned int)(UniqueThread - 1);
            }
            while ( !v8 );
          }
        }
        if ( _interlockedbittestandreset(v16, 1u) )
        {
          do
            NtWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v16[0] & 4) == 0 );
        }
      }
      else
      {
        v7 = (Value | 1) + 16;
        if ( (Value & 2) != 0 )
          v7 = Value | 1;
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v7, Value) )
          return;
LABEL_8:
        RtlBackoff(&v17);
        _m_prefetchw(SRWLock);
        Value = SRWLock->Value;
      }
    }
  }
}
