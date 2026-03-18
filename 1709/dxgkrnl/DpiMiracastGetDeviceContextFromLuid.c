/*
 * XREFs of DpiMiracastGetDeviceContextFromLuid @ 0x1C002EE58
 * Callers:
 *     DxgkMiracastGetNextChunkInfo @ 0x1C0030B50 (DxgkMiracastGetNextChunkInfo.c)
 *     DxgkHandleMiracastEscape @ 0x1C01E27B8 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiMiracastGetDeviceContextFromLuid(__int64 a1, char a2)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+54h] [rbp+Ch]

  v8 = HIDWORD(a1);
  v3 = a1;
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock(&qword_1C0060BD8, &LockHandle);
  v4 = qword_1C0060BE0;
  if ( (__int64 *)qword_1C0060BE0 == &qword_1C0060BE0 )
    goto LABEL_9;
  do
  {
    v5 = v4;
    if ( v3 == *(_DWORD *)(v4 + 96) && v8 == *(_DWORD *)(v4 + 100) )
      break;
    v4 = *(_QWORD *)v4;
  }
  while ( (__int64 *)v4 != &qword_1C0060BE0 );
  if ( (__int64 *)v4 == &qword_1C0060BE0 )
  {
LABEL_9:
    v5 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 24));
    _InterlockedXor((volatile signed __int32 *)(v5 + 28), v5);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
