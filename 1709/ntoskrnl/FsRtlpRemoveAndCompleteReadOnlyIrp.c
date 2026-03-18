/*
 * XREFs of FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1401E842C
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockCleanup @ 0x140024868 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400868E0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToNone @ 0x14013065C (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401490F0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E7FC8 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlCheckUpperOplock @ 0x1405EDDB0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall FsRtlpRemoveAndCompleteReadOnlyIrp(_QWORD *a1, int a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rbp
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax
  int v11; // eax

  v3 = a1 - 21;
  v5 = a1[2];
  ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 48), 0x746C6644u);
  *((_BYTE *)v3 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64(v3 + 13, 0LL);
  KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v3 + 69));
  v8 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v9 = (_QWORD *)a1[1], (_QWORD *)*v9 != a1) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  if ( *(_DWORD *)(v5 + 24) == 590400 )
  {
    if ( *((_BYTE *)v3 + 68) )
    {
      v3[7] = 0LL;
    }
    else
    {
      v10 = v3[3];
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_DWORD *)v10 = 1572865;
      *(_DWORD *)(v10 + 4) = 1;
      *(_DWORD *)(v10 + 8) = (a3 >> 12) & 7;
      v3[7] = 24LL;
    }
  }
  else
  {
    v3[7] = 8LL;
  }
  v11 = -1073741536;
  if ( !*((_BYTE *)v3 + 68) )
    v11 = a2;
  *((_DWORD *)v3 + 12) = v11;
  IofCompleteRequest((PIRP)v3, 1);
}
