/*
 * XREFs of NtNotifyChangeSession @ 0x1405E12D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExNotifyCallback @ 0x1400AEAB0 (ExNotifyCallback.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
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
  _BYTE *v17; // rbx
  struct _WORK_QUEUE_ITEM *v18; // rax
  _BYTE *PoolWithTag; // rax
  unsigned __int16 v20; // r12
  _BYTE *v21; // rax
  char v22; // [rsp+30h] [rbp-1B8h]
  char v23; // [rsp+31h] [rbp-1B7h]
  KPROCESSOR_MODE v24; // [rsp+32h] [rbp-1B6h]
  NTSTATUS v25; // [rsp+50h] [rbp-198h]
  PVOID Object; // [rsp+58h] [rbp-190h] BYREF
  LARGE_INTEGER Interval; // [rsp+60h] [rbp-188h] BYREF
  _OWORD Argument1[2]; // [rsp+70h] [rbp-178h] BYREF
  _LIST_ENTRY v29; // [rsp+90h] [rbp-158h]
  __int128 v30; // [rsp+A0h] [rbp-148h]
  _BYTE v31[256]; // [rsp+B0h] [rbp-138h] BYREF

  v10 = PayloadSize;
  v22 = 0;
  v23 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v24 = PreviousMode;
  if ( PayloadSize > 0x100 )
    return -1073741580;
  result = ObReferenceObjectByHandle(SessionHandle, 2u, MmSessionObjectType, PreviousMode, &Object, 0LL);
  v25 = result;
  if ( result < 0 )
    return result;
  v13 = Object;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)Object + 3) + 8152LL), Executive, 0, 0, 0LL);
  v14 = v13[3];
  v15 = *(_DWORD *)(v14 + 8148);
  if ( v15 == ChangeSequenceNumber )
  {
    v16 = v15 + 1;
LABEL_5:
    *(_DWORD *)(v14 + 8148) = v16;
    goto LABEL_6;
  }
  if ( v15 <= ChangeSequenceNumber || v15 - ChangeSequenceNumber >= 0xFFFFFFFD )
  {
    Interval.QuadPart = -1000000LL;
    v20 = 0;
    do
    {
      KeSetEvent((PRKEVENT)(v14 + 8152), 0, 0);
      KeDelayExecutionThread(0, 0, &Interval);
      KeWaitForSingleObject((PVOID)(v13[3] + 8152LL), Executive, 0, 0, 0LL);
      ++v20;
      v14 = v13[3];
    }
    while ( v20 <= 0xAu && *(_DWORD *)(v14 + 8148) != ChangeSequenceNumber );
    v16 = ChangeSequenceNumber + 1;
    v10 = PayloadSize;
    goto LABEL_5;
  }
LABEL_6:
  if ( Event == IoSessionEventIgnore )
  {
    KeSetEvent((PRKEVENT)(v13[3] + 8152LL), 0, 0);
    ObfDereferenceObject(v13);
    return 0;
  }
  *(_DWORD *)(v13[3] + 8144LL) = NewState;
  v17 = 0LL;
  if ( !(_DWORD)v10 )
    goto LABEL_8;
  if ( v24 == 1 )
  {
    if ( (unsigned __int64)Payload + v10 > 0x7FFFFFFF0000LL || (char *)Payload + v10 < Payload )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x6E536F49u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      v22 = 1;
      memmove(PoolWithTag, Payload, v10);
    }
    else
    {
      v17 = v31;
      memmove(v31, Payload, v10);
      v23 = 1;
    }
    LODWORD(v10) = PayloadSize;
    goto LABEL_8;
  }
  if ( (unsigned int)(Event - 1) > 1 )
  {
    v21 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x6E536F49u);
    v17 = v21;
    if ( v21 )
    {
      v22 = 1;
      memmove(v21, Payload, (unsigned int)v10);
      goto LABEL_8;
    }
    v23 = 1;
  }
  v17 = Payload;
LABEL_8:
  LODWORD(v29.Flink) = Event;
  *(struct _LIST_ENTRY **)((char *)&v29.Flink + 4) = (struct _LIST_ENTRY *)__PAIR64__(v10, NewState);
  *(_QWORD *)&v30 = v17;
  *((_QWORD *)&v30 + 1) = v13;
  if ( !v23 && (unsigned int)(Event - 1) > 1 )
  {
    v18 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6E536F49u);
    if ( v18 )
    {
      v18->List = (_LIST_ENTRY)Argument1[0];
      *(_OWORD *)&v18->WorkerRoutine = Argument1[1];
      v18[1].List = v29;
      *(_OWORD *)&v18[1].WorkerRoutine = v30;
      v18->WorkerRoutine = (void (__fastcall *)(void *))IopSessionChangeWorker;
      v18->Parameter = v18;
      v18->List.Flink = 0LL;
      ExQueueWorkItem(v18, DelayedWorkQueue);
      return 0;
    }
  }
  ExNotifyCallback(IopSessionCallbackObject, Argument1, 0LL);
  KeSetEvent((PRKEVENT)(v13[3] + 8152LL), 0, 0);
  ObfDereferenceObject(v13);
  if ( v17 )
  {
    if ( v22 == 1 )
      ExFreePoolWithTag(v17, 0);
  }
  return v25;
}
