/*
 * XREFs of MiSystemCacheVaControlArea @ 0x140102068
 * Callers:
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiRecheckVaWorkingSet @ 0x1400B1B38 (MiRecheckVaWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x1400B4C90 (MiProbeAndLockPrepare.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x1400A02B0 (MiGetSystemCacheReverseMap.c)
 */

__int64 __fastcall MiSystemCacheVaControlArea(unsigned __int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(MiGetSystemCacheReverseMap(a1) + 24);
  if ( (v1 & 1) != 0 )
    v1 &= ~1uLL;
  return *(_QWORD *)v1;
}
