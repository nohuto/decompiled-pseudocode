/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x140087AF0
 * Callers:
 *     <none>
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     ObpGetWaitObject @ 0x140087EFC (ObpGetWaitObject.c)
 *     KiWaitSatisfyOther @ 0x140087F78 (KiWaitSatisfyOther.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS result; // eax
  int v13; // ebx
  int v14; // r14d
  PVOID v15; // rdi
  __int64 WaitObject; // rbx
  volatile signed __int32 *v17; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v19; // r11
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v22; // rsi
  PVOID v23; // rax
  unsigned __int8 v24; // r13
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  BOOLEAN v27; // bl
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  __int64 v30; // r9
  unsigned __int64 v31; // r11
  _KTHREAD *CurrentThread; // r9
  _DWORD *v33; // rsi
  _QWORD *v34; // rcx
  char v35; // al
  int v36; // r9d
  PVOID *v37; // r8
  _QWORD *v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // eax
  PVOID v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v45; // r9
  int v46; // eax
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID v48; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v49[2]; // [rsp+48h] [rbp-40h] BYREF
  PVOID v50; // [rsp+50h] [rbp-38h] BYREF
  char *v51; // [rsp+58h] [rbp-30h]
  struct _KPRCB *v52; // [rsp+60h] [rbp-28h]
  _KTHREAD *v53; // [rsp+68h] [rbp-20h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v13 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v48, 0LL);
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return v13;
    }
    v14 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v50, 0LL);
    v49[1] = v14;
    if ( v14 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v41 = v48;
LABEL_64:
      ObfDereferenceObjectWithTag(v41, 0x746C6644u);
      return v14;
    }
    v15 = v50;
    WaitObject = ObpGetWaitObject((char *)v50 - 48);
    if ( (__int16 *)WaitObject == &ObpDefaultObject || !WaitObject || (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) == 0 )
    {
      v14 = -1073741583;
LABEL_63:
      ObfDereferenceObjectWithTag(v48, 0x746C6644u);
      ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      v41 = Object;
      goto LABEL_64;
    }
    v17 = (volatile signed __int32 *)((char *)Object + 96);
    CurrentIrql = KeGetCurrentIrql();
    v19 = 2LL;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((char *)Object + 96);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v42 = SchedulerAssist[5];
          SchedulerAssist[5] = v42 + 1;
          if ( v42 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64(v17, 0LL) )
        goto LABEL_10;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      KxWaitForSpinLockAndAcquire(v17, v43);
    }
    v19 = 2LL;
LABEL_10:
    if ( !*((_BYTE *)Object + 104) )
    {
      *((_BYTE *)Object + 104) = 1;
      v22 = Object;
      *((_QWORD *)Object + 6) = KeyContext;
      v22[7] = ApcContext;
      *((_DWORD *)v22 + 18) = IoStatus;
      v22[8] = IoStatusInformation;
      v22[10] = v50;
      v23 = v48;
      v22[11] = v48;
      *((_WORD *)v22 + 8) = 1026;
      v22[3] = v23;
      v22[4] = WaitObject;
      v24 = KeGetCurrentIrql();
      __writecr8(v19);
      v49[0] = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
      {
        do
          KeYieldProcessorEx(v49);
        while ( (*(_DWORD *)WaitObject & 0x80u) != 0 );
      }
      if ( *(int *)(WaitObject + 4) > 0 )
      {
        KiWaitSatisfyOther(WaitObject);
        *((_BYTE *)v22 + 17) = 5;
        *(_QWORD *)Object = v30;
        v51 = (char *)v48 + 8;
        KeGetCurrentIrql();
        __writecr8(v31);
        v52 = KeGetCurrentPrcb();
        CurrentThread = v52->CurrentThread;
        v53 = CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentThread);
          EtwTraceEnqueueWork(v45, Object, IsThreadRunning);
        }
        v33 = v48;
        KiAcquireKobjectLockSafe(v48);
        v34 = v51;
        if ( (_QWORD *)*v34 == v34
          || (v40 = v33[10], v33 = v48, v40 >= *((_DWORD *)v48 + 11))
          || (v33 = v48, v53->Queue == v48) && v53->WaitReason == 15 )
        {
          v35 = 0;
        }
        else
        {
          v35 = KiWakeQueueWaiter((__int64)v52, (__int64)v48, (__int64)Object);
          v34 = v51;
        }
        if ( !v35 )
        {
          v36 = v33[1];
          v33[1] = v36 + 1;
          v37 = (PVOID *)*((_QWORD *)v33 + 4);
          if ( *v37 != v33 + 6 )
            __fastfail(3u);
          v38 = Object;
          *(_QWORD *)Object = v33 + 6;
          v38[1] = v37;
          *v37 = v38;
          *((_QWORD *)v33 + 4) = v38;
          if ( !v36 && (_QWORD *)*v34 != v34 )
            KiWakeOtherQueueWaiters((__int64)v52, (__int64)v33);
        }
        _InterlockedAnd(v33, 0xFFFFFF7F);
        _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
        KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, v24);
        v27 = 1;
      }
      else
      {
        v25 = *(_QWORD **)(WaitObject + 16);
        if ( *v25 != WaitObject + 8 )
          __fastfail(3u);
        v26 = Object;
        *(_QWORD *)Object = WaitObject + 8;
        v26[1] = v25;
        *v25 = v26;
        *(_QWORD *)(WaitObject + 16) = v26;
        _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
        __writecr8(v24);
        v27 = 0;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v17, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v46 = v29[5] - 1;
          v29[5] = v46;
          if ( !v46 && !*((_BYTE *)v29 + 25) && !*((_BYTE *)v29 + 27) )
            KiPerformUnboostKick(v28);
        }
      }
      __writecr8(CurrentIrql);
      if ( AlreadySignaled )
      {
        if ( PreviousMode )
        {
          v39 = (__int64)AlreadySignaled;
          if ( (unsigned __int64)AlreadySignaled >= 0x7FFFFFFF0000LL )
            v39 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v39 = *(_BYTE *)v39;
        }
        *AlreadySignaled = v27;
      }
      return v14;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v17);
    __writecr8(CurrentIrql);
    v14 = -1073741585;
    v15 = v50;
    goto LABEL_63;
  }
  return result;
}
