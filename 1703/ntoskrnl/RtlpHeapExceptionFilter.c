/*
 * XREFs of RtlpHeapExceptionFilter @ 0x14023E0B8
 * Callers:
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x14023BD44 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x14023BDBC (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpAnalyzeHeapFailure @ 0x140243E68 (RtlpAnalyzeHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x140244BA0 (RtlpProbeUserBufferSafe.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 *     RtlZeroHeap @ 0x1406EB360 (RtlZeroHeap.c)
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
  unk_140340C60 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_140340C60 + 1) = v2[1];
  *((_OWORD *)&unk_140340C60 + 2) = v2[2];
  *((_OWORD *)&unk_140340C60 + 3) = v2[3];
  *((_OWORD *)&unk_140340C60 + 4) = v2[4];
  *((_OWORD *)&unk_140340C60 + 5) = v2[5];
  *((_OWORD *)&unk_140340C60 + 6) = v2[6];
  *((_OWORD *)&unk_140340C60 + 7) = v2[7];
  *((_OWORD *)&unk_140340C60 + 8) = v2[8];
  *((_QWORD *)&unk_140340C60 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_140340D00;
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
