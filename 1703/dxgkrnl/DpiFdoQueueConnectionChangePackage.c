/*
 * XREFs of DpiFdoQueueConnectionChangePackage @ 0x1C0012744
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0010714 (DpiFdoHandleDisplayDetectControl.c)
 *     DpIndicateChildStatus @ 0x1C003CB30 (DpIndicateChildStatus.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0012888 (ExAllocateFromNPagedLookasideList.c)
 *     DpIndicateConnectorChange @ 0x1C003CD30 (DpIndicateConnectorChange.c)
 */

__int64 __fastcall DpiFdoQueueConnectionChangePackage(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
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
  __int128 v17; // xmm1
  KSPIN_LOCK *v18; // rcx
  _QWORD *v19; // rcx
  __int64 v21; // rax
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
      v21 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v21 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v21);
      return 3221225626LL;
    }
    *((_DWORD *)v15 + 4) = 1953656900;
    *((_DWORD *)v15 + 5) = 13;
    *(_OWORD *)(v15 + 24) = *a2;
    *(_OWORD *)(v15 + 40) = *a3;
    *(_OWORD *)(v15 + 56) = a3[1];
    *(_OWORD *)(v15 + 72) = a3[2];
    v17 = a3[3];
    v15[104] = a4;
    *(_OWORD *)(v15 + 88) = v17;
    v15[105] = a5;
    v15[106] = a6;
    v15[107] = a8;
  }
  v18 = (KSPIN_LOCK *)(a1 + 3328);
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v18, &LockHandle);
  }
  else
  {
    v10 = 1;
    KeAcquireInStackQueuedSpinLock(v18, &LockHandle);
  }
  if ( v9 )
  {
    v19 = *(_QWORD **)(a1 + 3344);
    if ( *v19 != a1 + 3336 )
      __fastfail(3u);
    *v9 = a1 + 3336;
    v9[1] = v19;
    *v19 = v9;
    *(_QWORD *)(a1 + 3344) = v9;
  }
  if ( a7 && *(_BYTE *)(a1 + 3352) )
    v8 = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
  if ( v10 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v8;
}
