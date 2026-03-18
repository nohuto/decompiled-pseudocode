/*
 * XREFs of DbgEnumerateCallback @ 0x1401323C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
    if ( ExAcquireRundownProtection_0(Count - 2) )
    {
      v4 = Count[-1].Count;
      *a1 = Count;
      break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( v3 )
    ExReleaseRundownProtection_0(v3 - 2);
  return v4;
}
