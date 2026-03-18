/*
 * XREFs of VidSchiReadCommandFromContextQueue @ 0x1C0028D08
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0027C74 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000B5B0 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C000D650 (VidSchiSetNextRunPacket.c)
 */

__int64 __fastcall VidSchiReadCommandFromContextQueue(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v3; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(v3 + 24);
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1888), &LockHandle);
  *a3 = *(_DWORD *)(a1 + 176) & 1;
  v8 = *(_QWORD *)(a1 + 632);
  if ( v8 )
  {
    --*(_DWORD *)(a1 + 764);
    --*(_DWORD *)(v3 + 2784);
    --*(_DWORD *)(v7 + 944);
    v9 = *(_QWORD *)(v8 + 32);
    if ( v9 == a1 + 648 )
    {
      *(_QWORD *)(a1 + 632) = 0LL;
      *(_DWORD *)(a1 + 628) &= 0xFFFFFFF0;
      VidSchiUpdateContextStatus(a1, (_QWORD *)1, (_QWORD *)0x4069);
    }
    else
    {
      VidSchiSetNextRunPacket(a1, v9 - 32);
    }
    VidSchiProfilePerformanceTick(5LL, v7, 0LL, v10, 0LL, v8, 0LL, 0LL);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}
