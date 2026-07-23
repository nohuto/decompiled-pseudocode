/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1400514B0
 * Callers:
 *     <none>
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14004FB00 (KxWaitForSpinLockAndAcquire.c)
 *     ObpGetWaitObject @ 0x1400518A0 (ObpGetWaitObject.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiWaitSatisfyOther @ 0x140051968 (KiWaitSatisfyOther.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401FEC08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
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
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  volatile signed __int32 *v13; // rsi
  int v14; // ebx
  volatile signed __int32 *v15; // r15
  int v16; // r14d
  PVOID v17; // rdi
  __int64 WaitObject; // rbx
  volatile signed __int32 *v19; // rdi
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v21; // rsi
  PVOID v22; // rax
  unsigned __int8 v23; // r13
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  BOOLEAN v26; // bl
  __int64 v27; // rdx
  __int64 v28; // r10
  unsigned __int64 v29; // r9
  _KTHREAD *CurrentThread; // r9
  _DWORD *v31; // rsi
  _QWORD *v32; // rcx
  char v33; // al
  int v34; // r9d
  PVOID *v35; // r8
  _QWORD *v36; // rax
  unsigned int v37; // eax
  volatile signed __int32 *v38; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v40; // r9
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  PVOID v42; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v43[2]; // [rsp+48h] [rbp-60h] BYREF
  PVOID v44; // [rsp+50h] [rbp-58h] BYREF
  char *v45; // [rsp+58h] [rbp-50h]
  struct _KPRCB *CurrentPrcb; // [rsp+60h] [rbp-48h]
  _KTHREAD *v47; // [rsp+68h] [rbp-40h]
  PVOID v48; // [rsp+70h] [rbp-38h]
  PVOID v49; // [rsp+78h] [rbp-30h]
  PVOID v50; // [rsp+80h] [rbp-28h]
  void *retaddr; // [rsp+A8h] [rbp+0h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             PreviousMode,
             &Object,
             0LL);
  v13 = (volatile signed __int32 *)Object;
  v48 = Object;
  if ( result >= 0 )
  {
    v14 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v42, 0LL);
    v15 = (volatile signed __int32 *)v42;
    v49 = v42;
    if ( v14 < 0 )
    {
      ObfDereferenceObjectWithTag((PVOID)v13, 0x746C6644u);
      return v14;
    }
    v16 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v44, 0LL);
    v17 = v44;
    v50 = v44;
    v43[1] = v16;
    if ( v16 < 0 )
    {
      ObfDereferenceObjectWithTag((PVOID)v13, 0x746C6644u);
      v38 = v15;
    }
    else
    {
      WaitObject = ObpGetWaitObject((char *)v44 - 48);
      if ( (__int16 *)WaitObject != &ObpDefaultObject && WaitObject && (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) != 0 )
      {
        v19 = v13 + 24;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v13 + 24);
        }
        else
        {
          if ( _interlockedbittestandset64(v19, 0LL) )
            KxWaitForSpinLockAndAcquire(v13 + 24);
          v13 = (volatile signed __int32 *)Object;
        }
        if ( !*((_BYTE *)v13 + 104) )
        {
          *((_BYTE *)v13 + 104) = 1;
          v21 = Object;
          *((_QWORD *)Object + 6) = KeyContext;
          v21[7] = ApcContext;
          *((_DWORD *)v21 + 18) = IoStatus;
          v21[8] = IoStatusInformation;
          v21[10] = v44;
          v22 = v42;
          v21[11] = v42;
          *((_WORD *)v21 + 8) = 1026;
          v21[3] = v22;
          v21[4] = WaitObject;
          v23 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v43[0] = 0;
          while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
          {
            do
              KeYieldProcessorEx(v43);
            while ( (*(_DWORD *)WaitObject & 0x80u) != 0 );
          }
          if ( *(int *)(WaitObject + 4) > 0 )
          {
            KiWaitSatisfyOther(WaitObject);
            *((_BYTE *)v21 + 17) = 5;
            *(_QWORD *)Object = v28;
            v45 = (char *)v42 + 8;
            KeGetCurrentIrql();
            __writecr8(v29);
            CurrentPrcb = KeGetCurrentPrcb();
            CurrentThread = CurrentPrcb->CurrentThread;
            v47 = CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentThread);
              EtwTraceEnqueueWork(v40, Object, IsThreadRunning);
            }
            v31 = v42;
            KiAcquireKobjectLockSafe(v42);
            v32 = v45;
            if ( (_QWORD *)*v32 == v32
              || (v37 = v31[10], v31 = v42, v37 >= *((_DWORD *)v42 + 11))
              || (v31 = v42, v47->Queue == v42) && v47->WaitReason == 15 )
            {
              v33 = 0;
            }
            else
            {
              v33 = KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)v42, (__int64)Object);
              v32 = v45;
            }
            if ( !v33 )
            {
              v34 = v31[1];
              v31[1] = v34 + 1;
              v35 = (PVOID *)*((_QWORD *)v31 + 4);
              if ( *v35 != v31 + 6 )
                __fastfail(3u);
              v36 = Object;
              *(_QWORD *)Object = v31 + 6;
              v36[1] = v35;
              *v35 = v36;
              *((_QWORD *)v31 + 4) = v36;
              if ( !v34 && (_QWORD *)*v32 != v32 )
                KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)v31);
            }
            _InterlockedAnd(v31, 0xFFFFFF7F);
            _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
            KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, v23);
            v26 = 1;
          }
          else
          {
            v24 = *(_QWORD **)(WaitObject + 16);
            if ( *v24 != WaitObject + 8 )
              __fastfail(3u);
            v25 = Object;
            *(_QWORD *)Object = WaitObject + 8;
            v25[1] = v24;
            *v24 = v25;
            *(_QWORD *)(WaitObject + 16) = v25;
            _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
            __writecr8(v23);
            v26 = 0;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v19, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
          __writecr8(CurrentIrql);
          if ( AlreadySignaled )
          {
            if ( PreviousMode )
            {
              v27 = (__int64)AlreadySignaled;
              if ( (unsigned __int64)AlreadySignaled >= 0x7FFFFFFF0000LL )
                v27 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v27 = *(_BYTE *)v27;
            }
            *AlreadySignaled = v26;
          }
          return v16;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)v19);
        __writecr8(CurrentIrql);
        v16 = -1073741585;
        v13 = (volatile signed __int32 *)Object;
        v15 = (volatile signed __int32 *)v42;
        v17 = v44;
      }
      else
      {
        v16 = -1073741583;
      }
      ObfDereferenceObjectWithTag((PVOID)v15, 0x746C6644u);
      ObfDereferenceObjectWithTag(v17, 0x746C6644u);
      v38 = v13;
    }
    ObfDereferenceObjectWithTag((PVOID)v38, 0x746C6644u);
    return v16;
  }
  return result;
}
