/*
 * XREFs of AlpcpDeletePort @ 0x1404736A0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpFreeCompletionPacketLookaside @ 0x14003F3F0 (AlpcpFreeCompletionPacketLookaside.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     AlpcpSendCloseMessage @ 0x140473580 (AlpcpSendCloseMessage.c)
 *     AlpcpDestroyPort @ 0x140473880 (AlpcpDestroyPort.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpDeletePort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rsi
  void *v7; // rcx
  int v8; // ecx
  void *v9; // rcx
  void *v10; // rcx
  ULONG_PTR v11; // rcx
  void *v13; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
    AlpcpSendCloseMessage(a1);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    ExAcquirePushLockExclusiveEx(v3 - 16, 0LL);
    v4 = *(_DWORD *)(a1 + 416) & 6;
    switch ( v4 )
    {
      case 2:
        **(_QWORD **)(a1 + 16) = 0LL;
        break;
      case 4:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0LL;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
LABEL_8:
        if ( v5 )
        {
          *(_QWORD *)(v5 + 424) = 0LL;
          *(_QWORD *)(v5 + 432) = 0LL;
        }
        break;
      case 6:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0LL;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
        goto LABEL_8;
    }
    v6 = *(_QWORD *)(a1 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 - 16));
    KeAbPostRelease(v6 - 16);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v7 = *(void **)(a1 + 32);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    AlpcpFreeCompletionPacketLookaside(*(_QWORD *)(a1 + 48));
  }
  v8 = *(_DWORD *)(a1 + 416);
  if ( (v8 & 6) == 4 && (v8 & 0x400) == 0 )
  {
    v13 = *(void **)(a1 + 80);
    if ( v13 )
      ObfDereferenceObject(v13);
  }
  v9 = *(void **)(a1 + 24);
  if ( ((unsigned __int8)v9 & 1) == 0 && v9 )
  {
    if ( ((unsigned __int8)v9 & 1) != 0 )
      v9 = 0LL;
    ObfDereferenceObjectWithTag(v9, 0x63706C41u);
  }
  v10 = *(void **)(a1 + 368);
  if ( v10 )
    ObfDereferenceObject(v10);
  v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
  if ( v11 )
    AlpcpDereferenceBlobEx(v11);
  AlpcpDestroyPort(a1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
