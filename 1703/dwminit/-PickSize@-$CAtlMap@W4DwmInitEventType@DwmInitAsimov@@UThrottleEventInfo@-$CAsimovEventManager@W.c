/*
 * XREFs of ?PickSize@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEBAI_K@Z @ 0x180005E40
 * Callers:
 *     ?RemoveAll@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXXZ @ 0x180005C28 (-RemoveAll@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@.c)
 *     ?Rehash@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXI@Z @ 0x180005D4C (-Rehash@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4D.c)
 *     ?FreeNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180005EC8 (-FreeNode@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W.c)
 *     ?NewNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEAAPEAVCNode@12@AEBW4DwmInitEventType@DwmInitAsimov@@II@Z @ 0x18000608C (-NewNode@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::PickSize(
        __int64 a1,
        __int64 a2)
{
  double v2; // xmm1_8
  unsigned __int64 v3; // rax
  double v4; // xmm1_8
  unsigned __int64 v5; // rcx
  int v6; // edx
  unsigned int *v7; // rax
  __int64 result; // rax

  v2 = (double)(int)a2;
  if ( a2 < 0 )
    v2 = v2 + 1.844674407370955e19;
  v3 = 0LL;
  v4 = v2 / *(float *)(a1 + 20);
  if ( v4 >= 9.223372036854776e18 )
  {
    v4 = v4 - 9.223372036854776e18;
    if ( v4 < 9.223372036854776e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  if ( v5 > 0xFFFFFFFF )
    LODWORD(v5) = -1;
  v6 = 0;
  if ( (unsigned int)v5 > 0x11 )
  {
    v7 = `ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::PickSize'::`2'::s_anPrimes;
    do
    {
      ++v6;
      ++v7;
    }
    while ( (unsigned int)v5 > *v7 );
  }
  result = `ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::PickSize'::`2'::s_anPrimes[v6];
  if ( (_DWORD)result == -1 )
    return (unsigned int)v5;
  return result;
}
