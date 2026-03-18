/*
 * XREFs of DbgpRemoveDebugPrintCallback @ 0x140250AA8
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x140250990 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgpRemoveDebugPrintCallback(void *a1)
{
  unsigned __int8 CurrentIrql; // si
  _UNKNOWN **i; // rdx
  struct _EX_RUNDOWN_REF *v4; // rbx
  unsigned int v5; // edi
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v8; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
  for ( i = (_UNKNOWN **)RtlpDebugPrintCallbackList; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &RtlpDebugPrintCallbackList )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
      __writecr8(CurrentIrql);
      return (unsigned int)-1073741275;
    }
    v4 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( *(i - 1) == a1 )
    {
      _m_prefetchw(v4);
      if ( (_InterlockedOr((volatile signed __int32 *)v4, 1u) & 1) == 0 )
        break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  ExWaitForRundownProtectionRelease(v4 + 1);
  ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
  Count = v4[3].Count;
  v8 = (struct _EX_RUNDOWN_REF **)v4[4].Count;
  if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &v4[3] || *v8 != &v4[3] )
    __fastfail(3u);
  v5 = 0;
  *v8 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v8;
  if ( v8 == (struct _EX_RUNDOWN_REF **)Count )
    RtlpDebugPrintCallbacksActive = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(v4, 0);
  return v5;
}
