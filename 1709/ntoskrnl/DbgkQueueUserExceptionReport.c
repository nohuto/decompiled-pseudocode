/*
 * XREFs of DbgkQueueUserExceptionReport @ 0x1406ABCD4
 * Callers:
 *     SepLogLpacAccessFailure @ 0x14025E34C (SepLogLpacAccessFailure.c)
 *     MiForceCrashForInvalidAccess @ 0x1406DEB64 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     IoThreadToProcess @ 0x14006A740 (IoThreadToProcess.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsResumeThread @ 0x140575A80 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1405829A0 (PsSuspendThread.c)
 */

__int64 __fastcall DbgkQueueUserExceptionReport(__int64 Object, unsigned int a2, __int64 a3)
{
  char v3; // r15
  __int64 v4; // r14
  char v5; // bp
  char *PoolWithTag; // rdi
  _OWORD *v10; // rcx
  _KPROCESS *v11; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v13; // esi
  $709EDFC2F9E0D4565D6AA3C4377BC643 v14; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = 0;
  if ( !DbgkEnableWerUserReporting )
    return 3221226326LL;
  if ( (*(_DWORD *)(Object + 116) & 0x400) != 0
    || (IoThreadToProcess((PETHREAD)Object)[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 )
  {
    return 3221225659LL;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 1744), 0x15u) )
    return 3221227268LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x4B474244u);
  if ( !PoolWithTag )
    return 3221225626LL;
  ObfReferenceObject((PVOID)Object);
  *(_QWORD *)PoolWithTag = Object;
  v10 = PoolWithTag + 24;
  *((_QWORD *)PoolWithTag + 1) = v4;
  if ( a3 )
  {
    *v10 = *(_OWORD *)a3;
    *(_OWORD *)(PoolWithTag + 40) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(PoolWithTag + 56) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(PoolWithTag + 72) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(PoolWithTag + 88) = *(_OWORD *)(a3 + 64);
    *(_OWORD *)(PoolWithTag + 104) = *(_OWORD *)(a3 + 80);
    *(_OWORD *)(PoolWithTag + 120) = *(_OWORD *)(a3 + 96);
    *(_OWORD *)(PoolWithTag + 136) = *(_OWORD *)(a3 + 112);
    *(_OWORD *)(PoolWithTag + 152) = *(_OWORD *)(a3 + 128);
    *((_QWORD *)PoolWithTag + 21) = *(_QWORD *)(a3 + 144);
    PoolWithTag[16] = 1;
  }
  else
  {
    memset(v10, 0, 0x98uLL);
    PoolWithTag[16] = 0;
  }
  *((_QWORD *)PoolWithTag + 22) = 0LL;
  *((_QWORD *)PoolWithTag + 24) = DbgkUserReportWorkRoutine;
  *((_QWORD *)PoolWithTag + 25) = PoolWithTag;
  v11 = IoThreadToProcess((PETHREAD)Object);
  if ( v11 != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(v11, 0, (__int64)&v14);
    v5 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = PsSuspendThread(Object, 0LL);
  if ( v13 >= 0 )
  {
    v3 = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 176), DelayedWorkQueue);
  }
  KeLeaveCriticalRegion();
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x4B474244u);
    _InterlockedAnd((volatile signed __int32 *)(Object + 1744), 0xFFDFFFFF);
    if ( v3 )
      PsResumeThread(Object, 0LL);
    ObfDereferenceObject((PVOID)Object);
  }
  if ( v5 )
    KiUnstackDetachProcess(&v14, 0LL);
  return (unsigned int)v13;
}
