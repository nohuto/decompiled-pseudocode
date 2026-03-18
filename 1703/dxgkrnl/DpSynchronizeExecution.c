/*
 * XREFs of DpSynchronizeExecution @ 0x1C0001560
 * Callers:
 *     DxgNotifyDpcCB @ 0x1C00016A0 (DxgNotifyDpcCB.c)
 *     DpiMiracastChunkInfoCallbackDpc @ 0x1C003E1B0 (DpiMiracastChunkInfoCallbackDpc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpSynchronizeExecution(__int64 a1, KSYNCHRONIZE_ROUTINE *a2, void *a3, unsigned int a4, BOOLEAN *a5)
{
  __int64 v5; // r10
  __int64 v8; // rbx
  struct _KINTERRUPT *v9; // rcx
  int v10; // eax
  __int64 v11; // r9
  KIRQL v13; // di
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  if ( !a1
    || !a2
    || !a5
    || (v8 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v8 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
LABEL_22:
    v14 = -1073741811;
    v15 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    goto LABEL_23;
  }
  v9 = *(struct _KINTERRUPT **)(v8 + 1232);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v8 + 1224);
    if ( v10 == 2 )
    {
LABEL_12:
      *a5 = KeSynchronizeExecution(v9, a2, a3);
      return 0LL;
    }
    if ( v10 != 3 )
      return 0LL;
    v11 = *(_QWORD *)(v8 + 1240);
    if ( *(_DWORD *)(v11 + 4) > (unsigned int)v5 )
    {
      v9 = *(struct _KINTERRUPT **)(v11 + 48 * v5 + 24);
      goto LABEL_12;
    }
    goto LABEL_22;
  }
  if ( *(_BYTE *)(v8 + 2556)
    || *(_BYTE *)(v8 + 2558)
    || *(_BYTE *)(v8 + 2557)
    || *(_BYTE *)(v8 + 1143)
    || *(_BYTE *)(v8 + 2559)
    || *(_BYTE *)(v8 + 2560) )
  {
    v13 = KfRaiseIrql(3u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1312), &LockHandle);
    *a5 = ((__int64 (__fastcall *)(void *))a2)(a3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v13);
    return 0LL;
  }
  v14 = -1073741823;
  v15 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v15 + 24) = -1073741823LL;
LABEL_23:
  WdLogEvent5_WdError(v15);
  v16 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v16 + 24) = v14;
  WdLogEvent5_WdError(v16);
  return (unsigned int)v14;
}
