/*
 * XREFs of PspCreatePicoProcess @ 0x1406E3710
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 */

__int64 __fastcall PspCreatePicoProcess(__int64 a1, HANDLE *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  int v3; // ebx
  void *v6; // rsi
  int v7; // edi
  ULONG_PTR v8; // rcx
  int v9; // eax
  int v10; // ecx
  unsigned __int64 v11; // rax
  PVOID v12; // r14
  int v13; // eax
  HANDLE v14; // rbx
  volatile signed __int32 *v15; // r14
  volatile signed __int64 *v16; // rsi
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  PVOID v20; // [rsp+A0h] [rbp+50h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 24);
  v18 = 0LL;
  v20 = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  if ( (v3 & 0xFFFFFFF0) != 0 || (v3 & 6) != 0 && (v3 & 1) == 0 || !*(_QWORD *)(a1 + 16) )
    return (unsigned int)-1073741811;
  v7 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 128, (__int64)PsProcessType, 0, 1917023056, &v20, 0LL, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 )
    goto LABEL_10;
  v7 = ObpReferenceObjectByHandleWithTag(v8, 9, (__int64)SeTokenObjectType, 0, 1917023056, &v18, 0LL, 0LL);
  if ( v7 >= 0 )
  {
    v6 = (void *)v18;
LABEL_10:
    v9 = 0;
    if ( (v3 & 1) != 0 )
    {
      v9 = 2 * (v3 & 2 | 0x1000);
      if ( (v3 & 4) != 0 )
        v9 |= 0x4000u;
    }
    v10 = v9 | 1;
    if ( (v3 & 8) == 0 )
      v10 = v9;
    v11 = *(_QWORD *)(a1 + 16);
    v12 = v20;
    v13 = PsCreateMinimalProcess((struct _KPROCESS *)v20, 0LL, 0, v6, v10, v11, &Handle);
    v14 = Handle;
    v7 = v13;
    if ( v13 >= 0 )
    {
      v7 = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Handle,
             128,
             (__int64)PsProcessType,
             0,
             1917023056,
             &Object,
             0LL,
             0LL);
      if ( v7 >= 0 )
      {
        --CurrentThread->KernelApcDisable;
        v15 = (volatile signed __int32 *)Object;
        v16 = (volatile signed __int64 *)((char *)Object + 728);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 728, 0LL);
        if ( (v15[193] & 8) != 0 )
        {
          v7 = -1073741558;
        }
        else
        {
          _interlockedbittestandset(v15 + 516, 0);
          *a2 = Handle;
          Handle = 0LL;
        }
        if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v16);
        KeAbPostRelease((ULONG_PTR)v16);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        if ( v7 >= 0 )
          v7 = 0;
        ObfDereferenceObjectWithTag(Object, 0x72437350u);
        v6 = (void *)v18;
        v12 = v20;
        v14 = Handle;
      }
    }
    if ( v14 )
      ZwClose(v14);
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x72437350u);
    goto LABEL_30;
  }
  v12 = v20;
LABEL_30:
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x72437350u);
  return (unsigned int)v7;
}
