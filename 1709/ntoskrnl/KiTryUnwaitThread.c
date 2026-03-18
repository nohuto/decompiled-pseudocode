/*
 * XREFs of KiTryUnwaitThread @ 0x1400757E0
 * Callers:
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140083270 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     PpmCheckRun @ 0x14008F490 (PpmCheckRun.c)
 *     KiTimerWaitTest @ 0x140093D00 (KiTimerWaitTest.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpWakePushLock @ 0x1400A7F10 (ExpWakePushLock.c)
 *     KiRundownMutants @ 0x1400A95EC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400A987C (KeTerminateThread.c)
 *     KiResumeThread @ 0x1400AA1FC (KiResumeThread.c)
 *     KeSetProcess @ 0x1400AE74C (KeSetProcess.c)
 *     KeTimeOutQueueWaiters @ 0x1400B2AC0 (KeTimeOutQueueWaiters.c)
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 *     KeRundownQueueCommon @ 0x1400DB574 (KeRundownQueueCommon.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     KiExpireTimer2 @ 0x1400E2E30 (KiExpireTimer2.c)
 *     KePulseEvent @ 0x1400F0C10 (KePulseEvent.c)
 *     KeSetEventBoostPriorityEx @ 0x140100F90 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyMutant @ 0x140115618 (KiWaitSatisfyMutant.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // di
  char v10; // cl
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _BYTE *v17; // rcx
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
        if ( *(_QWORD *)(v15 + 8) != v4 + 216 || (v16 = *(_QWORD **)(v4 + 224), *v16 != v4 + 216) )
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
      v5 = 0;
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
    v17 = *(_BYTE **)(a2 + 32);
    if ( (*v17 & 0x7F) == 2 )
      KiWaitSatisfyMutant(v17, v4, a1);
  }
LABEL_10:
  result = v5;
  *(_QWORD *)(v4 + 64) = 0LL;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
