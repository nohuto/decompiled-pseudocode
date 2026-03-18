/*
 * XREFs of ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x180187C10
 * Callers:
 *     ??0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z @ 0x180155938 (--0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x180155E04 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x1800CE684 (-GetNode@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 *     ??0UsageEventData@DwmCoreAsimov@@QEAA@W4DwmEventType@1@@Z @ 0x180186F04 (--0UsageEventData@DwmCoreAsimov@@QEAA@W4DwmEventType@1@@Z.c)
 *     ??A?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAAEAUUsageEventData@DwmCoreAsimov@@_K@Z @ 0x1801870B4 (--A-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@UUsage.c)
 */

int __fastcall DwmCoreAsimov::CDwmEventManager::StartUsageLogging(_DWORD *a1, __int64 a2, int a3)
{
  __int64 Node; // rax
  time_t v7; // rbx
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-30h] BYREF
  int v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-10h]
  int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  LODWORD(Node) = GetCurrentThreadId();
  if ( (_DWORD)Node == a1[2] )
  {
    Node = ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::GetNode(
             (__int64 *)(*(_QWORD *)a1 + 168LL),
             a2,
             &v15,
             &v14,
             &v9);
    if ( !Node )
    {
      DwmCoreAsimov::UsageEventData::UsageEventData((__int64)v10, a3);
      v7 = time(0LL);
      Node = ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::operator[](
               (__int64 *)(*(_QWORD *)a1 + 168LL),
               a2);
      *(_DWORD *)(Node + 8) = v11;
      *(_QWORD *)(Node + 16) = v12;
      *(_QWORD *)(Node + 32) = v13;
      *(_QWORD *)(Node + 24) = v7;
    }
  }
  return Node;
}
