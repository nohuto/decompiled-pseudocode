/*
 * XREFs of RtlpHeapExceptionFilter @ 0x1402931AC
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x140287094 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x14028710C (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpProbeUserBufferSafe @ 0x14028C138 (RtlpProbeUserBufferSafe.c)
 *     RtlpAnalyzeHeapFailure @ 0x140293310 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpHeapHandleError @ 0x14029367C (RtlpHpHeapHandleError.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x140298038 (RtlpHpSegGetDescriptorValidateSafe.c)
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 *     RtlZeroHeap @ 0x140786EC0 (RtlZeroHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHeapExceptionFilter(int a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax

  if ( a1 == -1073741571 || a1 == -1073741420 || a1 == -1073741801 )
    return 0LL;
  v2 = *(_OWORD **)a2;
  unk_14039C1A0 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_14039C1A0 + 1) = v2[1];
  *((_OWORD *)&unk_14039C1A0 + 2) = v2[2];
  *((_OWORD *)&unk_14039C1A0 + 3) = v2[3];
  *((_OWORD *)&unk_14039C1A0 + 4) = v2[4];
  *((_OWORD *)&unk_14039C1A0 + 5) = v2[5];
  *((_OWORD *)&unk_14039C1A0 + 6) = v2[6];
  *((_OWORD *)&unk_14039C1A0 + 7) = v2[7];
  *((_OWORD *)&unk_14039C1A0 + 8) = v2[8];
  *((_QWORD *)&unk_14039C1A0 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_14039C240;
  v4 = *(_OWORD **)(a2 + 8);
  v5 = 9LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(v3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  *v3 = *v4;
  v3[1] = v4[1];
  v3[2] = v4[2];
  v3[3] = v4[3];
  v7 = v4[4];
  result = 1LL;
  v3[4] = v7;
  return result;
}
