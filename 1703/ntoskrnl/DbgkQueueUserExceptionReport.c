/*
 * XREFs of DbgkQueueUserExceptionReport @ 0x140680B08
 * Callers:
 *     SepLogLpacAccessFailure @ 0x140246C14 (SepLogLpacAccessFailure.c)
 * Callees:
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsResumeThread @ 0x140440ED0 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1404C7C50 (PsSuspendThread.c)
 */

__int64 __fastcall DbgkQueueUserExceptionReport(__int64 Object, __int64 a2, __int64 a3)
{
  char v3; // r15
  char v4; // bp
  char *PoolWithTag; // rdi
  _OWORD *v9; // rcx
  _KPROCESS *v10; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v12; // esi
  $5BC46E0569261879018906DEC3127961 v13; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  v4 = 0;
  if ( !DbgkEnableWerUserReporting )
    return 3221226326LL;
  if ( (*(_DWORD *)(Object + 116) & 0x400) != 0
    || (IoThreadToProcess((PETHREAD)Object)[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 )
  {
    return 3221225659LL;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 1736), 0x15u) )
    return 3221227268LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x4B474244u);
  if ( !PoolWithTag )
    return 3221225626LL;
  ObfReferenceObject((PVOID)Object);
  *(_QWORD *)PoolWithTag = Object;
  v9 = PoolWithTag + 24;
  *((_QWORD *)PoolWithTag + 1) = 30LL;
  if ( a3 )
  {
    *v9 = *(_OWORD *)a3;
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
    memset(v9, 0, 0x98uLL);
    PoolWithTag[16] = 0;
  }
  *((_QWORD *)PoolWithTag + 22) = 0LL;
  *((_QWORD *)PoolWithTag + 24) = DbgkUserReportWorkRoutine;
  *((_QWORD *)PoolWithTag + 25) = PoolWithTag;
  v10 = IoThreadToProcess((PETHREAD)Object);
  if ( v10 != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(v10, 0, (__int64)&v13);
    v4 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = PsSuspendThread(Object, 0LL);
  if ( v12 >= 0 )
  {
    v3 = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 176), DelayedWorkQueue);
  }
  KeLeaveCriticalRegion();
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x4B474244u);
    _InterlockedAnd((volatile signed __int32 *)(Object + 1736), 0xFFDFFFFF);
    if ( v3 )
      PsResumeThread(Object, 0LL);
    ObfDereferenceObject((PVOID)Object);
  }
  if ( v4 )
    KiUnstackDetachProcess(&v13, 0LL);
  return (unsigned int)v12;
}
