/*
 * XREFs of PopWakeDeviceList @ 0x140472790
 * Callers:
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x14005C7F0 (KeInitializeSemaphore.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     PopNotifyDevice @ 0x140472AA4 (PopNotifyDevice.c)
 */

int __fastcall PopWakeDeviceList(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rax
  LONG v5; // ecx
  int v6; // ebx
  LONG v7; // ebp
  struct _KSEMAPHORE *p_Object; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  struct _KSEMAPHORE Object; // [rsp+48h] [rbp-50h] BYREF
  struct _KSEMAPHORE Semaphore; // [rsp+68h] [rbp-30h] BYREF

  v2 = (_QWORD *)(a2 + 40);
  v3 = *(_QWORD **)(a2 + 40);
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 4);
  while ( v3 != v2 )
  {
    v3 = (_QWORD *)*v3;
    ++v5;
  }
  KeInitializeSemaphore(&Semaphore, v5, v7);
  KeInitializeSemaphore(&Object, 0, v7);
  a1[4] = &Semaphore;
  p_Object = &Object;
  a1[5] = &Object;
  if ( v7 > 0 )
  {
    do
    {
      KeWaitForSingleObject(&Semaphore, Executive, 0, 0, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_1403A9FF0 + 1, &LockHandle);
      v9 = (_QWORD *)*v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
        __fastfail(3u);
      *v2 = v10;
      *(_QWORD *)(v10 + 8) = v2;
      v11 = (_QWORD *)a1[55];
      if ( (_QWORD *)*v11 != a1 + 54 )
        __fastfail(3u);
      v9[1] = v11;
      *v9 = a1 + 54;
      *v11 = v9;
      a1[55] = v9;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      --v7;
      ++v6;
      LODWORD(p_Object) = PopNotifyDevice(a1, v9);
      if ( (PopSimulate & 0x80000) != 0 )
      {
        while ( v6 > 0 )
        {
          LODWORD(p_Object) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          --v6;
        }
      }
    }
    while ( v7 > 0 );
    while ( v6 > 0 )
    {
      LODWORD(p_Object) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      --v6;
    }
  }
  a1[4] = 0LL;
  a1[5] = 0LL;
  return (int)p_Object;
}
