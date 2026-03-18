/*
 * XREFs of ExTryAcquirePushLockExclusiveEx @ 0x1400BB0F0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 */

char __fastcall ExTryAcquirePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // ecx
  __int64 v6; // rax
  int SessionId; // eax
  bool v8; // zf
  unsigned __int8 AbOrphanedEntrySummary; // di
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v11 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      goto LABEL_24;
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_6:
        if ( v2 )
        {
          if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
            && byte_1403899D0[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
          }
          else
          {
            SessionId = -1;
          }
          *(_DWORD *)(v2 + 40) = SessionId;
          *(_QWORD *)(v2 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v11);
          v8 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v8
            && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          goto LABEL_14;
        }
LABEL_24:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
        goto LABEL_11;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v6, AbEntrySummary);
    v12 = v6;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
    v2 = (unsigned __int64)&CurrentThread->LockEntries[v6];
    goto LABEL_6;
  }
LABEL_14:
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2, v2);
    return 0;
  }
  else
  {
    if ( v2 )
      *(_BYTE *)(v2 + 26) |= 1u;
    return 1;
  }
}
