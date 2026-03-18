/*
 * XREFs of ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1800CE5F4
 * Callers:
 *     ?NewNode@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x1800CE328 (-NewNode@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4.c)
 *     ?NewNode@?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@AEAAPEAVCNode@12@AEBW4DwmEventType@DwmCoreAsimov@@II@Z @ 0x1800CF418 (-NewNode@-$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4DwmE.c)
 *     ?NewNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x180187308 (-NewNode@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 * Callees:
 *     <none>
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlPlex::Create(
        struct ATL::CAtlPlex **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  struct ATL::CAtlPlex *result; // rax

  if ( a2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < a3 )
      return 0LL;
    v4 = a3 * a2;
  }
  else
  {
    v4 = 0LL;
  }
  if ( ~v4 >= 8 )
  {
    result = (struct ATL::CAtlPlex *)malloc(v4 + 8);
    if ( result )
    {
      *(_QWORD *)result = *a1;
      *a1 = result;
      return result;
    }
  }
  return 0LL;
}
