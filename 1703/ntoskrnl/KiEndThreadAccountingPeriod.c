/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x140043E00
 * Callers:
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiChooseTargetProcessor @ 0x1400E11B0 (KiChooseTargetProcessor.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 *     KiScanInterruptObjectList @ 0x140182B80 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140182D50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182E90 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140182FD0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183A00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140184490 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140185950 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x140185EF0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140186420 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401869B0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140186F40 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401874D0 (KiVmbusInterrupt3.c)
 *     KiIpiInterruptSubDispatch @ 0x1401883D0 (KiIpiInterruptSubDispatch.c)
 *     KxDispatchInterrupt @ 0x1401885E0 (KxDispatchInterrupt.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x140167AAC (PoGetFrequencyBucket.c)
 *     KiEndCounterAccumulation @ 0x14020207C (KiEndCounterAccumulation.c)
 *     RtlTimelineBitmapUpdate @ 0x140204B38 (RtlTimelineBitmapUpdate.c)
 */

void __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // r11
  __int64 v5; // r10
  __int64 v7; // rcx
  _QWORD *i; // rcx
  __int64 v9; // rsi
  unsigned int FrequencyBucket; // eax
  __int64 v11; // r14
  __int64 v12; // rbp

  v3 = *(_BYTE *)(a2 + 2);
  v5 = a2;
  if ( (v3 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 124) + 23504) += *(_QWORD *)(a1 + 23488) - *(_QWORD *)(a1 + 23496);
    v3 &= ~0x10u;
    *(_QWORD *)(a1 + 23496) = 0LL;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(a2 + 1968);
    if ( v9 )
    {
      FrequencyBucket = PoGetFrequencyBucket();
      v11 = *(unsigned __int8 *)(a1 + 23986);
      v12 = FrequencyBucket;
      *(_QWORD *)(v9 + 8 * (v11 + 2LL * FrequencyBucket)) += a3;
      RtlTimelineBitmapUpdate(v9 + 192, (unsigned int)KiTimelineBitmapTime);
      if ( (*(_DWORD *)(v5 + 120) & 4) == 0 )
        *(_QWORD *)(v9 + 16LL * (unsigned int)v12 + 8) += a3;
      if ( *(_QWORD *)(v5 + 1912) )
      {
        *(_QWORD *)(v9 + 8 * (v11 + 16 + 2 * v12)) += a3;
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v5 + 1912) + 1968LL) + 8 * (v11 + 8 + 2 * v12)),
          a3);
      }
    }
    v3 &= ~0x20u;
  }
  if ( (v3 & 0x3E) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 104);
    if ( v7 )
    {
      for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v7); i; i = (_QWORD *)i[51] )
        *i += a3;
    }
    if ( (*(_BYTE *)(v5 + 2) & 8) != 0
      && (*(_QWORD *)(v5 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                           + 136LL) )
    {
      *(_QWORD *)(a1 + 23528) += a3;
    }
    if ( KeHeteroSystem != 1 && *(_BYTE *)(v5 + 125) )
    {
      if ( (*(_DWORD *)(v5 + 120) & 4) != 0 )
        *(_QWORD *)(a1 + 23536) += a3;
      else
        *(_QWORD *)(a1 + 23544) += a3;
    }
    if ( *(_QWORD *)(v5 + 360) )
      KiEndCounterAccumulation(v5);
  }
}
