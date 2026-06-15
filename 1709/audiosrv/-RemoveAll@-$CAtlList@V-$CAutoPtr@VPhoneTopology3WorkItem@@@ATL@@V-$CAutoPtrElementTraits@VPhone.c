/*
 * XREFs of ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopology3WorkItem@@@2@@ATL@@QEAAXXZ @ 0x1800EC490
 * Callers:
 *     ??1AudioDeviceMgr@@MEAA@XZ @ 0x1800E66BC (--1AudioDeviceMgr@@MEAA@XZ.c)
 *     ?Shutdown@AudioDeviceMgr@@UEAAXXZ @ 0x1800E7F00 (-Shutdown@AudioDeviceMgr@@UEAAXXZ.c)
 *     ??1?$CAutoPtrList@VPhoneTopology3WorkItem@@@ATL@@QEAA@XZ @ 0x1800EA784 (--1-$CAutoPtrList@VPhoneTopology3WorkItem@@@ATL@@QEAA@XZ.c)
 *     ??1PhoneTopology3@@MEAA@XZ @ 0x1800EA78C (--1PhoneTopology3@@MEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800EB5A8 (-FreeNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18005A990 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800EB5A8 (-FreeNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2.c)
 */

void __fastcall ATL::CAtlList<ATL::CAutoPtr<PhoneTopology3WorkItem>,ATL::CAutoPtrElementTraits<PhoneTopology3WorkItem>>::RemoveAll(
        __int64 *a1)
{
  __int64 *v2; // rdx
  ATL::CAtlPlex **v3; // rcx

  while ( a1[2] )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v2;
    ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::FreeNode((__int64)a1, v2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v3 = (ATL::CAtlPlex **)a1[3];
  if ( v3 )
  {
    ATL::CAtlPlex::FreeDataChain(v3);
    a1[3] = 0LL;
  }
}
