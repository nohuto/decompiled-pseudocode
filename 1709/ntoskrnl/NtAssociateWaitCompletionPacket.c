/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1400E29D0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     ObpGetWaitObject @ 0x1400E2DAC (ObpGetWaitObject.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiWaitSatisfyOther @ 0x1400E33F4 (KiWaitSatisfyOther.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
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
  _QWORD *v19; // rsi
  PVOID v20; // rax
  unsigned __int8 v21; // r13
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  BOOLEAN v24; // bl
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  _KTHREAD *CurrentThread; // r9
  _DWORD *v28; // rsi
  _QWORD *v29; // rcx
  char v30; // al
  int v31; // r9d
  PVOID *v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // eax
  PVOID v36; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v38; // r9
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID v40; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v41[2]; // [rsp+48h] [rbp-40h] BYREF
  PVOID v42; // [rsp+50h] [rbp-38h] BYREF
  char *v43; // [rsp+58h] [rbp-30h]
  struct _KPRCB *CurrentPrcb; // [rsp+60h] [rbp-28h]
  _KTHREAD *v45; // [rsp+68h] [rbp-20h]
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
    v13 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v40, 0LL);
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return v13;
    }
    v14 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v42, 0LL);
    v41[1] = v14;
    if ( v14 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v36 = v40;
    }
    else
    {
      v15 = v42;
      WaitObject = ObpGetWaitObject((char *)v42 - 48);
      if ( (__int16 *)WaitObject != &ObpDefaultObject && WaitObject && (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) != 0 )
      {
        v17 = (volatile signed __int32 *)((char *)Object + 96);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((char *)Object + 96);
        }
        else if ( _interlockedbittestandset64(v17, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(v17);
        }
        if ( !*((_BYTE *)Object + 104) )
        {
          *((_BYTE *)Object + 104) = 1;
          v19 = Object;
          *((_QWORD *)Object + 6) = KeyContext;
          v19[7] = ApcContext;
          *((_DWORD *)v19 + 18) = IoStatus;
          v19[8] = IoStatusInformation;
          v19[10] = v42;
          v20 = v40;
          v19[11] = v40;
          *((_WORD *)v19 + 8) = 1026;
          v19[3] = v20;
          v19[4] = WaitObject;
          v21 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v41[0] = 0;
          while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
          {
            do
              KeYieldProcessorEx(v41);
            while ( (*(_DWORD *)WaitObject & 0x80u) != 0 );
          }
          if ( *(int *)(WaitObject + 4) > 0 )
          {
            KiWaitSatisfyOther(WaitObject);
            *((_BYTE *)v19 + 17) = 5;
            *(_QWORD *)Object = v25;
            v43 = (char *)v40 + 8;
            KeGetCurrentIrql();
            __writecr8(v26);
            CurrentPrcb = KeGetCurrentPrcb();
            CurrentThread = CurrentPrcb->CurrentThread;
            v45 = CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentThread);
              EtwTraceEnqueueWork(v38, Object, IsThreadRunning);
            }
            v28 = v40;
            KiAcquireKobjectLockSafe(v40);
            v29 = v43;
            if ( (_QWORD *)*v29 == v29
              || (v35 = v28[10], v28 = v40, v35 >= *((_DWORD *)v40 + 11))
              || (v28 = v40, v45->Queue == v40) && v45->WaitReason == 15 )
            {
              v30 = 0;
            }
            else
            {
              v30 = KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)v40, (__int64)Object);
              v29 = v43;
            }
            if ( !v30 )
            {
              v31 = v28[1];
              v28[1] = v31 + 1;
              v32 = (PVOID *)*((_QWORD *)v28 + 4);
              if ( *v32 != v28 + 6 )
                __fastfail(3u);
              v33 = Object;
              *(_QWORD *)Object = v28 + 6;
              v33[1] = v32;
              *v32 = v33;
              *((_QWORD *)v28 + 4) = v33;
              if ( !v31 && (_QWORD *)*v29 != v29 )
                KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)v28);
            }
            _InterlockedAnd(v28, 0xFFFFFF7F);
            _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
            KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, v21);
            v24 = 1;
          }
          else
          {
            v22 = *(_QWORD **)(WaitObject + 16);
            if ( *v22 != WaitObject + 8 )
              __fastfail(3u);
            v23 = Object;
            *(_QWORD *)Object = WaitObject + 8;
            v23[1] = v22;
            *v22 = v23;
            *(_QWORD *)(WaitObject + 16) = v23;
            _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
            __writecr8(v21);
            v24 = 0;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v17, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
          __writecr8(CurrentIrql);
          if ( AlreadySignaled )
          {
            if ( PreviousMode )
            {
              v34 = (__int64)AlreadySignaled;
              if ( (unsigned __int64)AlreadySignaled >= 0x7FFFFFFF0000LL )
                v34 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v34 = *(_BYTE *)v34;
            }
            *AlreadySignaled = v24;
          }
          return v14;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)v17);
        __writecr8(CurrentIrql);
        v14 = -1073741585;
        v15 = v42;
      }
      else
      {
        v14 = -1073741583;
      }
      ObfDereferenceObjectWithTag(v40, 0x746C6644u);
      ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      v36 = Object;
    }
    ObfDereferenceObjectWithTag(v36, 0x746C6644u);
    return v14;
  }
  return result;
}
