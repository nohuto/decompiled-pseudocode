/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x14025163C
 * Callers:
 *     RtlFreeHeap @ 0x14010D190 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14010D208 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140253ED0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpFreeHeapInternal(a1, a2, a3);
}
