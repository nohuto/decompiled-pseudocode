/*
 * XREFs of DpiFdoQueueConnectionChangePackage @ 0x1C003B6D8
 * Callers:
 *     DpIndicateChildStatus @ 0x1C0038A90 (DpIndicateChildStatus.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x1C003B0E8 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DpIndicateConnectorChange @ 0x1C0038CA0 (DpIndicateConnectorChange.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C003BEC4 (ExAllocateFromNPagedLookasideList.c)
 */

__int64 __fastcall DpiFdoQueueConnectionChangePackage(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  unsigned int v8; // edi
  _QWORD *v13; // rbx
  char *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int8 CurrentIrql; // bp
  KSPIN_LOCK *v19; // rcx
  _QWORD *v20; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0;
  v13 = 0LL;
  if ( a2 )
  {
    v14 = (char *)ExAllocateFromNPagedLookasideList(&Lookaside);
    v13 = v14;
    if ( !v14 )
    {
      v16 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v16 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v16);
      return 3221225626LL;
    }
    *((_DWORD *)v14 + 4) = 1953656900;
    *((_DWORD *)v14 + 5) = 13;
    *(_OWORD *)(v14 + 24) = *a2;
    *(_OWORD *)(v14 + 40) = *(_OWORD *)a3;
    *(_OWORD *)(v14 + 56) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v14 + 72) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v14 + 88) = *(_OWORD *)(a3 + 48);
    *((_QWORD *)v14 + 13) = *(_QWORD *)(a3 + 64);
    v14[112] = a4;
    v14[113] = a5;
    v14[114] = a6;
    v14[115] = a8;
  }
  CurrentIrql = KeGetCurrentIrql();
  v19 = (KSPIN_LOCK *)(a1 + 3352);
  if ( CurrentIrql >= 2u )
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v19, &LockHandle);
  else
    KeAcquireInStackQueuedSpinLock(v19, &LockHandle);
  if ( v13 )
  {
    v20 = *(_QWORD **)(a1 + 3368);
    if ( *v20 != a1 + 3360 )
      __fastfail(3u);
    *v13 = a1 + 3360;
    v13[1] = v20;
    *v20 = v13;
    *(_QWORD *)(a1 + 3368) = v13;
  }
  if ( a7 && *(_BYTE *)(a1 + 3376) )
    v8 = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
  if ( CurrentIrql >= 2u )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}
