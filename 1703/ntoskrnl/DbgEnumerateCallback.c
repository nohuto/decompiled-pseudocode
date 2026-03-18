/*
 * XREFs of DbgEnumerateCallback @ 0x14003C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

unsigned __int64 __fastcall DbgEnumerateCallback(struct _EX_RUNDOWN_REF **a1)
{
  struct _EX_RUNDOWN_REF *Count; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned __int64 v4; // rsi

  ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
  Count = *a1;
  if ( *a1 )
  {
    v3 = *a1;
  }
  else
  {
    Count = (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList;
    v3 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    if ( Count == (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList )
      break;
    if ( ExAcquireRundownProtection(Count - 2) )
    {
      v4 = Count[-1].Count;
      *a1 = Count;
      break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( v3 )
    ExReleaseRundownProtection(v3 - 2);
  return v4;
}
