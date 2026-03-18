/*
 * XREFs of IoDecrementKeepAliveCount @ 0x1402374A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAlertThread @ 0x140043DB0 (KeAlertThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140237888 (IopAdjustFileObjectKeepAliveCount.c)
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
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_1403C84F0);
    v4 = v8;
    *(_QWORD *)(v8 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(v4 + 16) )
    {
      if ( qword_1403C8520 )
        KeAlertThread(qword_1403C8520, 0LL);
    }
    else
    {
      v5 = (__int64 *)qword_1403C84E8;
      if ( *(PVOID **)qword_1403C84E8 != &qword_1403C84E0 )
        __fastfail(3u);
      *(_QWORD *)v4 = &qword_1403C84E0;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      qword_1403C84E8 = v4;
      *(_BYTE *)(v4 + 16) = 1;
      if ( !byte_1403C8518 )
      {
        byte_1403C8518 = 1;
        ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
      }
    }
    KxReleaseSpinLock(&qword_1403C84F0);
    __writecr8(v3);
  }
  return (unsigned int)v2;
}
