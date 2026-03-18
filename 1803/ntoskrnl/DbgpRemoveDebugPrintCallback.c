/*
 * XREFs of DbgpRemoveDebugPrintCallback @ 0x140286508
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1402863F0 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgpRemoveDebugPrintCallback(void *a1)
{
  unsigned int v1; // ebx
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned __int8 CurrentIrql; // si
  _UNKNOWN **i; // r8
  _UNKNOWN **v6; // rdx
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v8; // rax

  v1 = 0;
  v3 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
  for ( i = (_UNKNOWN **)RtlpDebugPrintCallbackList; i != &RtlpDebugPrintCallbackList; i = (_UNKNOWN **)*i )
  {
    v6 = i - 3;
    if ( *(i - 1) == a1 )
    {
      _m_prefetchw(v6);
      if ( (_InterlockedOr((volatile signed __int32 *)v6, 1u) & 1) == 0 )
      {
        v3 = (struct _EX_RUNDOWN_REF *)(i - 3);
        break;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( v3 )
  {
    ExWaitForRundownProtectionRelease(v3 + 1);
    ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
    Count = v3[3].Count;
    v8 = (struct _EX_RUNDOWN_REF **)v3[4].Count;
    if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &v3[3] || *v8 != &v3[3] )
      __fastfail(3u);
    *v8 = (struct _EX_RUNDOWN_REF *)Count;
    *(_QWORD *)(Count + 8) = v8;
    if ( v8 == (struct _EX_RUNDOWN_REF **)Count )
      RtlpDebugPrintCallbacksActive = 0;
    ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
    __writecr8(CurrentIrql);
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    __writecr8(CurrentIrql);
    return (unsigned int)-1073741275;
  }
  return v1;
}
