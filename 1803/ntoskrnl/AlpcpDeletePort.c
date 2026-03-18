/*
 * XREFs of AlpcpDeletePort @ 0x14055F430
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400B88D8 (AlpcpFreeCompletionPacketLookaside.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpSendCloseMessage @ 0x1404DB5D0 (AlpcpSendCloseMessage.c)
 *     AlpcpDestroyPort @ 0x14055F610 (AlpcpDestroyPort.c)
 */

_QWORD *__fastcall AlpcpDeletePort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  void *v10; // rcx
  int v11; // ecx
  void *v12; // rcx
  void *v13; // rcx
  ULONG_PTR v14; // rcx
  void *v16; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
    AlpcpSendCloseMessage(a1);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    ExAcquirePushLockExclusiveEx(v3 - 16, 0LL);
    v7 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
    switch ( v7 )
    {
      case 1:
        **(_QWORD **)(a1 + 16) = 0LL;
        break;
      case 2:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
        goto LABEL_7;
      case 3:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
LABEL_7:
        if ( v8 )
        {
          *(_QWORD *)(v8 + 424) = 0LL;
          *(_QWORD *)(v8 + 432) = 0LL;
        }
        break;
    }
    v9 = *(_QWORD *)(a1 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 - 16), v4, v5, v6);
    KeAbPostRelease(v9 - 16);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v10 = *(void **)(a1 + 32);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    AlpcpFreeCompletionPacketLookaside(*(KSPIN_LOCK **)(a1 + 48));
  }
  v11 = *(_DWORD *)(a1 + 416);
  if ( (v11 & 6) == 4 && (v11 & 0x400) == 0 )
  {
    v16 = *(void **)(a1 + 80);
    if ( v16 )
      ObfDereferenceObject(v16);
  }
  v12 = 0LL;
  if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
    v12 = *(void **)(a1 + 24);
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x63706C41u);
  v13 = *(void **)(a1 + 368);
  if ( v13 )
    ObfDereferenceObject(v13);
  v14 = _InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
  if ( v14 )
    AlpcpDereferenceBlobEx(v14, 1);
  AlpcpDestroyPort(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
