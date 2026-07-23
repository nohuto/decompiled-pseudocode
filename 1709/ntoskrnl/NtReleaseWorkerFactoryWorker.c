/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x140076620
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140076870 (ExpWorkerFactoryCheckCreate.c)
 *     KeAreAllApcsDisabled @ 0x1400890C0 (KeAreAllApcsDisabled.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1400E28E4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1401092D0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ObpRemoveObjectRoutine @ 0x1404A3C00 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140568710 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1406F10E4 (ObpDeregisterObject.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  _DWORD *v2; // rbx
  volatile signed __int64 *v3; // rcx
  char *v4; // rsi
  unsigned __int8 CurrentIrql; // al
  __int64 v6; // rcx
  char v7; // di
  int v8; // eax
  NTSTATUS v9; // ebp
  __int64 v10; // rax
  _DWORD *v11; // rbx
  signed __int64 v12; // rax
  bool v13; // cc
  signed __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int64 *v17; // [rsp+48h] [rbp-30h]
  unsigned __int8 v18; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  result = ObReferenceObjectByHandle(
             WorkerFactoryHandle,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v2 = Object;
  v3 = (volatile signed __int64 *)*((_QWORD *)Object + 2);
  v4 = (char *)Object + 16;
  v17 = v3;
  v16 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v18 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v16, v3);
  }
  else
  {
    if ( _InterlockedExchange64(v3, (__int64)&v16) )
      KxWaitForLockOwnerShip(&v16);
    v2 = Object;
  }
  v6 = *(_QWORD *)v4;
  v7 = 0;
  if ( *(_BYTE *)(*(_QWORD *)v4 + 33LL) )
  {
    v9 = 128;
  }
  else
  {
    v8 = *(_DWORD *)(v6 + 24);
    if ( v8 == -1 )
    {
      v9 = -1073741823;
    }
    else
    {
      *(_DWORD *)(v6 + 24) = v8 + 1;
      if ( !*(_BYTE *)(*(_QWORD *)v4 + 32LL) )
      {
        *(_BYTE *)(*(_QWORD *)v4 + 32LL) = 1;
        v7 = 1;
      }
      v9 = 0;
      if ( v7 && (v2[38] & 0x200) != 0 )
        ExpLeaveWorkerFactoryAwayMode(v2);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v16, retaddr);
    goto LABEL_17;
  }
  _m_prefetchw(&v16);
  v10 = v16;
  if ( v16 )
    goto LABEL_25;
  if ( (__int64 *)_InterlockedCompareExchange64(v17, 0LL, (signed __int64)&v16) != &v16 )
  {
    v10 = KxWaitForLockChainValid(&v16);
LABEL_25:
    v16 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
  }
  v2 = Object;
LABEL_17:
  __writecr8(v18);
  if ( v7 )
  {
    IoSetIoCompletionEx2(*(_QWORD *)(*(_QWORD *)v4 + 8LL), 0LL, 0LL, 0, 0LL, 0, *(_QWORD *)(*(_QWORD *)v4 + 16LL), 0);
    ExpWorkerFactoryCheckCreate(v2, 0LL);
  }
  v11 = v2 - 12;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v11);
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL);
  v13 = v12 <= 1;
  v14 = v12 - 1;
  if ( v13 )
  {
    if ( *((_QWORD *)v11 + 1) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v11 + 24) ^ (unsigned __int64)BYTE1(v11)],
        (ULONG_PTR)Object,
        1uLL,
        *((_QWORD *)v11 + 1));
    if ( v14 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v14);
    if ( KeAreAllApcsDisabled() )
    {
      ObpDeferObjectDeletion(v11);
    }
    else
    {
      v15 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v11);
      if ( v15 )
        ObpHandleRevocationBlockRemoveObject(v15);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v11);
      ObpRemoveObjectRoutine(v11, 0LL);
    }
  }
  return v9;
}
