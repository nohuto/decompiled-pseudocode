/*
 * XREFs of KiTryUnwaitThread @ 0x1400E1A90
 * Callers:
 *     KeRundownQueueEx @ 0x140011290 (KeRundownQueueEx.c)
 *     ExpDeleteMutant @ 0x140011530 (ExpDeleteMutant.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KeTimeOutQueueWaiters @ 0x14002969C (KeTimeOutQueueWaiters.c)
 *     KeWakeWaitChain @ 0x14002CAF8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     PpmCheckRun @ 0x140045590 (PpmCheckRun.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     KePulseEvent @ 0x140082D10 (KePulseEvent.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x1400E2BA0 (KeReleaseSemaphore.c)
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 *     KiRundownMutants @ 0x140111510 (KiRundownMutants.c)
 *     KeSetEventBoostPriorityEx @ 0x140111AC4 (KeSetEventBoostPriorityEx.c)
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 *     KeSetProcess @ 0x14011603C (KeSetProcess.c)
 * Callees:
 *     KiWaitSatisfyMutant @ 0x140018280 (KiWaitSatisfyMutant.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // di
  char v10; // cl
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int *v17; // rcx
  _DWORD v18[14]; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) != 5 )
    goto LABEL_10;
  v10 = *(_BYTE *)(v4 + 112);
  v5 = 0;
  v11 = v10 & 7;
  if ( v11 == 1 || v11 == 4 )
  {
    v12 = *(_QWORD *)(v4 + 232);
    if ( v12 )
    {
      if ( (*(_BYTE *)v12 & 0x7F) == 0x15 )
      {
        *(_DWORD *)(v4 + 540) = (unsigned __int8)*(_DWORD *)(v4 + 540);
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 4LL * *(unsigned int *)(v4 + 540) + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 40));
      }
    }
    v13 = *(_QWORD *)(v4 + 712);
    if ( v13 )
    {
      v18[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 22800), 0LL) )
      {
        do
          KeYieldProcessorEx(v18);
        while ( *(_QWORD *)(v13 + 22800) );
      }
      if ( *(_QWORD *)(v4 + 712) )
      {
        v15 = *(_QWORD *)(v4 + 216);
        v16 = *(_QWORD **)(v4 + 224);
        if ( *(_QWORD *)(v15 + 8) != v4 + 216 || *v16 != v4 + 216 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        *(_QWORD *)(v4 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 22800), 0LL);
    }
    *(_BYTE *)(v4 + 388) = 7;
    v5 = 1;
    *(_QWORD *)(v4 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = v4 + 216;
    *(_QWORD *)(v4 + 200) = a3;
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(v4 + 112) & 7) != 0 )
  {
    if ( v11 == 5 )
    {
      *(_BYTE *)(v4 + 112) = v10 & 0xF8 | 6;
      goto LABEL_10;
    }
    if ( v11 == 3 )
      *(_BYTE *)(a2 + 17) = 2;
LABEL_8:
    if ( !v5 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v5 = 1;
  *(_BYTE *)(v4 + 112) = v10 & 0xF8 | 2;
  *(_QWORD *)(v4 + 200) = a3;
  *(_BYTE *)(a2 + 17) = 0;
LABEL_9:
  if ( a4 )
  {
    *a4 = v4;
    v17 = *(int **)(a2 + 32);
    if ( (*(_BYTE *)v17 & 0x7F) == 2 )
      KiWaitSatisfyMutant(v17, v4, a1);
  }
LABEL_10:
  result = v5;
  *(_QWORD *)(v4 + 64) = 0LL;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
