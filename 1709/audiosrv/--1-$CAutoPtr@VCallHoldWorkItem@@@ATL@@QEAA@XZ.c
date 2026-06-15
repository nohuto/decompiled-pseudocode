/*
 * XREFs of ??1?$CAutoPtr@VCallHoldWorkItem@@@ATL@@QEAA@XZ @ 0x1800E668C
 * Callers:
 *     _AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor$1 @ 0x1800E6BE8 (_AudioDeviceMgr--AddWorkItemToQueue_--_1_--dtor$1.c)
 *     _AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor$0 @ 0x1800E8251 (_AudioDeviceMgr--WorkItemThreadProc_--_1_--dtor$0.c)
 *     _PhoneTopology3::AddWorkItemToQueue_::_1_::dtor$1 @ 0x1800EAD95 (_PhoneTopology3--AddWorkItemToQueue_--_1_--dtor$1.c)
 *     _PhoneTopology3::GetCellularEnable_::_1_::dtor$2 @ 0x1800EB846 (_PhoneTopology3--GetCellularEnable_--_1_--dtor$2.c)
 *     _PhoneTopology3::GetCellularRxMute_::_1_::dtor$2 @ 0x1800EBA15 (_PhoneTopology3--GetCellularRxMute_--_1_--dtor$2.c)
 *     _PhoneTopology3::GetCellularTxMute_::_1_::dtor$2 @ 0x1800EBBE5 (_PhoneTopology3--GetCellularTxMute_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<CallHoldWorkItem>::~CAutoPtr<CallHoldWorkItem>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
  *a1 = 0LL;
  return result;
}
