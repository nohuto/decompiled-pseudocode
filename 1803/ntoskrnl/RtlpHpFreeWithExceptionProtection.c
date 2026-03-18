/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x14028710C
 * Callers:
 *     RtlFreeHeap @ 0x1400AB340 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1400AB3B8 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1402931AC (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpFreeHeapInternal(a1, a2, a3);
}
