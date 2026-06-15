/*
 * XREFs of ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800EB5A8
 * Callers:
 *     ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x1800E8118 (-WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopology3WorkItem@@@2@@ATL@@QEAAXXZ @ 0x1800EC490 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhone.c)
 *     ?WorkItemThreadProc@PhoneTopology3@@AEAAXXZ @ 0x1800ECCF8 (-WorkItemThreadProc@PhoneTopology3@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopology3WorkItem@@@2@@ATL@@QEAAXXZ @ 0x1800EC490 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhone.c)
 */

__int64 __fastcall ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::FreeNode(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  bool v6; // zf

  v4 = a2[2];
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  a2[2] = 0LL;
  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v6 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v6 )
    return ATL::CAtlList<ATL::CAutoPtr<PhoneTopology3WorkItem>,ATL::CAutoPtrElementTraits<PhoneTopology3WorkItem>>::RemoveAll(a1);
  return result;
}
