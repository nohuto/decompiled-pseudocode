/*
 * XREFs of NtCreateWorkerFactory @ 0x1404EB4C8
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeRegisterObjectNotification @ 0x1400B25BC (KeRegisterObjectNotification.c)
 *     ExpInitializeThreadHistory @ 0x1400B270C (ExpInitializeThreadHistory.c)
 *     KeInitializeTimer2 @ 0x1400B2730 (KeInitializeTimer2.c)
 *     KeDisableQueueingPriorityIncrement @ 0x1400B2848 (KeDisableQueueingPriorityIncrement.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopFreeMiniCompletionPacket @ 0x1404A39C0 (IopFreeMiniCompletionPacket.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     IoAllocateMiniCompletionPacket @ 0x1404EB9F0 (IoAllocateMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtCreateWorkerFactory(
        PHANDLE WorkerFactoryHandleReturn,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE CompletionPortHandle,
        HANDLE WorkerProcessHandle,
        PVOID StartRoutine,
        PVOID StartParameter,
        ULONG MaxThreadCount,
        SIZE_T StackReserve,
        SIZE_T StackCommit)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v15; // r8
  _QWORD *PoolWithQuotaTag; // rax
  PVOID v17; // rsi
  NTSTATUS v18; // ebx
  volatile signed __int32 *v19; // rcx
  PVOID v20; // r14
  __int64 MiniCompletionPacket; // rax
  _QWORD *v22; // rdi
  SIZE_T v23; // rcx
  SIZE_T v24; // rcx
  PVOID v25; // rcx
  NTSTATUS result; // eax
  __int64 v27; // rcx
  PVOID *Object; // [rsp+20h] [rbp-98h]
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID v30; // [rsp+60h] [rbp-58h] BYREF
  PVOID v31; // [rsp+68h] [rbp-50h] BYREF
  PVOID v32; // [rsp+70h] [rbp-48h] BYREF
  __int64 v33; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v34[3]; // [rsp+88h] [rbp-30h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WorkerFactoryHandleReturn < 0x7FFFFFFF0000LL )
      v15 = (__int64)WorkerFactoryHandleReturn;
    *(_QWORD *)v15 = *(_QWORD *)v15;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x63577054u);
  v17 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741801;
  *PoolWithQuotaTag = 0LL;
  PoolWithQuotaTag[3] = 0LL;
  *((_WORD *)PoolWithQuotaTag + 16) = 0;
  *((_BYTE *)PoolWithQuotaTag + 34) = 0;
  v18 = ObReferenceObjectByHandle(CompletionPortHandle, 2u, IoCompletionObjectType, PreviousMode, &v30, 0LL);
  v19 = (volatile signed __int32 *)v30;
  *((_QWORD *)v17 + 1) = v30;
  if ( v18 < 0 )
  {
LABEL_26:
    ExFreePoolWithTag(v17, 0);
    return v18;
  }
  KeDisableQueueingPriorityIncrement(v19);
  v18 = ObpReferenceObjectByHandleWithTag(
          (ULONG_PTR)WorkerProcessHandle,
          42,
          (__int64)PsProcessType,
          PreviousMode,
          1717008453,
          &v31,
          0LL,
          0LL);
  if ( v18 < 0 )
  {
LABEL_25:
    ObfDereferenceObject(*((PVOID *)v17 + 1));
    goto LABEL_26;
  }
  v20 = v31;
  if ( KeGetCurrentThread()->ApcState.Process != v31 )
  {
    v18 = -1073741811;
    goto LABEL_24;
  }
  v18 = ObOpenObjectByPointer(v31, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  if ( v18 < 0 )
  {
LABEL_24:
    ObfDereferenceObjectWithTag(v20, 0x66577845u);
    goto LABEL_25;
  }
  MiniCompletionPacket = IoAllocateMiniCompletionPacket(ExpWorkerFactoryCompletionPacketRoutine, v17);
  *((_QWORD *)v17 + 2) = MiniCompletionPacket;
  if ( !MiniCompletionPacket )
  {
    v18 = -1073741801;
LABEL_23:
    ObCloseHandle(Handle, 0);
    goto LABEL_24;
  }
  v18 = ObCreateObjectEx(
          PreviousMode,
          ExpWorkerFactoryObjectType,
          (__int64)ObjectAttributes,
          PreviousMode,
          (__int64)Object,
          416,
          0,
          0,
          &v32,
          0LL);
  if ( v18 < 0 )
  {
    v27 = *((_QWORD *)v17 + 2);
    *(_QWORD *)(v27 + 56) = 0LL;
    IopFreeMiniCompletionPacket((_SLIST_ENTRY *)v27);
    goto LABEL_23;
  }
  v22 = v32;
  *((_QWORD *)v32 + 2) = v17;
  v22[14] = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *((_DWORD *)v22 + 30) = 0;
  *((_DWORD *)v22 + 31) = MaxThreadCount;
  *(_QWORD *)((char *)v22 + 140) = 0LL;
  v22[16] = 0LL;
  v23 = 0x10000LL;
  if ( StackReserve )
    v23 = StackReserve;
  v22[7] = v23;
  v22[19] = 0LL;
  v24 = 4096LL;
  if ( StackCommit )
    v24 = StackCommit;
  v22[8] = v24;
  v22[3] = StartRoutine;
  v22[4] = StartParameter;
  *((_DWORD *)v22 + 37) = 0;
  *((_DWORD *)v22 + 40) = 0;
  v22[5] = Handle;
  v22[6] = v20;
  *((_DWORD *)v22 + 34) = 0;
  *((_DWORD *)v22 + 102) = 0;
  *((_DWORD *)v22 + 88) = 1;
  KeInitializeTimer2((__int64)(v22 + 21));
  ExpInitializeThreadHistory((__int64)v22);
  v22[13] = 0LL;
  ObfReferenceObject(v25);
  KeRegisterObjectNotification((__int64)(v22 + 21), (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v22 + 38));
  v34[0] = 0LL;
  v34[1] = -1LL;
  KeSetTimer2((__int64)(v22 + 21), v22[14], -v22[14], (__int64)v34);
  result = ObInsertObjectEx(v22, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v33);
  if ( result >= 0 )
    *WorkerFactoryHandleReturn = (HANDLE)v33;
  return result;
}
