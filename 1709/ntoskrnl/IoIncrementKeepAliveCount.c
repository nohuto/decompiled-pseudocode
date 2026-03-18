/*
 * XREFs of IoIncrementKeepAliveCount @ 0x1401FA710
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401FAAE4 (IopAdjustFileObjectKeepAliveCount.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1407166EC (PspAdjustKeepAliveCountProcess.c)
 */

__int64 __fastcall IoIncrementKeepAliveCount(__int64 a1, void *a2)
{
  int v4; // edi
  __int64 v5; // r9
  KIRQL v6; // al
  _BYTE *v7; // rcx
  KIRQL v8; // bl
  _QWORD *v9; // rdx
  int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = IopAdjustFileObjectKeepAliveCount(a1, (_DWORD)a2, 1, (unsigned int)&v11, (__int64)&v12);
  if ( v4 >= 0 && v11 == 1 )
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&qword_140385130);
      v7 = (_BYTE *)v12;
      v8 = v6;
      ++*(_DWORD *)(v12 + 32);
      if ( !v7[16] )
      {
        v9 = qword_140385120;
        if ( *((PVOID **)qword_140385120 + 1) != &qword_140385120 )
          __fastfail(3u);
        *(_QWORD *)v7 = qword_140385120;
        *((_QWORD *)v7 + 1) = &qword_140385120;
        v9[1] = v7;
        qword_140385120 = v7;
        v7[16] = 1;
        if ( !byte_140385158 )
        {
          byte_140385158 = 1;
          ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
        }
      }
      KxReleaseSpinLock(&qword_140385130);
      __writecr8(v8);
    }
    else
    {
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      LOBYTE(v5) = *(_BYTE *)(v12 + 18);
      PspAdjustKeepAliveCountProcess(a2, 1LL, a1, v5);
    }
  }
  return (unsigned int)v4;
}
