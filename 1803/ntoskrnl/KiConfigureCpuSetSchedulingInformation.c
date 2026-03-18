/*
 * XREFs of KiConfigureCpuSetSchedulingInformation @ 0x140175FAC
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x14047B818 (KiConfigureSchedulingInformation.c)
 *     KeConfigureHeteroProcessors @ 0x140741178 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x1400A9968 (RtlWriteAcquireTickLock.c)
 */

__int64 __fastcall KiConfigureCpuSetSchedulingInformation(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *v3; // rdx
  _BYTE *v4; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&KiCpuSetLock);
  RtlWriteAcquireTickLock(&KiCpuSetSequence);
  v3 = (unsigned __int64 *)(a1 + 24944);
  v4 = (_BYTE *)(KiCpuSetData + 16LL * (*(unsigned __int8 *)(a1 + 209) + (*(unsigned __int8 *)(a1 + 208) << 6)));
  *v4 = *(_BYTE *)(a1 + 208);
  v4[1] = *(_BYTE *)(a1 + 209);
  _BitScanForward64(&v5, *(_QWORD *)(a1 + 24920));
  v4[2] = v5;
  v6 = 0LL;
  v7 = 5LL;
  do
  {
    v8 = *v3++;
    if ( !v8 )
      v8 = v6;
    v6 = v8;
    --v7;
  }
  while ( v7 );
  if ( v8 )
  {
    _BitScanForward64(&v8, v8);
    v4[3] = v8;
  }
  _BitScanForward64(&v9, *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL));
  v4[4] = v9;
  v4[5] = *(_BYTE *)(a1 + 23858);
  v4[6] = *(_BYTE *)(a1 + 23859);
  ++KiCpuSetSequence;
  KxReleaseSpinLock(&KiCpuSetLock);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
