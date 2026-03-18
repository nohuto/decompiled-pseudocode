/*
 * XREFs of FsRtlpRemoveAndBreakRHIrp @ 0x1400246D8
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockCleanup @ 0x140024868 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400868E0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140108A6C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x1401175A0 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401490F0 (FsRtlpRequestExclusiveOplock.c)
 * Callees:
 *     FsRtlpOplockEnqueueRH @ 0x1400242F4 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpOplockDequeueRH @ 0x140024C74 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140024CE4 (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x140127258 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1401282DC (FsRtlpOplockSendModernAppTermination.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndBreakRHIrp(
        _QWORD *P,
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

  v8 = P[2];
  P[2] = 0LL;
  if ( a3 )
  {
    *(_BYTE *)(v8 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v8 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v8 + 69));
  }
  FsRtlpOplockDequeueRH(P);
  if ( *(_BYTE *)(v8 + 68) )
  {
    ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
    if ( P[5] )
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
      *((_DWORD *)P + 12) = P[6] & 0xFF0FFFFF | (a5 != 0 ? 0x100000 : 0x800000);
      FsRtlpOplockEnqueueRH((__int64 *)(a2 + 72), P);
      LOBYTE(v14) = 1;
      FsRtlpModifyThreadPriorities(a2, P, v14);
      FsRtlpOplockSendModernAppTermination(a2, P);
    }
    else
    {
      ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
      if ( P[5] )
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
