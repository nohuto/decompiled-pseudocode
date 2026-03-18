/*
 * XREFs of DpiFdoQueueConnectionChangePackage @ 0x1C00138A0
 * Callers:
 *     DpIndicateChildStatus @ 0x1C0011220 (DpIndicateChildStatus.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0012498 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DpIndicateConnectorChange @ 0x1C0011410 (DpIndicateConnectorChange.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00139FC (ExAllocateFromNPagedLookasideList.c)
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
  unsigned int v8; // esi
  _QWORD *v9; // rbx
  char v10; // bp
  char *v15; // rax
  __int64 v16; // rcx
  KSPIN_LOCK *v17; // rcx
  _QWORD *v18; // rcx
  __int64 v20; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( a2 )
  {
    v15 = (char *)ExAllocateFromNPagedLookasideList(&Lookaside);
    v9 = v15;
    if ( !v15 )
    {
      v20 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v20 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v20);
      return 3221225626LL;
    }
    *((_DWORD *)v15 + 4) = 1953656900;
    *((_DWORD *)v15 + 5) = 13;
    *(_OWORD *)(v15 + 24) = *a2;
    *(_OWORD *)(v15 + 40) = *(_OWORD *)a3;
    *(_OWORD *)(v15 + 56) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v15 + 72) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v15 + 88) = *(_OWORD *)(a3 + 48);
    *((_QWORD *)v15 + 13) = *(_QWORD *)(a3 + 64);
    v15[112] = a4;
    v15[113] = a5;
    v15[114] = a6;
    v15[115] = a8;
  }
  v17 = (KSPIN_LOCK *)(a1 + 3352);
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v17, &LockHandle);
  }
  else
  {
    v10 = 1;
    KeAcquireInStackQueuedSpinLock(v17, &LockHandle);
  }
  if ( v9 )
  {
    v18 = *(_QWORD **)(a1 + 3368);
    if ( *v18 != a1 + 3360 )
      __fastfail(3u);
    *v9 = a1 + 3360;
    v9[1] = v18;
    *v18 = v9;
    *(_QWORD *)(a1 + 3368) = v9;
  }
  if ( a7 && *(_BYTE *)(a1 + 3376) )
    v8 = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
  if ( v10 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v8;
}
