/*
 * XREFs of PspCreatePicoProcess @ 0x140719FC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
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
  int v17; // r12d
  bool v18; // sf
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF
  PVOID v22; // [rsp+B0h] [rbp+50h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 24);
  v20 = 0LL;
  v22 = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  if ( (v3 & 0xFFFFFFF0) != 0 || (v3 & 6) != 0 && (v3 & 1) == 0 || !*(_QWORD *)(a1 + 16) )
    return (unsigned int)-1073741811;
  v7 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 128, (__int64)PsProcessType, 0, 1917023056, &v22, 0LL, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 )
    goto LABEL_10;
  v7 = ObpReferenceObjectByHandleWithTag(v8, 9, (__int64)SeTokenObjectType, 0, 1917023056, &v20, 0LL, 0LL);
  if ( v7 >= 0 )
  {
    v6 = (void *)v20;
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
    v12 = v22;
    v13 = PsCreateMinimalProcess((struct _KPROCESS *)v22, 0LL, 0, v6, v10, 0, v11, 0LL, &Handle);
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
          _interlockedbittestandset(v15 + 192, 0xAu);
          *a2 = Handle;
          Handle = 0LL;
        }
        v17 = v7;
        if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v16);
        KeAbPostRelease((ULONG_PTR)v16);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ObfDereferenceObjectWithTag(Object, 0x72437350u);
        v6 = (void *)v20;
        v18 = v7 < 0;
        v12 = v22;
        v7 = 0;
        v14 = Handle;
        if ( v18 )
          v7 = v17;
      }
    }
    if ( v14 )
      ZwClose(v14);
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x72437350u);
    goto LABEL_29;
  }
  v12 = v22;
LABEL_29:
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x72437350u);
  return (unsigned int)v7;
}
