/*
 * XREFs of ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C00257D8
 * Callers:
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C0180320 (DxgkGetResourcePresentPrivateDriverData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPresentPrivateDriverDataFromResource(
        KSPIN_LOCK *a1,
        UINT **a2,
        struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *a3)
{
  UINT PrivateDriverDataSize; // ebp
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  UINT *v12; // rbx
  UINT v13; // eax
  __int64 v14; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  a3->PrivateDriverDataSize = 0;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock(a1 + 2, &LockHandle);
  v12 = (UINT *)a1[1];
  if ( v12 )
  {
    v13 = *v12;
    a3->PrivateDriverDataSize = *v12;
    if ( PrivateDriverDataSize < v13 )
    {
      v14 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      v7 = -1073741306;
      *(_QWORD *)(v14 + 24) = -1073741306LL;
      *(_QWORD *)(v14 + 32) = 11689LL;
      WdLogEvent5_WdWarning(v14);
      v12 = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = v7;
  *a2 = v12;
  return result;
}
