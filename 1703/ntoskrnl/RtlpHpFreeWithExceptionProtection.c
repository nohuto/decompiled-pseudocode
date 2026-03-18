/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x14023BDBC
 * Callers:
 *     RtlFreeHeap @ 0x14000ECC0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14000ED38 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x14023E0B8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpFreeHeapInternal(a1, a2, a3);
}
