/*
 * XREFs of NtNotifyChangeSession @ 0x140582640
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140072E00 (ExNotifyCallback.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtNotifyChangeSession(
        HANDLE SessionHandle,
        ULONG ChangeSequenceNumber,
        PLARGE_INTEGER ChangeTimeStamp,
        IO_SESSION_EVENT Event,
        IO_SESSION_STATE NewState,
        IO_SESSION_STATE PreviousState,
        PVOID Payload,
        ULONG PayloadSize)
{
  SIZE_T v10; // r12
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  _QWORD *v13; // r14
  __int64 v14; // rcx
  ULONG v15; // eax
  ULONG v16; // eax
  __int64 v17; // rax
  _BYTE *v18; // rbx
  struct _WORK_QUEUE_ITEM *v19; // rax
  _BYTE *PoolWithTag; // rax
  unsigned __int16 v21; // r12
  _BYTE *v22; // rax
  char v23; // [rsp+30h] [rbp-1B8h]
  char v24; // [rsp+31h] [rbp-1B7h]
  KPROCESSOR_MODE v25; // [rsp+32h] [rbp-1B6h]
  NTSTATUS v26; // [rsp+50h] [rbp-198h]
  PVOID Object; // [rsp+58h] [rbp-190h] BYREF
  LARGE_INTEGER Interval; // [rsp+60h] [rbp-188h] BYREF
  _OWORD Argument1[2]; // [rsp+70h] [rbp-178h] BYREF
  _LIST_ENTRY v30; // [rsp+90h] [rbp-158h]
  __int128 v31; // [rsp+A0h] [rbp-148h]
  _BYTE v32[256]; // [rsp+B0h] [rbp-138h] BYREF

  v10 = PayloadSize;
  v23 = 0;
  v24 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25 = PreviousMode;
  if ( PayloadSize > 0x100 )
    return -1073741580;
  result = ObReferenceObjectByHandle(SessionHandle, 2u, MmSessionObjectType, PreviousMode, &Object, 0LL);
  v26 = result;
  if ( result < 0 )
    return result;
  v13 = Object;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)Object + 3) + 8280LL), Executive, 0, 0, 0LL);
  v14 = v13[3];
  v15 = *(_DWORD *)(v14 + 8276);
  if ( v15 == ChangeSequenceNumber )
  {
    v16 = v15 + 1;
LABEL_5:
    *(_DWORD *)(v14 + 8276) = v16;
    goto LABEL_6;
  }
  if ( v15 <= ChangeSequenceNumber || v15 - ChangeSequenceNumber >= 0xFFFFFFFD )
  {
    Interval.QuadPart = -1000000LL;
    v21 = 0;
    do
    {
      KeSetEvent((PRKEVENT)(v14 + 8280), 0, 0);
      KeDelayExecutionThread(0, 0, &Interval);
      KeWaitForSingleObject((PVOID)(v13[3] + 8280LL), Executive, 0, 0, 0LL);
      ++v21;
      v14 = v13[3];
    }
    while ( v21 <= 0xAu && *(_DWORD *)(v14 + 8276) != ChangeSequenceNumber );
    v16 = ChangeSequenceNumber + 1;
    v10 = PayloadSize;
    goto LABEL_5;
  }
LABEL_6:
  v17 = v13[3];
  if ( Event == IoSessionEventIgnore )
  {
    KeSetEvent((PRKEVENT)(v17 + 8280), 0, 0);
    ObfDereferenceObject(v13);
    return 0;
  }
  *(_DWORD *)(v17 + 8272) = NewState;
  v18 = 0LL;
  if ( !(_DWORD)v10 )
    goto LABEL_8;
  if ( v25 == 1 )
  {
    if ( (unsigned __int64)Payload + v10 > 0x7FFFFFFF0000LL || (char *)Payload + v10 < Payload )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x6E536F49u);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      v23 = 1;
      memmove(PoolWithTag, Payload, v10);
    }
    else
    {
      v18 = v32;
      memmove(v32, Payload, v10);
      v24 = 1;
    }
    LODWORD(v10) = PayloadSize;
    goto LABEL_8;
  }
  if ( (unsigned int)(Event - 1) > 1 )
  {
    v22 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x6E536F49u);
    v18 = v22;
    if ( v22 )
    {
      v23 = 1;
      memmove(v22, Payload, (unsigned int)v10);
      goto LABEL_8;
    }
    v24 = 1;
  }
  v18 = Payload;
LABEL_8:
  LODWORD(v30.Flink) = Event;
  *(struct _LIST_ENTRY **)((char *)&v30.Flink + 4) = (struct _LIST_ENTRY *)__PAIR64__(v10, NewState);
  *(_QWORD *)&v31 = v18;
  *((_QWORD *)&v31 + 1) = v13;
  if ( !v24 && (unsigned int)(Event - 1) > 1 )
  {
    v19 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6E536F49u);
    if ( v19 )
    {
      v19->List = (_LIST_ENTRY)Argument1[0];
      *(_OWORD *)&v19->WorkerRoutine = Argument1[1];
      v19[1].List = v30;
      *(_OWORD *)&v19[1].WorkerRoutine = v31;
      v19->WorkerRoutine = (void (__fastcall *)(void *))IopSessionChangeWorker;
      v19->Parameter = v19;
      v19->List.Flink = 0LL;
      ExQueueWorkItem(v19, DelayedWorkQueue);
      return 0;
    }
  }
  ExNotifyCallback(IopSessionCallbackObject, Argument1, 0LL);
  KeSetEvent((PRKEVENT)(v13[3] + 8280LL), 0, 0);
  ObfDereferenceObject(v13);
  if ( v18 )
  {
    if ( v23 == 1 )
      ExFreePoolWithTag(v18, 0);
  }
  return v26;
}
