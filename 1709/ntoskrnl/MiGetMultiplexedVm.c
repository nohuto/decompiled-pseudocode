/*
 * XREFs of MiGetMultiplexedVm @ 0x1400A344C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiRecheckVaWorkingSet @ 0x1400A4950 (MiRecheckVaWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x1400BEF50 (MiProbeAndLockPrepare.c)
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x1400A3490 (MiGetSystemCacheReverseMap.c)
 */

__int64 __fastcall MiGetMultiplexedVm(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(MiGetSystemCacheReverseMap(a2) + 24);
  if ( (v2 & 1) != 0 )
    v2 &= ~1uLL;
  return *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v2 + 60LL) & 0x3FF)) + 6080LL;
}
