/*
 * XREFs of RtlpHeapExceptionFilter @ 0x1800F2DA8
 * Callers:
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x180042900 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180049470 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlValidateHeap @ 0x18004BEC0 (RtlValidateHeap.c)
 *     RtlGetUserInfoHeap @ 0x180077630 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180077930 (RtlpProbeUserBufferSafe.c)
 *     RtlCompactHeap @ 0x180090370 (RtlCompactHeap.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF5E0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F25E0 (RtlZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugAllocateHeap @ 0x180103090 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x18010343C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180103874 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180103A6C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180103D5C (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180103EFC (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180104040 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180104594 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180104758 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1801048E8 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180104A64 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x180104AEC (RtlDebugZeroHeap.c)
 *     RtlpValidateLFHBlock @ 0x18010674C (RtlpValidateLFHBlock.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1801088E8 (RtlpHpSegGetDescriptorValidateSafe.c)
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
  unk_18015C850 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_18015C850 + 1) = v2[1];
  *((_OWORD *)&unk_18015C850 + 2) = v2[2];
  *((_OWORD *)&unk_18015C850 + 3) = v2[3];
  *((_OWORD *)&unk_18015C850 + 4) = v2[4];
  *((_OWORD *)&unk_18015C850 + 5) = v2[5];
  *((_OWORD *)&unk_18015C850 + 6) = v2[6];
  *((_OWORD *)&unk_18015C850 + 7) = v2[7];
  *((_OWORD *)&unk_18015C850 + 8) = v2[8];
  *((_QWORD *)&unk_18015C850 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_18015C8F0;
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
