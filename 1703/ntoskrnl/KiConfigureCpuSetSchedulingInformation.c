/*
 * XREFs of KiConfigureCpuSetSchedulingInformation @ 0x140410C0C
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x14041093C (KiConfigureSchedulingInformation.c)
 *     KeConfigureHeteroProcessors @ 0x140418848 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x14001B1AC (RtlWriteAcquireTickLock.c)
 *     KiGetCpuSetData @ 0x14003BE34 (KiGetCpuSetData.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     RtlWriteReleaseTickLock @ 0x140149278 (RtlWriteReleaseTickLock.c)
 */

__int64 __fastcall KiConfigureCpuSetSchedulingInformation(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  _BYTE *CpuSetData; // r9
  char v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&KiCpuSetLock);
  RtlWriteAcquireTickLock(&KiCpuSetSequence);
  CpuSetData = (_BYTE *)KiGetCpuSetData(*(unsigned __int8 *)(a1 + 208), *(unsigned __int8 *)(a1 + 209));
  *CpuSetData = v4;
  CpuSetData[1] = *(_BYTE *)(a1 + 209);
  _BitScanForward64(&v5, *(_QWORD *)(a1 + 25176));
  v6 = (unsigned __int64 *)(a1 + 25200);
  CpuSetData[2] = v5;
  v7 = 0LL;
  v8 = 5LL;
  do
  {
    v9 = *v6++;
    if ( v9 )
      v7 = v9;
    --v8;
  }
  while ( v8 );
  if ( v7 )
  {
    _BitScanForward64(&v10, v7);
    CpuSetData[3] = v10;
  }
  _BitScanForward64(&v11, *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL));
  CpuSetData[4] = v11;
  CpuSetData[5] = *(_BYTE *)(a1 + 23986);
  RtlWriteReleaseTickLock(&KiCpuSetSequence);
  KxReleaseSpinLock(&KiCpuSetLock);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
