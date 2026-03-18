/*
 * XREFs of FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140225B9C
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400655BC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x140067180 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140067600 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakToNone @ 0x1400D21C0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14014A828 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140225758 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlCheckUpperOplock @ 0x140715180 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall FsRtlpRemoveAndCompleteReadOnlyIrp(_QWORD *a1, int a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rbp
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax

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
    v10 = 0LL;
    if ( !*((_BYTE *)v3 + 68) )
    {
      v11 = v3[3];
      *(_QWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      v10 = 24LL;
      *(_DWORD *)v11 = 1572865;
      *(_DWORD *)(v11 + 4) = 1;
      *(_DWORD *)(v11 + 8) = (a3 >> 12) & 7;
    }
  }
  else
  {
    v10 = 8LL;
  }
  v3[7] = v10;
  v12 = -1073741536;
  if ( !*((_BYTE *)v3 + 68) )
    v12 = a2;
  *((_DWORD *)v3 + 12) = v12;
  IofCompleteRequest((PIRP)v3, 1);
}
