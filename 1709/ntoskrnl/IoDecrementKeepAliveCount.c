/*
 * XREFs of IoDecrementKeepAliveCount @ 0x1401FA610
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAlertThread @ 0x1400AB690 (KeAlertThread.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401FAAE4 (IopAdjustFileObjectKeepAliveCount.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(int a1, int a2)
{
  int v2; // ebx
  KIRQL v3; // di
  __int64 v4; // rdx
  __int64 *v5; // rcx
  int v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = IopAdjustFileObjectKeepAliveCount(a1, a2, 0, (unsigned int)&v7, (__int64)&v8);
  if ( v2 >= 0 && !v7 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140385130);
    v4 = v8;
    *(_QWORD *)(v8 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(v4 + 16) )
    {
      if ( qword_140385160 )
        KeAlertThread(qword_140385160, 0);
    }
    else
    {
      v5 = (__int64 *)qword_140385128;
      if ( *(PVOID **)qword_140385128 != &qword_140385120 )
        __fastfail(3u);
      *(_QWORD *)v4 = &qword_140385120;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      qword_140385128 = v4;
      *(_BYTE *)(v4 + 16) = 1;
      if ( !byte_140385158 )
      {
        byte_140385158 = 1;
        ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
      }
    }
    KxReleaseSpinLock(&qword_140385130);
    __writecr8(v3);
  }
  return (unsigned int)v2;
}
