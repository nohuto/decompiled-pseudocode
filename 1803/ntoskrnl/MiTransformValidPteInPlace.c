/*
 * XREFs of MiTransformValidPteInPlace @ 0x1400C022C
 * Callers:
 *     MiShadowTopLevelPxes @ 0x140070E64 (MiShadowTopLevelPxes.c)
 *     MiInitializeSystemPageTable @ 0x140071268 (MiInitializeSystemPageTable.c)
 *     MiReplicatePteChangeToProcess @ 0x14016B5AC (MiReplicatePteChangeToProcess.c)
 *     MiPfnRangeIsZero @ 0x14017A9CC (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeLargePageTable @ 0x14025BAE8 (MiMakeLargePageTable.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiFlushValidPteFromTb @ 0x1400C02DC (MiFlushValidPteFromTb.c)
 */

signed __int64 __fastcall MiTransformValidPteInPlace(
        volatile signed __int64 *a1,
        __int64 a2,
        signed __int64 a3,
        unsigned int a4)
{
  signed __int64 result; // rax
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rtt
  signed __int64 v11; // rtt

  if ( (MiFlags & 0x4000000) != 0 )
    _mm_lfence();
  result = *a1;
  while ( result != a3 )
  {
    while ( (result & 0x20) != 0 )
    {
      v9 = result & 0xFFFFFFFFFFFFFFDFuLL;
      v10 = result;
      result = _InterlockedCompareExchange64(a1, result & 0xFFFFFFFFFFFFFFDFuLL, result);
      if ( v10 == result )
      {
        MiFlushValidPteFromTb(a2, result, a4);
        result = v9;
        break;
      }
    }
    v11 = result;
    result = _InterlockedCompareExchange64(a1, a3, result);
    if ( v11 == result )
    {
      if ( (MiFlags & 0x800) != 0 )
        result |= 0x20uLL;
      if ( (result & 0x20) != 0 )
        return MiFlushValidPteFromTb(a2, result, a4);
      return result;
    }
  }
  return result;
}
