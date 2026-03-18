/*
 * XREFs of FsRtlpRemoveAndBreakRHIrp @ 0x140065408
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400655BC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x140067180 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140067600 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6F7C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x1400B83C0 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14014A828 (FsRtlpRequestExclusiveOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1400653C4 (FsRtlpClearOwner.c)
 *     FsRtlpOplockDequeueRH @ 0x14006758C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockEnqueueRH @ 0x140067FD8 (FsRtlpOplockEnqueueRH.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C8AF4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400CC7A4 (FsRtlpOplockSendModernAppTermination.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndBreakRHIrp(
        __int64 P,
        __int64 a2,
        char a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        __int16 a8)
{
  __int64 v8; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // r8

  v8 = *(_QWORD *)(P + 16);
  *(_QWORD *)(P + 16) = 0LL;
  if ( a3 )
  {
    *(_BYTE *)(v8 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v8 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v8 + 69));
  }
  FsRtlpOplockDequeueRH(P);
  if ( *(_BYTE *)(v8 + 68) )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(P + 24), 0x746C6644u);
    if ( *(_QWORD *)(P + 40) )
      FsRtlpClearOwner(a2, P);
    ExFreePoolWithTag((PVOID)P, 0);
    v13 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)v12 = 0LL;
    v13 = 24LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)v12 = 1572865;
    *(_DWORD *)(v12 + 4) = 3;
    *(_DWORD *)(v12 + 8) = (a5 >> 12) & 7;
    *(_DWORD *)(v12 + 12) = a6;
    if ( (a6 & 2) != 0 )
    {
      *(_DWORD *)(v12 + 16) = a7;
      *(_WORD *)(v12 + 20) = a8;
    }
    if ( (a6 & 1) != 0 )
    {
      *(_DWORD *)(P + 48) = *(_DWORD *)(P + 48) & 0xFF0FFFFF | (a5 != 0 ? 0x100000 : 0x800000);
      FsRtlpOplockEnqueueRH(a2 + 72, P, -a5);
      LOBYTE(v15) = 1;
      FsRtlpModifyThreadPriorities(a2, P, v15);
      FsRtlpOplockSendModernAppTermination(a2, P);
    }
    else
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(P + 24), 0x746C6644u);
      if ( *(_QWORD *)(P + 40) )
        FsRtlpClearOwner(a2, P);
      ExFreePoolWithTag((PVOID)P, 0);
    }
  }
  *(_QWORD *)(v8 + 56) = v13;
  v14 = -1073741536;
  if ( !*(_BYTE *)(v8 + 68) )
    v14 = a4;
  *(_DWORD *)(v8 + 48) = v14;
  IofCompleteRequest((PIRP)v8, 1);
}
