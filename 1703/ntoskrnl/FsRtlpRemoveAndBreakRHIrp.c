/*
 * XREFs of FsRtlpRemoveAndBreakRHIrp @ 0x140019A38
 * Callers:
 *     FsRtlpCancelOplockRHIrp @ 0x140019134 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400192B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlUninitializeOplock @ 0x140029950 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14004E3D0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1400507C0 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140051EF4 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140019C10 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpModifyThreadPriorities @ 0x140019D84 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockDequeueRH @ 0x14004FB70 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockEnqueueRH @ 0x140052940 (FsRtlpOplockEnqueueRH.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndBreakRHIrp(
        PVOID P,
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
  int v13; // eax
  __int64 v14; // r8

  v8 = *((_QWORD *)P + 2);
  *((_QWORD *)P + 2) = 0LL;
  if ( a3 )
  {
    *(_BYTE *)(v8 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v8 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v8 + 69));
  }
  FsRtlpOplockDequeueRH(P);
  if ( *(_BYTE *)(v8 + 68) )
  {
    ObfDereferenceObjectWithTag(*((PVOID *)P + 3), 0x746C6644u);
    if ( *((_QWORD *)P + 5) )
      FsRtlpClearOwner(a2, P);
    ExFreePoolWithTag(P, 0);
    *(_QWORD *)(v8 + 56) = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)v12 = 0LL;
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
      *((_DWORD *)P + 12) = *((_DWORD *)P + 12) & 0xFF0FFFFF | (a5 != 0 ? 0x100000 : 0x800000);
      FsRtlpOplockEnqueueRH(a2 + 72, P, -a5);
      LOBYTE(v14) = 1;
      FsRtlpModifyThreadPriorities(a2, P, v14);
      FsRtlpOplockSendModernAppTermination(a2, P);
    }
    else
    {
      ObfDereferenceObjectWithTag(*((PVOID *)P + 3), 0x746C6644u);
      if ( *((_QWORD *)P + 5) )
        FsRtlpClearOwner(a2, P);
      ExFreePoolWithTag(P, 0);
    }
    *(_QWORD *)(v8 + 56) = 24LL;
  }
  v13 = -1073741536;
  if ( !*(_BYTE *)(v8 + 68) )
    v13 = a4;
  *(_DWORD *)(v8 + 48) = v13;
  IofCompleteRequest((PIRP)v8, 1);
}
