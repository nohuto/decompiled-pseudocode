/*
 * XREFs of VidSchRegisterSignalOnErrorDevice @ 0x1C0003440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchRegisterSignalOnErrorDevice(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1904LL), &LockHandle);
  v4 = a1 + 152;
  v5 = *(_QWORD **)(v4 + 8);
  if ( *v5 != v4 )
    __fastfail(3u);
  *a2 = v4;
  a2[1] = v5;
  *v5 = a2;
  *(_QWORD *)(v4 + 8) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
