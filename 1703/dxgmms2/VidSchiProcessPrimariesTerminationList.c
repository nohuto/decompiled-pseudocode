/*
 * XREFs of VidSchiProcessPrimariesTerminationList @ 0x1C0026AF0
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0025BD0 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C00AD81C (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0010E14 (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001E4C4 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VidSchiProcessPrimariesTerminationList(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD **v3; // rbx
  _QWORD *v4; // r9
  _QWORD *v5; // rdi
  _QWORD *v6; // r9
  VIDMM_GLOBAL ***v7; // r10
  __int64 v8; // rcx
  _QWORD *v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1912), &LockHandle);
  v3 = (_QWORD **)(a1 + 1936);
  v4 = *v3;
  if ( *v3 != v3 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v2, (__int64)(v4 - 25)) )
      {
        v8 = *v6;
        v9 = (_QWORD *)v6[1];
        if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v9 != v6 )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        VIDMM_GLOBAL::AddPendingTermination(*v7[1], (struct VIDMM_ALLOC *)v7);
      }
      v4 = v5;
    }
    while ( v5 != v3 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
