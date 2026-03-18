/*
 * XREFs of RtlpProbeUserBufferSafe @ 0x140254080
 * Callers:
 *     RtlpFreeHeapInternal @ 0x14010D208 (RtlpFreeHeapInternal.c)
 *     RtlpSizeHeapInternal @ 0x140254288 (RtlpSizeHeapInternal.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x140253ED0 (RtlpHeapExceptionFilter.c)
 */

unsigned __int8 *__fastcall RtlpProbeUserBufferSafe(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int8 *v2; // rdx
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // rdx
  int v5; // ecx

  if ( (a2 & 0xF) != 0 )
  {
    v3 = a2;
    v4 = a1;
    v5 = 9;
    goto LABEL_7;
  }
  v2 = (unsigned __int8 *)(a2 - 16);
  _m_prefetchw(v2);
  if ( v2[15] == 5 )
    v2 -= 16 * v2[14];
  if ( (v2[15] & 0x3F) == 0 )
  {
    v3 = (ULONG_PTR)v2;
    v4 = a1;
    v5 = 8;
LABEL_7:
    RtlpLogHeapFailure(v5, v4, v3, 0LL, 0LL);
    return 0LL;
  }
  return v2;
}
