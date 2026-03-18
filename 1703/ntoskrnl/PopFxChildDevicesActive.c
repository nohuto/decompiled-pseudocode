/*
 * XREFs of PopFxChildDevicesActive @ 0x1406C7620
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x140031D28 (IoControlPnpDeviceActionQueue.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

SIZE_T __fastcall PopFxChildDevicesActive(__int64 a1, SIZE_T *a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  SIZE_T v4; // rdi
  unsigned int v7; // esi
  __int64 *v8; // rax
  __int64 *v9; // rbx
  unsigned int v10; // ebp
  int v11; // eax
  void *v12; // rcx
  __int64 *v13; // rax
  void *v14; // rcx
  __int64 *v15; // rax
  SIZE_T result; // rax
  SIZE_T v17; // r9
  SIZE_T v18; // rdx
  unsigned int v19; // r8d
  SIZE_T v20; // rcx
  __int64 v21; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 48);
  *a2 = 0LL;
  v7 = 0;
  *a3 = 0;
  --CurrentThread->KernelApcDisable;
  IoControlPnpDeviceActionQueue(1);
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v8 = *(__int64 **)(v4 + 8);
  v9 = (__int64 *)v4;
  while ( v8 )
  {
    v9 = v8;
    v8 = (__int64 *)v8[1];
  }
  if ( v9 != (__int64 *)v4 )
  {
    v10 = 1;
    do
    {
      v11 = *((_DWORD *)v9 + 74);
      if ( (v11 & 0x10) == 0 && *((_DWORD *)v9 + 35) == 1 )
      {
        v12 = (void *)v9[4];
        *((_DWORD *)v9 + 74) = v11 | 0x20;
        ObfReferenceObject(v12);
        if ( v10 < v7 )
          return ObfDereferenceObject((PVOID)v9[4]);
        ++v7;
        ++v10;
        v13 = v9;
        if ( v9 != (__int64 *)v4 )
        {
          while ( *((_DWORD *)v13 + 35) == 1 )
          {
            v13 = (__int64 *)v13[2];
            if ( v13 == (__int64 *)v4 )
              goto LABEL_14;
          }
          v14 = (void *)v9[4];
          *((_DWORD *)v9 + 74) &= ~0x20u;
          ObfDereferenceObject(v14);
          --v7;
          --v10;
        }
      }
LABEL_14:
      v15 = (__int64 *)*v9;
      if ( *v9 )
      {
        do
        {
          v9 = v15;
          v15 = (__int64 *)v15[1];
        }
        while ( v15 );
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    while ( v9 != (__int64 *)v4 );
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  IoControlPnpDeviceActionQueue(0);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v7 )
  {
    result = 720LL * v7;
    if ( is_mul_ok(0x2D0uLL, v7) )
    {
      result = (SIZE_T)ExAllocatePoolWithTag(PagedPool, result, 0x4D584650u);
      *a2 = result;
      v17 = result;
      if ( result )
      {
        v18 = *(_QWORD *)(v4 + 8);
        v19 = 0;
        *a3 = v7;
        v20 = v4;
        while ( v18 )
        {
          v20 = v18;
          v18 = *(_QWORD *)(v18 + 8);
        }
        while ( v20 != v4 )
        {
          if ( (*(_DWORD *)(v20 + 296) & 0x20) != 0 )
          {
            v21 = v19++;
            *(_QWORD *)(v17 + 8 * v21) = v20;
          }
          result = *(_QWORD *)v20;
          if ( *(_QWORD *)v20 )
          {
            do
            {
              v20 = result;
              result = *(_QWORD *)(result + 8);
            }
            while ( result );
          }
          else
          {
            v20 = *(_QWORD *)(v20 + 16);
          }
        }
      }
    }
  }
  return result;
}
